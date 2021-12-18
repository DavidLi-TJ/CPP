
#include <iostream>
#include<algorithm>
using namespace std;

struct node
{
	int sum,chineseScore,num;
}no[301];
bool cmp(node a,node b)
{
	if(a.sum==b.sum)
	{
		if(a.chineseScore==b.chineseScore)
		{
			return a.num<b.num;
		}
		else
		{
			return a.chineseScore>b.chineseScore;
		}
	}
	else
	{
		return a.sum>b.sum;
	}	
}

int n,ans,i,a,b,c;

int main()
{
	cin>>n; 
	for(i=0;i<n;i++)
	{
		cin>>a>>b>>c;
		no[i].sum=a+b+c;
		no[i].chineseScore=a;
		no[i].num=i+1;
	}
	sort(no,no + n,cmp);
	for(int j=0;j<5;j++)
	{
		printf("%d %d\n",no[j].num,no[j].sum);
	}
	return 0;
}
