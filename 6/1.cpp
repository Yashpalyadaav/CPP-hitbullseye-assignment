#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the size of array 1"<<endl;
    cin>>n;
    int arr1[100],arr2[100];

    cout<<"kindly enter the array 1 "<<endl;
    for (int i = 0; i <n; i++)
    {
        cin>>arr1[i];
    }

    cout<<"enter the size of array 2"<<endl;
    cin>>m;

    cout<<"kindly enter the array 2 "<<endl;
    for (int i = 0; i <m; i++)
    {
        cin>>arr2[i];
    }
    
    for (int i = 0; i <m+n; i++)
    {
        arr1[n+i]=arr2[i];
    }
    
    for (int i = 0; i <m+n; i++)
    {
        cout<<arr1[i]<<" ";
    }
    
    return 0;
}