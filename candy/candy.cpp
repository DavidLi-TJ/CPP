#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main() {
	freopen("candy.in","r",stdin);
	freopen("candy.out","w",stdout);

    long long numb=0,minBack=0,maxTake=0,take=0;
	cin>>numb>>minBack>>maxTake;

	long long saven [maxTake-minBack+1],ans=0,countn=0;
		take=minBack;
		
		for(int j=0;j<maxTake-take+1;j++)
		{		
			while(true)
			{
				if(minBack<numb)
				{
					countn++;
					saven[countn]=minBack;	
					break;
				}
				else
				{
					minBack=minBack-numb;
				}
			}
				minBack++;		
		}
sort(saven+1,saven+countn+1);
cout<<saven[countn];
fclose(stdin);
fclose(stdout);
	return 0;
}
