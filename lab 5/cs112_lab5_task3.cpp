#include <iostream>
#include <string>
using namespace std;

class stringType{
    private:
    string first;
    string second;
    public:
    stringType(){
        first="";
        second="";
    }

    void setValues(string str1, string str2){
        first= str1;
        second= str2;
    }
    void printValues(){
        cout<<"String 1= "<<first;
        cout<<"String 2= "<<second;
    }
    int maxLength(){
        int s1length=0, s2length=0;
        for(int i=0;i<1000;i++,s1length++){
            if(first[i]=='\0')
            break;
        }
        for(int i=0;i<1000;i++,s2length++){
            if(second[i]=='\0')
            break;
        }
        if(s1length>s2length)
        return s1length;
        else if(s1length<s2length)
        return s2length;
        else 
        return s2length;
    }
    int compare(string s1,string s2){
        int sum1=0,sum2=0;
    for(int i=0;i<1000;i++){
        if(s1[i]=='\0')
        break;
        else
        sum1+=s1[i];
    }
    for(int i=0;i<1000;i++){
        if(s2[i]=='\0')
        break;
        else
        sum2 +=s2[i];
    }
    if(sum1==sum2)
    return 0;
    else if(sum1<sum2)
    return -1;
    else
    return 1;
    }
    string copy(string source, string destination){
        for(int i=0;i<1000;i++){
        if(destination[i] != '\0')
        source[i] = destination[i];
        else 
        break;
    }
    return source;
    }

    string concatenate(string s1, string s2){
        int slength=0;
    for(int i=0;i<1000;i++,slength++){
        if(s1[i] == '\0')
        break;
    }
    int i = slength;
    for(int j=0 ;i<1000;i++, j++){
        if(s2[j] != '\0')
        s1[i] = s2[j];
        else 
        break;
    }
    s1[i] = '\0';
    return s1;
    }

    int searchWord(string word){
        bool check=false;
        int wlength=0;
        while(word[wlength]!='\0')
        {
            wlength++;
        }
        for(int i=0,counter=0;first[i]!='\0';i++){
            if(word[counter]==first[i]){
                counter++;
                check=true;
            } else{
                counter=0;
                check=false;
            }
        }
        if(check)
        return 1;
        else
        return -1;
    }


    int searchChar(char ch){
        bool check=false;
        for(int i=0;first[i] !='\0';i++){
            if(first[i]==ch){
                check = true;
                break;
            } else{
                check=false;
            }
        }
        if(check)
        return 1;
        else
        return -1;
    }
    ~stringType();

};

void menu();

int main()
{
    stringType st1;
    int option;

    do{
    menu();
    cout<<"Enter option: ";
    cin>>option;
    cout<<endl;
        switch(option){
            case 1:
            {string s1,s2;
            cout<<"Enter first string: ";
            getline(cin,s1);
            cout<<"Enter second string: ";
            getline(cin,s2);
            st1.setValues(s1,s2);
            break;}
            case 2:
            st1.printValues();
            break;
            case 3:
            st1.maxLength();
            break;
            case 4:
           { string s1,s2;
            cout<<"Enter first string: ";
            getline(cin,s1);
            cout<<"Enter second string: ";
            getline(cin,s2);
            st1.compare(s1,s2);
            break;}
            case 5:
            {string s1,s2;
            cout<<"Enter first string: ";
            getline(cin,s1);
            cout<<"Enter second string: ";
            getline(cin,s2);
            st1.copy(s1,s2);
            break;}
            case 6:
            {string s1,s2;
            cout<<"Enter first string: ";
            getline(cin,s1);
            cout<<"Enter second string: ";
            getline(cin,s2);
            st1.concatenate(s1,s2);
            break;}
            case 7:
            {string word;
            cout<<"Enter word to search: ";
            getline(cin,word);
            st1.searchWord(word);
            break;}
            case 8:
            {char ch;
            cout<<"Enter character to search: ";
            cin>>ch;
            st1.searchChar(ch);
            break;}
            case 9:
            break;
            default:
            cout<<"Invalid option!"<<'\n';
        }
    }while(option != 9);
    return 0;
}

void menu(){
cout<<"Menu: "<<endl;
cout<<"1.set values. "<<endl;
cout<<"2.print."<<endl;
cout<<"3.max length."<<endl;
cout<<"4.compare."<<endl;
cout<<"5.copy."<<endl;
cout<<"6.concatenate."<<endl;
cout<<"7.search word."<<endl;
cout<<"8.search char."<<endl;
cout<<"9.exit."<<endl;
}
