#include<iostream>
#include<string>
 using namespace std;
  class Teacher{
  private: double salary;
    public:

Teacher(){
    //non-parameterized constructor
    deptt = "Computer Science";
}

Teacher(string n, string d, string s,double sal){
    //parameterized constructor
        name = n;
        deptt = d;
        subject = s;
    }
             string name;
             string deptt;
             string subject;
            
    
        void changeDeptt(string newDeptt){
            deptt = newDeptt;
        }
        void getInfo(){
            cout<<name<<endl;
            cout<<deptt<<endl;
            cout<<subject<<endl;
            cout<<salary<<endl;
        }
         void setSalary(double s){
            salary = s;
         }
    
         double getSalary(){
             return salary;
         }
     };
     int main(){
        Teacher t1("Siddhant", "Maths", "Maths",1000000);
        t1.getInfo();
        return 0;
     }