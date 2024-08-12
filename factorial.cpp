#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number:"<<endl;
    cin>>n;

    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact = fact * i;
        // Print each intermediate factorial value
        cout << "Factorial of " << i << " = " << fact << endl;
    }
    
    return 0;
}
