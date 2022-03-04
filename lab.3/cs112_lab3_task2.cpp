#include <iostream>
using namespace std;

int main ()
{
    int size;
    cout<<"Enter array size: ";
    cin>>size; 
    int* arr= new int[size];
    int n= size;
    cout<<"Enter array elements: ";
    for(int i=0;i<size;i++){
        cin>>arr[i]; 
    }
    
    int max=-9887;
    for(int i=1;i<=size;i++){
        if(arr[i]>max)
        max= arr[i];
    }
    int sec_max= arr[0];
    for(int i=1;i<=size;i++){
        if(arr[i]>sec_max && arr[i]!=max)
        sec_max= arr[i];        
    }

    int min=arr[0];
    for(int i=1;i<=size;i++){
        if(arr[i]<min){
        min= arr[i];
        }
    }
    int sec_min=arr[0];
    for(int i=1;i<=size;i++){
        if(arr[i]<sec_min && arr[i]!=min){
        sec_min= arr[i];        
        }
    }
    cout<<"Second lowest: "<<sec_min<<endl;
    cout<<"Second highest: "<<sec_max<<endl;
}