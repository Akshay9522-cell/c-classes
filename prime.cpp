#include<iostream>
using namespace std;

class{
    public:
           void isPrime(int num){
             int count=0;
            for(int i=2;i<num;i++){
                if(num%i==0){
                   count++;
                }
            }
            if(count<1){
                cout<<"prime";
            }else{
                cout<<"not";
            }
           }
}p;

int main(){
    int num;
    cout<<"enter nmbr"<<endl;
    cin>>num;

p.isPrime(num);
    // if(p.isPrime(num)){
    //     cout<<"prime";
    // }else{
    //     cout<<"not";
    // }
}