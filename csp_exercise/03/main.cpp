#include<bits/stdc++.h>
using namespace std;

const int MAXN = 100005;

struct Node{
	
	int price,time,used;
	
}q[MAXN];

int head,tail,numb,allSpend;


int main(){
	
	freopen("transfer.in","r",stdin);
	
	cin>>numb;

	
	
	for(int i=0;i<numb;i++)
	{
		int tran,price,time;
		cin>>tran>>price>>time;
		if(tran==0)
		{
			allSpend += price;
			q[tail].time = time+45;
			q[tail++].price = price;
		}
		else
		{
			while(head<tail&&q[head].time<time)
			{
				head++;
			}
			bool isOK=false;
			for(int j=head;j<tail;j++)
			{
				if(q[j].price>=price&&q[j].used==0)
				{
					isOK=true;
					q[j].used=1;
					break;
				}
			}
			if(isOK!=true)
			{
				allSpend +=price;
			}
		}
	}
//	freopen("transfer.out","w",stdout);
	cout<<allSpend;
	
	

	return 0;
}
