#include<iostream>
#include<math.h>
using namespace std;
int main() 
{
	int n1,n2;
	cin>>n1;
	cin>>n2;
	int i=n1;
	while(i<=n2)
	{
		int sum=0;
		int digit=i;
		int countdigits=0;
		while(digit!=0)
		{
			digit=digit/10;
			countdigits=countdigits+1;
		}
		int num=i;
		while(num!=0)
		{
			int rem=num%10;
			sum=sum + pow(rem,countdigits);
			num=num/10;
		}
		if(sum==i)
		{
			cout<<i<<endl;
		}
		i++;
	}

	return 0;
}