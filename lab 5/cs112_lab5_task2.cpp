#include <iostream>
using namespace std;

class parity {
    public:
    int length;
    int* items = new int[length];
    parity(int l=0){
    length= l;
    }
    void put(int num){
        length++;
        int* temp=new int[length];
        for(int i=0;i<length-1;i++){
            temp[i]=items[i];
        }
        delete [] items;
        items=temp;
        items[length-1]=num;
    }
    void print(){
        for(int i=0;i<length;i++){
            cout<<items[i]<<" ";
        }
    }
        
    void dlt(int num){
        length --;
        int* temp =new int[length];
         for(int i=0;i<length-1;i++){
            temp[i]=items[i];
        }
        delete [] items;
        items=temp;
    }
    
    int test(){
        if(length % 2==0)
        return 1;
        else
        return 0;
    }


    ~parity();

};

void menu();

int main()
{
    parity p1;
    int option;

    do{
    menu();
    cout<<"Enter option: ";
    cin>>option;
    cout<<endl;
        switch(option){
            case 1:
            int num;
            cout<<"Enter number: ";
            cin>>num;
            p1.put(num);
            break;
            case 2:
            p1.print();
            break;
            case 3:
            int num2;
            cout<<"Enter number: ";
            cin>>num2;
            p1.dlt(num2)
            break;
            case 4:
            break;
            default:
            cout<<"Invalid option!"<<'\n';
        }
    }while(option != 4);
    return 0;
}

void menu(){
cout<<"Menu: "<<endl;
cout<<"1.put."<<endl;
cout<<"2.print."<<endl;
cout<<"3.delete."<<endl;
cout<<"4.Exit."<<endl;
}