#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no. of numbers : "<<endl;
    cin>>n;
    int sum=n*(n+1)/2;
    int i=1;
    int x;
    while(i<=n-1)
    {
        cout<<"Enter the number: ";
        cin>>x;
        sum=sum-x;
        i++;
        
    }
    cout<<"The missing number is : "<<sum;
        
    

}