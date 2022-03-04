#include <iostream>
#include <bitset>
using namespace std;

#define read(type,var) type var; cin>>var;
#define ifpow(bool) if(bool){cout<<"Yes "<<num<<" is the power of 2";} else {cout<<"No "<<num<<" is not the power of 2";};
        
bool ispower(int n){
    do{
        if(n==1 && n % 2==0){
        return true;
        }
        else if(n % 2 !=0){
        return false;
        }
        n/=2;
    }while(n != 1);
}

int main()
{
    cout<<"Enter an integer: ";
    read(int,num);
    ifpow(ispower(num));

    return 0;
}
