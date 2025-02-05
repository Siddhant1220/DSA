#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> hashMap;

    
    hashMap["apple"] = 5;
    hashMap["banana"] = 10;
    hashMap["orange"] = 8;

    cout << "apple: " << hashMap["apple"] << endl;
    cout << "banana: " << hashMap["banana"] << endl;

   
    string key = "grape";
    if (hashMap.find(key) != hashMap.end()) {
        cout << key << " found with value " << hashMap[key] << endl;
    } else {
        cout << key << " not found!" << endl;
    }

    
    cout << "\nHashMap contents:\n";
    for (const auto &pair : hashMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

   
    hashMap.erase("banana");
    cout << "\nAfter removing banana:\n";
    for (const auto &pair : hashMap) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
