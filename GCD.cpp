#include<iostream>
using namespace std;

int main() {
	int N1,N2,gcd,i;
    cout<<"ENTER N1 : ";
	cin>>N1;
    cout<<"ENTER N2 : ";
	cin>>N2;
	i=1;
	gcd=1;
	while(i<=N1 && i<=N2)
	{
		if(N1%i==0 && N2%i==0)
		{
			gcd=i;
			i=i+1;

		}
		else
		{
			i=i+1;

		}
	}
	cout<<"THE GCD OF N1 AND N2 IS : "<< gcd;
	return 0;
}