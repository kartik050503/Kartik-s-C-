#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int power=0;
	int n;
	cin>>n;
	int sum=0;
	while(n>0)
	{
		int rem=n%10;
		int base=rem*pow(2,power);
		power++;
		n=n/10;
		sum=sum+base;
	}
	cout<<sum;

	return 0;
}