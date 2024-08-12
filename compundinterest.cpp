#include<iostream>
using namespace std;

int main()
{

    int C_I = 0;
    int P;
    int R;
    int N;
    cin>>P>>R>>N;
    


    C_I =(P*(1 + (R/100)^N));

    cout<<"The compound interest :"<<C_I;


    
}