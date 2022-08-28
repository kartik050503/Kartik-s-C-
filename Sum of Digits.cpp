#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;
    while(num!=0){
        int LastDigit=num%10;
        sum=sum+LastDigit;
        num=num/10;
    }
    cout<<sum;


}