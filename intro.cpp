#include<iostream>
#include<vector>
using namespace std;

int main(){


    // vector<int>numbers;

    // numbers.push_back(1);
    // numbers.push_back(8);
    // numbers.push_back(10);


    // cout<<numbers[1];
   // vector<int>numbers;


    // for(int i=0;i<3;i++){

    //     int value;

    //     cout<<"Enter value:"<<endl;
    //     cin>>value;
    //     numbers.push_back(value);
    // }
    // cout<<numbers[0];
    vector<int>numbers(10,5);
    fill(numbers.begin(),numbers.end(),5);
    vector<int>numbers2(numbers.begin(),numbers.end());

    
    for(int i=0;i<numbers2.size();i++){
        cout<<numbers2[i];
    }



    return 0;

}