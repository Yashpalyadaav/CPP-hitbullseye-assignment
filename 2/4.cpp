#include<iostream>
using namespace std;

class odd{
    public:
    int num(int a,int b){
        int sum=0;
        for (int i = 1; i <=b; i++)
        {
            if (i%2!=0)
            {
                sum=sum+i;
            }
            else{
                continue;
            }
            
        }
        return sum;
        
    }
};

int main(){
    odd o1;
    int a,b;
    cin>>a>>b;
    cout<<o1.num(a,b);
    return 0;
}