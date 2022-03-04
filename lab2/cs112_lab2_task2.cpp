#include <iostream>
#include <cmath>
using namespace std;

#define solve(num1, num2) (num1 * pow(2,num2))

int main ()
{
    int num1,num2,solve;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<endl<<"The answer is: "<<solve(num1,num2);

    return 0;
}