#include<iostream>
using namespace std;

class Table{
       public:
              void table(int num){
                 for(int i=1;i<=10;i++){
                    cout<<num*i<<endl;
                 }
                 cout<<endl;
              }
};

class Factorial{
       public:
               void factorial(int num){
                  int fact=1;
                  for(int i=1;i<=num;i++){
                      fact=fact*i;
                  }
                  cout<<fact;

               }
};

class Composite{
       Table t;
       Factorial f;

       public:
              void result(int num){
                t.table(num);
                f.factorial(num);
              }
};


int main(){
    int num;
    cout<<num<<endl;
    cin>>num;

    Composite c;
    c.result(num);

}