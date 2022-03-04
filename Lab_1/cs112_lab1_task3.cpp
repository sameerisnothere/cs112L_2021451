#include<iostream>
using namespace std;

struct BDinfo {
    int day;
    string month;
    int year;
};
struct users{
    string name;
    int age;
    string city;
    BDinfo dob;
}; 

int main(){
    int numOfusers;
    cout << "Enter the number of users: ";
    cin>> numOfusers;
    users u[numOfusers];
    BDinfo user;
    for(int i=0;i<numOfusers;i++){
        cout <<"Enter the record of student #"<<(i+1)<<endl;
        cout<<"Name: ";
        cin>>u[i].name;
        cout<<"age: ";
        cin>>u[i].age;
        cout<<"City: ";
        cin>>u[i].city;
        cout <<"Enter the DOB: ";
        cout <<"Day: ";
        cin>>u[i].dob.day;
        cout <<"Month: ";
        cin>>u[i].dob.month;
        cout <<"Year: ";
        cin>>u[i].dob.year;
    }

    cout <<"Enter a DOB to check: "<<endl<<endl;
    cout <<"Day: ";
    cin>>user.day;
    cout <<"Month: ";
    cin>>user.month;
    cout<<"Year: ";
    cin>>user.year;

    for(int i=0;i<numOfusers;i++){
        if(user.day==u[i].dob.day && user.month.compare(u[i].dob.month)==0)
        cout <<"It is "<<u[i].name<<"'s birthday. Happy birthday "<<u[i].name<<endl;
    }
    return 0;
}