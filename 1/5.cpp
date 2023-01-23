#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[5]={1,2,1,1,3};
    int maxcount=0;
    int maxfeq;
    for (int i = 0; i <n; i++)
    {
        int count=0;
        for (int j = 0; j <n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
            
        }
        if (maxcount<count)
        {
            maxcount=count;
            cout<<"element having max frequency "<<arr[i];
        }
        
        
    }
    
    return 0;
}