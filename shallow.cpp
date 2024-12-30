// #include<iostream>
// #include<string.h>
// using namespace std;

// class Student{

//     public:
//            char* c;
//            Student(char* s){
//              c=new char[20];
//              strcpy(c,s);
//            }
//            Student(Student &obj){
//              c=new char[20];
//              strcpy(c,obj.c);
//            }
//            void show(){
//             cout<< c;
//            }

//            void surname(char* s){
//              strcat(c,s);
//            }
// };

// int main(){
  
//   Student s1("akshay");

//   Student s2(s1);
//   s2.show();
//   s1.show();

//   s2.surname("namdev");
//   s1.show();
//   s2.show();
//     return 0;
// }


// #include<iostream>
// using namespace std;

// class myClass{

//         public:
//                int *ptr;

//                myClass(){
//                 ptr=new int (10);
//                }
                
//               myClass(const myClass &other){
//                    ptr= other.ptr;  //deep copy ptr=other.ptr
//               }

//               ~myClass(){
//                 delete ptr;
//               }
//               void display(){
//                 cout<<"value"<<*ptr<<endl;
//               }

// };

// int main(){
    
//     myClass obj1;
//     myClass obj2(obj1);

//     obj1.display();
//     obj2.display();


//     //modifies obj1 data

//     *obj1.ptr=20;

//     obj1.display();

//     obj2.display();

#include<iostream>
using namespace std;

class Shallow{
     public:
            int *ptr;

            Shallow(){
              ptr=new int (10);
            }

            Shallow(const Shallow &other){
                 ptr=other.ptr;
            }

            void print(){
              cout<<*ptr<<endl;
            }
           
};

int main(){

  Shallow s1;

  Shallow s2(s1);

  s1.print();
  s2.print();




}