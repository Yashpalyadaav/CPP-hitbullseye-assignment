#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main(){
    int n;
    int arr[n];
    cout<<"enter the size of array "<<endl;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int max=INT_MIN;
    
    sort(arr.begin(),arr.end());
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    

    
    return 0;
}