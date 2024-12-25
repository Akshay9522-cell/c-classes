//1. Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.


// #include<iostream>
// using namespace std;

// class Circle{
//     private:
//             int radius;
//     public:
//            void setter(int r){
//               radius = r; 
//            }  
//            void area(){
//             cout<< 3.14*radius*radius<<endl;
//            } 
//            void circumferance(){
//             cout<<2*3.148*radius;
//            }     
// };
// int main(){
   
//    Circle c1;
//    c1.setter(5);
//    c1.area();
//    c1.circumferance();

    

//     return 0;
// }



//2. Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.


// #include<iostream>
// using namespace std;

// class Rectangle{
//         private:
//                 int length;
//                 int width;
//         public: 
//                 void setter(int l,int w){
//                     length=l;
//                     width=w;
//                 }      
//                 void perimeter(){
//                     cout<<"perimeter of rectangle:"<<2*(length+width)<<endl;
//                 }   
//                 void area(){
//                     cout<<"area of rectangle:"<<length*width;
//                 }                
// };

// int main(){

//   Rectangle r1;
//   int length,width;
//   cout<<"enter length and width"<<endl;
//   cin>>length>>width;

//   r1.setter(length,width);
//   r1.perimeter();
//   r1.area();
//     return 0;
// }



//3. Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.


// #include<iostream>
// using namespace std;

// class Person{
//       string name;
//       int age;
//       string country;
// public :
//       void setter(string n,int a,string c){
//            name=n;
//            age=a;
//            country=c;
//       }
//       void print(){
//         cout<<name<<" "<<age<<" "<<country<<endl;
//       }
// };

// int main(){
  
//   Person p1;
//   p1.setter("shree",05,"India");
//   p1.print();

//     return 0;
// }


//Write a C++ program to implement a class called BankAccount that has private member variables for account number and balance. Include member functions to deposit and withdraw money from the account.


// #include<iostream>
// using namespace std;

// class BankAccount{
//     int accno;
//     double balance;
   
//    public:
//           BankAccount(int accno1,double balance1){
//             accno=accno1;
//             balance=balance1;
//           }
//           void deposit(double amount){
//              balance+=amount;
//              cout<<"Current Balance : "<<balance<<endl;
             
//           }
//           void withdraw(double amount)
//           {
//             if(balance<amount){
//                 cout<<"Insufficient Amount"<<endl;
//             }else{

//             balance-=amount;
//             cout<<"Current Balance : "<<balance<<endl;
//             }
//           }

//           void display(void);
          

// };

// void BankAccount::display(void)
// {
//     cout<<"Account Number : "<<accno<<endl;
//     cout<<"Current Balance : "<<balance<<endl;
// }

// int main(){
    
//     BankAccount b1(1235,0);
//     b1.deposit(1234.89);
//     b1.withdraw(1200);
//     b1.display();
//     return 0;
// }


//6. Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.

// #include<iostream>
// using namespace std;

// class Triangle{
      
//       double s1;
//       double s2;
//       double s3;

//       public:
//              Triangle(double side1,double side2,double side3){
//                 s1=side1;
//                 s2=side2;
//                 s3=side3;
//              }

//           void determine();   
                  
// };
//   void Triangle::determine(){
//       if(s1==s2 && s1==s3 && s2==s3){
//         cout<<"Triangle is Equilateral"<<endl;

//       } else if(s1==s2 || s1==s3){
//         cout<< "isoscales triangle"<<endl;
//       } else{
//         cout<<"scalene triangle";
//       }
//   }

// int main(){

//    Triangle t1(5,0,2);
//    t1.determine();
//     return 0;
// }

//7. Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. Include member functions to calculate and set salary based on employee performance.

// #include<iostream>
// using namespace std;

// class Employe{
//     string name;
//     int id;
//     double salary;

//     public:

//       Employe(){
    
//       }
//            Employe(string n,int id1,double sal){
                
//                 name=n;
//                 id=id1;
//                 salary=sal;

//            }
           

//            void performance(int rating){
//             if(rating>=0.0 && rating <=1.4){
//                 cout<<name<<" "<<id<<" "<<salary*2<<endl;
//             } else if(rating>=1.4 && rating <=3.4){
//                  cout<<name<<" "<<id<<" "<<salary*2.5<<endl;
//             } else{
//                 cout<<name<<" "<<id<<" "<<salary*3.5<<endl;
//             }
//            }
          

// };

// int main(){
     
//      Employe e1("akshay",12,5000);
//       //e1.setsalary(2000);
//      e1.performance(2.5);
//      //e1.print();

//     return 0;
// }




//Write a C++ program to implement a class called Date that has private member variables for day, month, and year. Include member functions to set and get these variables, as well as to validate if the date is valid.

#include<iostream>
using namespace std;

class Date{
      int day;
      int month;
      int year;
       
      public:
             Date(){

             }
             Date(int d,int m,int y){
                 day=d;
                 month=m;
                 year=y;
             }

             void print(){
                if(day>=1&& day<=31 && month>=1 && month<=12 ){
                   cout<<day<<"/"<<month<<"/"<<year;
                } else{
                    cout<<"invalid";
                }
               
             }
};
int main(){
     Date d1(21,22,2024);
     d1.print();
      

    return 0;
}




