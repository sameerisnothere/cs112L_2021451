#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size; 
    int* arr= new int[size];
    int sec_max=*arr, sec_min=*arr;
    int n= size;
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>*(arr+i); 
    }

    cout<<"Input array: ";
    for(int i=0;i<size;i++){
        cout<<*(arr+i)<<" "; 
    }

    int negcount=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0)
            negcount++;
    }
    int poscount=size-negcount;
    
    int* temp=new int[negcount];
    for(int i=0;i<size;i++){
        for(int j=0;j<negcount;j++){
                if(arr[i]<0){
                temp[j]=arr[i];
            }
        }
    }

    int* temp2=new int[negcount];
    for(int i=0;i<size;i++){
        for(int j=0;j<poscount;j++){
                if(arr[i]>0){
                temp2[j]=arr[i];
            }
        }
    }

    cout<<"Your array: ";
    for(int i=0;i<poscount;i++){
        cout<<temp2[i]<<" ";
    }
    for(int i=0;i<negcount;i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}