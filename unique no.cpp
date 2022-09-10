#include<iostream>
using namespace std;
int main()
{
    int ans=0;
    int n,x;
    cout<<"Enter no. of numbers : "<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        cout<<"Enter the number"<<endl;
        cin>>x;
        ans=ans^x;
        i++;
    }
    cout<<"Unique no. is " <<ans;

}