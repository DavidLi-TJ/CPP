#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int j,i,k,endNo;
    bool isTailZero=true;
	char num[12];
	fgets(num, 12, stdin);
	k=strlen(num);
	if(num[0]=='-')
	{
		cout<<'-';
        endNo=1;
	}
	else
	{
		endNo=0;
	}
 
    for(int b=k-1;b>=endNo;b--)
    {
        if(num[b]!='0')
        {
            isTailZero=false;
            cout<<num[b];
        }
        else
        {
            if(isTailZero==false){
               cout<<num[b];
            }
            
        }
    }

    return 0;
}
