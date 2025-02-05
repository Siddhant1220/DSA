#include <iostream>
#include <vector>
using namespace std;

void threeWayPartition(vector<int>& arr, int lowVal, int highVal) {
    int start = 0, end = arr.size() - 1, i = 0;

    while (i <= end) {
        if (arr[i] < lowVal) {
            swap(arr[i], arr[start]);
            start++;
            i++;
        } else if (arr[i] > highVal) {
            swap(arr[i], arr[end]);
            end--;
        } else {
            i++;
        }
    }
}
int main() {
    vector<int> arr = {1, 5, 3, 7, 2, 9, 6, 4};
    int lowVal = 3, highVal = 6;
    cout << "Original array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    threeWayPartition(arr, lowVal, highVal);

    cout << "Partitioned array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
