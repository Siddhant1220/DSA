#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Student {
    string name;
    int uid;
    int rollNo;

    Student(string n, int u, int r) : name(n), uid(u), rollNo(r) {}
};

int main() {
    unordered_map<int, Student> hashMap;

    hashMap[1] = Student("John Doe", 1001, 101);
    hashMap[2] = Student("Jane Smith", 1002, 102);
    hashMap[3] = Student("Alice Johnson", 1003, 103);

    for (const auto& pair : hashMap) {
        cout << "Key: " << pair.first << endl;
        cout << "Name: " << pair.second.name << endl;
        cout << "UID: " << pair.second.uid << endl;
        cout << "Roll No: " << pair.second.rollNo << endl;
    }

    return 0;
}

