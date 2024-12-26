// #include<iostream>
// using namespace std;

// class Box{
//     double width;

//     public:
//            Box(double w){
//              width=w;
//            }

//            friend void displayWidth(Box b1);
// };

//           void displayWidth(Box b1){
//              cout<<"width of box"<<" "<<b1.width<<endl;
//           }

// int main(){
 
//     Box b(10.5);
//     displayWidth(b);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Person{
//     string name;
//     int age;

//       public:
//              Person(string n,int a){
//                  name=n;
//                  age=a;
//              } 
//         friend  void displayInfo(Person p);
// };

//        void displayInfo(Person p){
//           cout<<"name is:"<<p.name<<" "<<"age is:"<<p.age;
//        }
// int main(){

//   Person p1("akki",25);
//   displayInfo(p1);
//     return 0;
// }

// #include<iostream>
// using namespace std;

//  class Employe{
//         string name;
//         int id;

//         public:
//                Employe(string n,int i){
//                 name=n;
//                 id=i;
//                }
//         friend  void displayInfo(Employe e);
//  };
    
//      void displayInfo(Employe e){
//          cout<<e.name<<" "<<e.id<<endl;
//      }
// int main(){
  
//     Employe e("shree",5342);
//     displayInfo(e);

//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Rectangle{
//     int width;
//     int height;

//     public:
//           Rectangle(int w,int h):width(w),height(h){}

//           friend void display(Rectangle r);
// };
//          void display(Rectangle r){
//               cout<<r.width*r.height;
//          }
// int main(){

//    Rectangle r(12,5);
//    display(r);

//     return 0;
// }

#include<iostream>
using namespace std;

class College{
      string name;
      int year;

      public:
            College(string n,int y):name(n),year(y){}

         friend   void print(College c);
};

     void print(College c){
        cout<<"name of college is:"<<c.name<<endl<<"year of establishment: "<<c.year;
     }
int main(){
   
    College c("Oriental college",1978);
    print(c);


    return 0;
}