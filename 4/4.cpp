// Qns 4)
// Print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.

// Solution

#include <iostream>
using namespace std;
class Average{
    public:
    static float calculateAverage(float a, float b, float c){
        return (a + b + c) / 3;
    }
};


int main(){
    cout<<"Enter three numbers: ";
    float a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"The average is: "<<Average::calculateAverage(a,b,c)<<endl;
    return 0;
}
