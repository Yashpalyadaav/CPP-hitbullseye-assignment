#include<iostream>
using namespace std;
class large{
    public:
    int lar(int a,int b,int c){
        if (a>b)
        {
            if (a>c)
            {
                return a;
            }
            
        }
        else if (b>a)
        {
            if (b>c)
            {
                return b;
            }
            
        }
        return c;
        
        
    }
};

int main(){
    large o1;
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"the largest no. is "<<o1.lar(a,b,c)<<endl;
    
    return 0;
}