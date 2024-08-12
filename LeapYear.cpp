#include<iostream>
using namespace std;

int main(){


    int num;
    cout<<"Enter  Year: ";
    cin>>num;


    if((num % 4) ||(num % 400)){

        cout<<"This is leap Year";

    }
    else{
        cout<<"Not a leap Year ";

    }
    return 0;

}