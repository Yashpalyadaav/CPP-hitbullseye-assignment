#include<iostream>
using namespace std;
class factorial{
    public:
    
    int find(int n){
        int s=1;
        for (int i = 1; i <=n; i++)
        {
            s=s*i;
        }
        return s;
    }
    void print(int s,int n){
        cout<<"the factorial of "<<n<<" is "<<s<<endl;
    }


};

int main(){
    factorial o1;
    int n;
    cin>>n;
    cout<<o1.find(n);
    
    
    return 0;
}