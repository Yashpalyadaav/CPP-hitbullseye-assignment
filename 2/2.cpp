#include<iostream>
using namespace std;
class rev{
    public:
    int reverse(int n){
        int last;
        int i=0;
        int digit=0;
        while (n!=0)
        {
            last=n%10;
            digit=10*digit+last;
            n=n/10;
        }
        return digit;
    }
};

int main(){
    rev o1;
    int n;
    cin>>n;
    cout<<o1.reverse(n);

    
    return 0;
}