#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    int s=0;
    int e=n-1;

    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = 0; i <n/2; i++)
    {
            swap(arr[s],arr[e]);
            s++;
            e--;
        
        
        
    }
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    return 0;
}