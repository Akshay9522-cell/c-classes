#include<iostream>
using namespace std;

class{
    public:
           bool isPalindrome(int num){
            int original=num;
            int reverse=0,reminder;
             
             while(num!=0){
                reminder=num%10;
                reverse=reverse*10+reminder;
                num/=10;
             }
             return original==reverse;

           }
} p ;


int main(){
    int num;
    cout<<"enter number"<<endl;
    cin>>num;

    if(p.isPalindrome(num)){
        cout<<num<<"palindrome"<<endl;
    } else{
        cout<<num<<"not ";
    }
}