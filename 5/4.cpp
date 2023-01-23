#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i <n-1; i++)
    {
        for (int j = i+1; j <n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i],arr[j]);
            }
            
        }
        
    }
    
    cout<<"the sum of the two smallest element is "<<arr[0]+arr[1]<<endl;
    
    return 0;
}