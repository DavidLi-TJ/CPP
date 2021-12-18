#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("power.in","r",stdin);
	freopen("power.out","w",stdout);
	int n,p;
	int a[101];
	cin>>n;

	if(n%2!=0||n==0)
	{
		cout<<-1;
		return 0;
	}
	else
	{
		a[1]=1;
		for(int i=2;i<=26;i++)
		{
			a[i]=2*a[i-1];
		}
		for(int i=26;i>=2;i--)
		{
			if(n>=a[i])
			{
				n-=a[i];
				cout<<a[i]<<' ';
			}
		}
	}
	return 0;
}

