#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int n;
	cin>>n;
	int i=1;
	while(i<=n)
	{
		int power=0;
		int num;
		cin>>num;
		int sum=0;
		while(num>0)
		{
			int rem=num%10;
			int base=rem*pow(2,power);
			power++;
			num=num/10;
			sum=sum+base;
		}
		cout<<sum<<endl;
		i++;
	}

	return 0;
}