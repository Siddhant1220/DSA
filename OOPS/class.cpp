#include<iostream>
#include<string>
using namespace std;
class Teacher{
    //properties
    private:
    double salary;
    public:
    string name;
    string deptt;
    string subject;
   

    //methods or member functions
    void changeDeptt(string newDeptt){
        deptt = newDeptt;
    }
     void setSalary(double s){
        salary = s;
     }

     double getSalary(){
         return salary;
     }
    
};
  
 int main()
 {
    Teacher t1;
    t1.name = "Siddhant";
    t1.subject = "Maths";
    t1.deptt = "Maths";
    t1.setSalary(100000);
    cout<<t1.name<<endl; 
    cout<<t1.getSalary()<<endl;


    return 0;
 }