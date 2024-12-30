#include<iostream>
using namespace std;
int main()
{

    
    // Dynamically Memory Allocation 
    // New Keyword

    int *p= new int(40);
    float *q= new float(40.8);
    cout<<"The Value At Address p is : "<<*(p)<<endl;
    cout<<"The Value At Address q is : "<<*(q)<<endl;

    // Blocks Of Memory Allocation

    int *arr= new int[3];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;

    for(int i=0; i<3; i++)
    {
        cout<<"Arr["<<i<<"] : "<<(arr[i]);
        cout<<endl;
    }

}