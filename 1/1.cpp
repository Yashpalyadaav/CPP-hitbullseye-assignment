#include<iostream>
#include<climits>
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
    for (int i = 0; i <n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    cout<<"the max element is "<<max;
    

    
    return 0;
}