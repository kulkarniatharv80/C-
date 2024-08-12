#include <iostream>
using namespace std;


int main()
{
    int n;
    cin>>n;


    char A[n+1];
    cin>>A;

    bool check =1;

    for(int i=0;i<n;i++){

        if(A[i] != A[n-1-i])
        {
            check =0;
            break;

        }
    }

    if(check ==true){
        cout<<"word is palindrome";

    }
    else{
        cout<<"Word is not Palindrome";

    }







    return 0;
}