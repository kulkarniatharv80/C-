#include <iostream>
using namespace std;


int sum(int n){
    
    if(n == 0){
        return 0;
        
    }
    int previous_sum = sum(n-1);
    
    return n + previous_sum;
    
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    
    
    int result=sum(n);
    
    cout<<"The result : "<<result<<endl;
    
    return 0;
}