#include<iostream>
using namespace std;
int factorial(int n){
    //base case
    if(n==0){
        return 1;
    }
    int smallerProb = factorial(n-1);
    int biggerProb = n*smallerProb;

    return biggerProb;

 }
int main(){
    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans<<endl;
}