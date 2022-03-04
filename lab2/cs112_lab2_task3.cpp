#include<iostream>
#include<bitset>
#define read(type, var) type var; cin>>var;

using namespace std;

int add(int a, int b){
    int car;
    while(b != 0){
        car = a & b;
        a=a^b;
        b=car << 1;
    }
    return a;
}

int bin_to_dec(int n)
{
    int num = n;
    int dec_value = 0;
    int base = 1;
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
        dec_value += last_digit * base;
        base = base * 2;
    }
    return dec_value;
}

int to_denary(string value, int base){
    int length= value.size();
    int b=1;
    int dec_val=0;
    for(int i =length-1;i>=0;i--){
        if(base==16){
            if(value[i] >='0' && value[i] <='9'){
                dec_val += (int(value[i])- 48) * b;
                b *= base;
            }
            else if(value[i]>='A' && value[i] <= 'F'){
                dec_val += (int(value[i]-55)) * b;
                b *= base;
            }
        }
        else if(b==8){
            dec_val += int(value[i] - '0') * b;
            b *= base;
        }
    }
    return dec_val;
}

int dec_to_octal(int num){
    int remainder, i = 1, octalNumber = 0;
    while (num != 0)
    {
        remainder = num % 8;
        num /= 8;
        octalNumber += remainder * i;
        i *= 10;
    }
    return octalNumber;
}

int main()
{
    cout<<"Enter base system: ";
    read(int,p);
    cout<<"Enter the first number: ";
    read(string,n1);
    cout<<"Enter the second number: ";
    read(string,n2);
    switch(p){
        case 2: {
        int bin1=stoi(n1);
        int bin2=stoi(n2);
        int result=bin_to_dec(bin1) + bin_to_dec(bin2);
        cout<<"The answer is: "<< bitset<16>(result);
        break;}
        case 8:{
        int oct1=to_denary(n1,8);
        int oct2=to_denary(n2,8);
        int result= oct1 + oct2; 
        cout <<"The answer is "<< dec_to_octal(result);
        break;}
        case 10:{
        int num1=stoi(n1);
        int num2=stoi(n2);
        int result= num1 + num2;
        cout<<"The answer is "<< result;
        break;}
        case 16:
        break;
        default:
        cout<<"Invalid base!";
    }

        return 0;
}