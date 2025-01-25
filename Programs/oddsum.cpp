// #include<iostream>
// using namespace std;
// int main(){
//     int n = 10;
//     int sum = 0;
//     int count= 0;
//     for(int i=0;count<=n;i++){
//         if(i%2!=0){
//              sum=+i;
//              count++;
            
//         }
//     }
//     cout<<sum<<" ";
// }
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask the user to input the value of n
    cout << "Enter the number of odd numbers to sum: ";
    cin >> n;

    // Loop through the first n odd numbers and calculate the sum
    for (int i = 1, count = 0; count < n; i += 2, count++) {
        sum += i;
    }

    // Output the sum of the first n odd numbers
    cout << "The sum of the first " << n << " odd numbers is: " << sum << endl;

    return 0;
}
