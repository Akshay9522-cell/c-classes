#include<iostream>
using namespace std;



class Virus{

    public:
           void affect(){
            cout<<"system got affect"<<endl;
           }
};

class Prize{
    Virus v;
    public: 
           void prize(){
            cout<<"you won election of america"<<endl;

    v.affect();     
           }
};



int main(){
// composite class having an object of previous class and we call the function of the previus class inside the member function of composite class 
 Prize p1;
 p1.prize();
    return 0;
}