#include<iostream>
using namespace std;
class swap1{
    public:
    void swapt(int &a ,int &b){
        int temp;
         temp=a;
         a=b;
         b=temp;
    }
};


int main(){
    swap1 ob1;
    int a,b;
    cin>>a>>b;
   
    ob1.swapt(a,b);
    cout<<"a is "<<a<<" b is "<<b;

    return 0;
}