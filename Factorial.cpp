#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    int fact=1;
    cin>>n;
    while(i<=n){
        fact=fact*i;
        i=i+1;
        
    }
    cout<<fact;
}