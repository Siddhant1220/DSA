// #include<iostream>
// using namespace std;
//  int cnt = 0;
//  void print(){ 
//     if(cnt == 5){
//         return;
//     }
//     cout<<cnt<<endl;
//     cnt++;
//     print();
//  }
//  int main(){
//     print();
//  }

#include<iostream>
using namespace std;
    
    void printName(int i , int n){
        if(i>n){
            return;
        }
        //cout<<"Siddhant"<<endl;
        cout<<i<<endl;
        printName(i+1,n);

    }
    int main(){
      
        printName(1,7);
    }