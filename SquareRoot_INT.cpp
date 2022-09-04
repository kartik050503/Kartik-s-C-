#include<iostream>
using namespace std;
int main()
{
    int num,i;
    cin>>num;
    i=0;
    while(i*i<=num){
        i=i+1;
    }
    cout<<i-1;
}