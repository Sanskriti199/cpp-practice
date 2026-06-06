#include<iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"give me 2 numbers:";
    cin>>a>>b;

    char op;
    cout<<"input operator: ";
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<a+b<<endl;
    break;
    case '-':
    cout<<a-b<<endl;
    break;
    case '*':
    cout<<a*b<<endl;
    break;
    case '/':
    cout<<a/b<<endl;
    break;
    
    
    default:
    cout<<"enter another operator"<<endl;
        break;
    }
    return 0;
}