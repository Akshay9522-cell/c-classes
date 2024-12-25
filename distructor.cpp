#include<iostream>
using namespace std;

class dp{

public:dp(){
    cout<<"memory allocate"<<endl;
}

~dp(){
    cout<<"memory dislocate"<<endl;
}

void show(){
    cout<<"welcome"<<endl;
}

};

int main(){

    dp d1;
    d1.show();

}