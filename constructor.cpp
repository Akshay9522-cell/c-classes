//constructor is used to allocate they memory of an object 
// constructor doesnt have any ruturn type 
// bydefault the class having a constructor which is belongs to public specifier


// In a parameter constructor we use parameter in a funcion 

// for stop the constructor calling make the constructor private

// if a class having more than one constructor with different paraemter is called construnctor overloading


// #include<iostream>
// using namespace std;

// class Teacher{
    
//     public:
//            string name;
//            int id;
//            string subject;
//            double salary;

//      // constructor

//      Teacher(string n,int i,string sub,double sal){
           
//             name=n;
//             id=i;
//             subject=sub;
//             salary=sal;
//      }      
// };
//      void print(Teacher t){
//         cout<<t.name<<" "<<t.id<<" "<<t.subject<<" "<<t.salary<<endl;
//      }
// int main(){

//     Teacher t1("shree",504,"chemistry",35000);
//     Teacher t2("akki",534,"physics",55000);

//     print(t1);
//     print(t2);
    


//     return 0;
// }

#include<iostream>
using namespace std;

class Student{
             public:
                   string name;
                   int rollno;

             Student(string n,int r){
                name=n;
                rollno=r;
             }      
};
   void print(Student s){
        cout<<s.name<<" "<<s.rollno;
   }

int main(){

 Student s1("akshay",55);
  print(s1);
    return 0;
}