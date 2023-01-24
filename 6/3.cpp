#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={6,2,11,55,33};
    int c[5];
    for (int i = 0; i < n; i++)
    {
        int count=0;
        for (int j = 0; j <n; j++)
        {
            if (arr[i]>arr[j])
            {
                count++;
            }
            
        }
            c[i]=count;
        
        
        
    }
    for (int i = 0; i <n; i++)
    {
        cout<<c[i]<<" ";
    }
    
    return 0;
}