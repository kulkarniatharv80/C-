#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> numbers={1,2,3,4,5,6,60};
    //cout<<numbers[0]<<endl;

    //cout<<numbers.at(10); //It will check the bounding condition show error like "out of Range"  
    //Access the front number
    // cout<<"Front Element in vector :"<<numbers.front()<<endl;
    // //Access the last number
    // cout<<"last Element in vector : "<<numbers.back();


    // for(int i=0;i<numbers.size();i++){
    //     cout<<numbers[i]<<endl;
    // }
    
    //modifying the elements
    // numbers.at(3)=100;

    // for(int i=0;i<numbers.size();i++){
    //     cout<<numbers[i]<<endl;
    // }
    //getting multiple elements from the User
    // cout<<"Enter the Elements:"<<endl;
    
    // vector<int> numbers(5);
    // for(int i=0;i<numbers.size();i++){
        
    //     cin>>numbers[i];
    // }
    
    
    // for(int i=0;numbers.size();i++){
        
    //     cout<<numbers.at(i)<<endl;
        
    // }

    vector<char> vowels = {'a','e','i','o','u'};
    vowels.push_back('A');
    // cout<<"Size of vector vowels is:"<<vowels.size()<<endl;

    // cout<<"Max Size of vector vowels is:"<<vowels.max_size()<<endl;
    // cout<<"Capacity of vector vowels is:"<<vowels.capacity()<<endl;
    vowels.resize(3);

    for(int i=0;i<vowels.size();i++){

        cout<<vowels.at(i);

    }


    

}