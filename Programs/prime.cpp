#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    bool isPrime=true;
    for(int i=2;i<=n-1;i++){
        if(n%2==0){
            isPrime= false;
            break;
        }
    }
    if(isPrime==true){
        cout<<"Given no is prime"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
}