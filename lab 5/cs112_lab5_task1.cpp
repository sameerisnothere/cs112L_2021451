#include <iostream>
using namespace std;

class Heater{
    private:
    int temperature;
    public:
    Heater(){
        temperature=15;
        cout<<"Temperature= "<<temperature<<" degrees celsius"<<'\n'<<'\n';
    }
    int warmer(){
        return temperature+=5;
    }
    int cooler(){
        return temperature-=5;
    }

    void display(){
        cout<<"Temperature= "<<temperature<<" degrees celsius"<<'\n'<<'\n';
    }

    ~Heater();
};

void menu();

int main ()
{
    Heater h1;
    int option;

    do{
        menu();
    cout<<"Enter option: ";
    cin>>option;
    cout<<endl;
        switch(option){
            case 1:
            h1.warmer();
            h1.display();
            break;
            case 2:
            h1.cooler();
            h1.display();
            break;
            case 3:
            break;
            default:
            cout<<"Invalid option!"<<'\n';
        }
    }while(option != 3);

    return 0;
}

void menu(){
    cout<<"MENU: "<<'\n';
    cout<<"1.Increase temperature by 5 degrees."<<'\n';
    cout<<"2.Decrease temperature by 5 degrees."<<'\n';
    cout<<"3.Exit."<<'\n'<<'\n';
}