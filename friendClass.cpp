// #include<iostream>
// using namespace std;

// class Axis{
//     int amount=10000;
//     friend class Rbi;
// };

// class Sbi{
//     int amount =1000;
//     friend class Rbi;
// };

//  class Rbi{
//     public:
//            void balanceAxis(Axis a){
//             cout<<"axis balance"<<a.amount<<endl;
//            }
//            void balanceSbi(Sbi s){
//             cout<<"sbi balance"<<s.amount;
//            }
          
//  };


// int main(){

//     Axis a;
//     Sbi s;   
//     Rbi r;
      
//     r.balanceAxis(a);
//     r.balanceSbi(s);
    

//     return 0;
// }

#include<iostream>
using namespace std;

 class Student{
    string name="akshay";
    int age=24;
    friend class College;
 };

 class Teacher{
    string name="khuhsi";
    int age=23;
    friend class College;
 };

   class College{
                 public:
                  void studentInfo(Student s){
                    cout<<s.name<<" "<<s.age<<endl;
                  }    
                  
                  void teacherInfo(Teacher t){
                    cout<<t.name<<" "<<t.age;
                  }
   };

int main(){


   Student s;
   Teacher t;
   College c;

   c.studentInfo(s);
   c.teacherInfo(t);

    return 0;
}