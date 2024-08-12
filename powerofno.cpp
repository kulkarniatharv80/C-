#include<iostream>
#include<math.h>

using namespace std;


int main(){


    int n,y;
    cout<<"Enter the no :";
    cin>>n>>y;


    // int Result = n*n;
    // cout<<"The power of number ="<<"n:"<<Result;
    // return 0;

    int Result = pow(n,y); // n is base value and y is the power of the base value 
    cout<<"The Result :"<<Result;
    return 0;



}
