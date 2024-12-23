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
   void print (){
    cout<<name<<" "<<run<<" "<<avg<<endl;
   }

     
};

int main(){

    Cricketer* c1=new Cricketer("virat kohli",35000,55.7);
    Cricketer* c2= new Cricketer("Rohit Sharma",55000,95.7);
    
    c1->print();
    // cout<<c2->avg;
    // cout<<c1->name;

}