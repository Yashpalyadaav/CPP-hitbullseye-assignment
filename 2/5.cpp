#include<iostream>
using namespace std;
class doom{
    public:
    void print(int n){
        for (int i = 1; i <=n; i++)
        {
            cout<<i<<" ";
        }
        
    }

};

int main(){
    doom obj1;
    int n;
    cin>>n;
    obj1.print(n);
    
    return 0;
}