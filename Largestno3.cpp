#include<iostream>
using namespace std;

int main()
{

   int n1,n2,n3;
   cin>>n1>>n2>>n3;

   if((n1 > n2) && (n1 > n3))
   {
    cout<<"The"<<n1<<"is greater";

   }
   else if((n2> n1) && (n2 >n3))
   {
    cout<<"The"<<n2<<"is Greater than ";

   }
   else{
    cout<<"N3 is greater than both ";

   }


    
}