// operator overloading is used to redefine the defination of multiples operators for non primitive datatype;
//
// the nature of Operators for non primitive data type.

// There are 2 types of Operator Overloading:

//1.Unary operator overloading.
//2.Binary operator overloading.


// #include<iostream>
// using namespace std;

// class Top{
//     int a=10;
//     public:
//           operator++(){

//             a++;
//             cout<<a<<endl;
//           }
//           operator--(){
//             a--;
//             cout<<a;
//           }
// };

// int main(){

//    Top t;
//    ++t;
//    --t;
// }



// #include<iostream>
// using namespace std;

// class Bhopal{
//     int mile;
       
//             public:
//                    Bhopal(int m){ mile=m;}
//                   operator - (Bhopal &obj){
//                         mile=obj.mile-mile;
//                         cout<<"total mile"<<mile;
//                   }
// };

// int main(){
//     Bhopal s(12400);
//     Bhopal e(12580);

//     s-e;

// }

#include<iostream>
using namespace std;

class Complex{
      
      double real;
      double img;

      public:   
             Complex(double r ,double i):real(r),img(i){}

             Complex operator +(const Complex &other){
                    
                    return Complex(real+other.real,img+other.img);
             }

             void show(){
                  cout<<real<<"+ "<<img<<"i";
             }
};

int main(){
  
  Complex c1(3.0,4.0);
  Complex c2(2.0,5.0);

  Complex c3=c1+c2;

  c3.show();


}