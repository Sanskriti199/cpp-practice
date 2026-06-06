#include<iostream>
using namespace std;

int main(){

    int button;
    cout<<"Input a character:";
    cin>>button;
     
    switch (button)
    {
    case 'a':
    cout<<"Hello"<<endl;
    break;
    case 'b':
    cout<<"namaste"<<endl;
    break;
    case 'c':
    cout<<"Hola"<<endl;
    break;
    case 'd':
    cout<<"salute"<<endl;
    break;
    case 'e':
    cout<<"ciao"<<endl;
    break;
    case 'f':
    cout<<"Hey"<<endl;
    break;
    
    default:
    cout<<"i am still learning"<<endl;
        break;
    }
    return 0;
}