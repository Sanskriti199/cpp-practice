#include<bits/stdc++.h>
using namespace std;

int addBinary(int a, int b){
    long long ans=0;
    long long mult=1;      
    int prevCarry=0;

    while(a>0 && b>0){
        if(a%10==0 && b%10==0)
        {
            ans = ans + (long long)prevCarry*mult;
            prevCarry=0;
        }
        else if((a%10==0 && b%10==1) || (a%10==1 && b%10==0))
        {
            if(prevCarry==1)
            {
                ans = ans + 0*mult;
                prevCarry=1;
            }
            else
            {
                ans = ans + 1*mult;
                prevCarry=0;
            }
        }
        else
        {
            ans = ans + (long long)prevCarry*mult;
            prevCarry=1;
        }

        mult*=10;
        a/=10;
        b/=10;
    }

    while(a>0){
        if(prevCarry==1)
        {
            if(a%10==1){
                ans = ans + 0*mult;
                prevCarry=1;
            }
            else{
                ans = ans + 1*mult;
                prevCarry=0;
            }
        }
        else{
            ans = ans + (long long)(a%10)*mult;
        }
        mult*=10;
        a/=10;
    }

    while(b>0){
        if(prevCarry==1)
        {
            if(b%10==1){
                ans = ans + 0*mult;
                prevCarry=1;
            }
            else{
                ans = ans + 1*mult;
                prevCarry=0;
            }
        }
        else{
            ans = ans + (long long)(b%10)*mult;
        }
        mult*=10;
        b/=10;
    }

    if(prevCarry==1)
    {
        ans = ans + 1*mult;
    }

    return (int)ans;
}

int main(){
    int a,b;
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;

    return 0;
}