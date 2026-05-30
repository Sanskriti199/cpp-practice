#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout<<"max number is:" <<a<<endl;
        }
        else{
            cout<<" max number is:"<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<"max number is:"<<b<<endl;
        }
        else{
            cout<<"max number is :"<<c<<endl;
        }
    }
    

    return 0;

}