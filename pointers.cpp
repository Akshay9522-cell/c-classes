#include<iostream>
using namespace std;

class Cricketer{
 
 public:
    string name;
    int run;
    float avg;
     
   Cricketer(string name,int run,float avg){
       this->name=name;
       this->run=run;
       this->avg=avg;
   }  
//    void print (){
//     cout<<name<<" "<<run<<" "<<avg<<endl;
//    }

     
};
 void change(Cricketer* c){
        // (*c).avg=99.9;
        c->avg=100;
      }


int main(){

    Cricketer c1("virat kohli",35000,55.7);
    Cricketer c2("Rohit Sharma",55000,95.7);
      
      cout<<c1.avg<<endl;
      change(&c1);  
      cout<<c1.avg<<endl;

      

      
    // c1.print();
    // c2.print();

//    Cricketer* p1=&c1;
//     cout<<(*p1).run;

    return 0;
}