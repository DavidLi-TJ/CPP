#include<bits/stdc++.h>
using namespace std;
    int i,a,b,j,countNum=0,pos=0;
	bool isEqual,isHead,isAir,isBottom=false;
	char word[11],pas[1000001];
//	i=a=b=j=count=pos=0;
//	isEqual,isHead,isBottom=false;
int compareString()
{	

	
}

int main() {
	
	
	gets(word);
	gets(pas);//输入字符串 
    //	puts(pas);
	a=strlen(pas);//记录长度 
	b=strlen(word);
	
//	for(i=0;i<a;i++)//变小写 
//	{
//		pas[i]=tolower(pas[i]);
//	}
//	for(i=0;i<b;i++)
//	{
//		word[i]=tolower(word[i]);
//	}
	
	for(i=0;i<a-b;i++)//遍历pas 
	{
		isEqual=false;
		isHead=false;
		isBottom=false;
	//初始化 
		
		if(i==0)//isHead判断 
		{
		  isHead=true;
		  //cout<<"isHead1"<<" "<<i<<" ";
	    }
		else if(!((pas[i-1]>='a'&&pas[i-1]<='z')||(pas[i-1]>='A'&&pas[i-1]<='Z')))
		{
			isHead=true;
		//	cout<<"isHead2"<<" "<<i<<" ";
		}
		
		if(isHead==true)
		{
			if(i==a-b-1)
			{
				isBottom = true;
			//	cout<<"isB1"<<" "<<i<<" ";
			}
			else if(!((pas[i+b]>='a'&&pas[i+b]<='z')||(pas[i+b]>='A'&&pas[i+b]<='Z')))
			{
				isBottom = true;//isBottom判断 
			//	cout<<"isB2"<<" "<<i<<" ";
			}
		}
		//cout<<isHead<<" "<<isBottom<<" "<<i<<"\n";
		if(isHead==true&&isBottom==true)//判断是否满足首尾条件 
		{
			isEqual=true;
			for(j=0;j<b;j++)//遍历判断 
			{
				if(tolower(word[j])!=tolower(pas[i+j]))//判断是否相等 
				{
					isEqual=false;
					break;
				}
			}
				if(isEqual==true)//相等 
				{
					countNum+=1;//计数器+1 
					
					if(countNum==1)
					{
						pos=i;//记录第一个出现的位置 
					//	cout<<pos<<"=="<<countNum<<",";
					}
				}
		}	

	}
	if(countNum==0)//判断是否有相等的 
	{
		cout<<"-1";
	}
	else
	{
		cout<<countNum<<" "<<pos;
	} 
	
	//遍历pas
	  //比较当前pas和word
	    //先判断当前pas head 是否ok
		//ok的话，判断当前pas tail是否ok
		//head 和 tail都ok，就进行pas和word的比较
		  //如果有字节不一致，就跳出比较 
	return 0;
}
