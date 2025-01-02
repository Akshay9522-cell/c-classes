// REVERSE AN ARRAY

// #include<iostream>
// using namespace std;
// int main(){

//     int arr[]={1,2,3,4,5,6};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     for(int i=n-1;i>=0;i--){
//         cout<<arr[i];
//     }
// }


// COUNT OCCURENCE OF AN ELEMENT IN AN ARRAY

// #include<iostream>
// using namespace std;

//  void Occurence(int arr[],int n ,int target){
        
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(arr[i]==target){
//                 count++;
//             }
//         }
//         cout<<count;
       
//  }

// int main(){

//     int arr[]={1,2,3,2,3,4,5,3,6,3};
//     int n=sizeof(arr)/sizeof(arr[0]);

//     Occurence(arr,n,3);
// }

// CHECK ARRAY IS SORTING OR NOT

// #include<iostream>
// using namespace std;

// int checkArray(int arr[],int n){

//     for(int i=0;i<n;i++){
//         if(arr[i]>arr[i+1]){
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[]={1,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
     
//    cout<<checkArray(arr,n);
// }


// ASCENDING ORDER

// #include<iostream>
// using namespace std;
  
//   void ascendingOrder(int arr[],int n){
//        for(int i=0;i<n;i++){
//          for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j]){
//                 swap(arr[i],arr[j]);
//             }
//          }
//        }
//   }

// int main(){
//     int arr[]={5,4,2,3,1,6};
//     int n=sizeof(arr)/sizeof(arr[0]);
     
//      ascendingOrder(arr,n);
//      for(int i=0;i<n;i++){
//         cout<<arr[i];
//      }
// }

