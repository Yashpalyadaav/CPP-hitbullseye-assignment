#include<iostream>
using namespace std;

int main(){
    int n=5;
     
     int arr[5]={5,1,7,10,11};
     for (int i = 1; i <n; i++)
     {
        arr[i]=arr[i]+arr[i-1];
        
     }
     for (int i = 0; i <n; i++)
     {
        cout<<arr[i]<<" ";
     }
     
     
    return 0;
}