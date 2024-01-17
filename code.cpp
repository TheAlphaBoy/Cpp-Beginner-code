#include<iostream>
using namespace std;

int main() {
    char ch;
    cout<<"Enter the character:"<<endl;
    cin>>ch;

    if(ch>='a' and ch<='z') {
        cout<<"this is lowercase"<<endl;
    }
    else if(ch>= 'A' and ch<='Z') {
        cout<<"this is uppercase"<<endl;
    }
    if(ch>='0' and ch<='9') {
        cout<<"this is numeric value"<<endl;
    }
    return 0;



    

    

    
    

   
} 
