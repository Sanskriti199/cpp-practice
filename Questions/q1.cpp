// Calculate the number of two-wheelers and four-wheelers
// using the total vehicles (V) and total wheels (W).
// Print "INVALID INPUT" if the given values violate constraints
// or do not produce valid non-negative vehicle counts.

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b;
      // a = total number of vehicles
    // b = total number of wheels
    cin>>a>>b;


    // If wheels are odd, or wheels are less than 2 per vehicle,
    // or wheels are more than 4 per vehicle, input is invalid.
    if(b%2!==0 || b<2*a ||b>4*a){
        cout<<"INVALID INPUT";
        return 0;
    }

    // Find number of four-wheelers
    long long pq=(b-2*a)/2;


    // Remaining vehicles will be two-wheelers
    long long sm=a-pq;

    cout<<"TW="<<sm<<" "<<"FW="<<pq;

    return 0;
}