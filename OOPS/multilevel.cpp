#include<iostream>
#include<string>
using namespace std;
 class Person{
    public:
     string name;
     int age;
 };
 class Student : public  Person{
    public:
        int roll;
        string deptt;
 };
 class gradStudent : public Student{
    public:
        string research;

 };
  int main(){
        gradStudent gs1;
        gs1.name = "Siddhant";
        gs1.age = 20;
        gs1.roll = 101;
        gs1.deptt = "CSE";
        gs1.research = "AI";
        cout<<gs1.name<<endl;
        cout<<gs1.age<<endl;
        cout<<gs1.roll<<endl;
        cout<<gs1.deptt<<endl;
        cout<<gs1.research<<endl;
        return 0;
  }