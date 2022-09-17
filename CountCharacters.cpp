#include<iostream>
using namespace std;
int main()
{
    int count=0;
    char ch;

    while(ch!='$')
    {
        cin>>ch;
        if(ch=='$'){
            break;
        }
        count++;
    }
    cout<<count<<endl;

}