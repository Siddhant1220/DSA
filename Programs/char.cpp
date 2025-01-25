#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter your character: \n";
    cin>>ch;
    if(ch >=  65 && ch <= 90){
        cout<<"Its an upperacse";
    }
    
    else{
        cout<<"Its a lowercase";
    }
}