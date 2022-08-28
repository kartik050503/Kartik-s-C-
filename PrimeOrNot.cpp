#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number : ";
    cin>>num;
    int i=3;
    while(i<num){
        if(num%i==0){
            cout<<"Entered number is not a prime number ";
            return 0;
        }
        i=i+1;
    }
    cout<<"Entered number is a prime number";

    return 0;
}