#include<iostream>
using namespace std;

int main(){

    int reverse_num = 0;
    int num;
    cout<<"Enter num:";
    cin>>num;


    while(num>0){

        reverse_num = reverse_num *10 +num % 10;
        num = num /10;

    }
    
    cout<<"The reverse number :"<<reverse_num;
    return 0;
    
}
