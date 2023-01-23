#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[100];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }

    int counter=0;

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
        if (count>counter)
        {
            counter=count;
        }
        
        
    }
    

    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"the max freq is "<<counter<<endl;
    
    return 0;
}