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
	gets(pas);//�����ַ��� 
    //	puts(pas);
	a=strlen(pas);//��¼���� 
	b=strlen(word);
	
//	for(i=0;i<a;i++)//��Сд 
//	{
//		pas[i]=tolower(pas[i]);
//	}
//	for(i=0;i<b;i++)
//	{
//		word[i]=tolower(word[i]);
//	}
	
	for(i=0;i<a-b;i++)//����pas 
	{
		isEqual=false;
		isHead=false;
		isBottom=false;
	//��ʼ�� 
		
		if(i==0)//isHead�ж� 
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
				isBottom = true;//isBottom�ж� 
			//	cout<<"isB2"<<" "<<i<<" ";
			}
		}
		//cout<<isHead<<" "<<isBottom<<" "<<i<<"\n";
		if(isHead==true&&isBottom==true)//�ж��Ƿ�������β���� 
		{
			isEqual=true;
			for(j=0;j<b;j++)//�����ж� 
			{
				if(tolower(word[j])!=tolower(pas[i+j]))//�ж��Ƿ���� 
				{
					isEqual=false;
					break;
				}
			}
				if(isEqual==true)//��� 
				{
					countNum+=1;//������+1 
					
					if(countNum==1)
					{
						pos=i;//��¼��һ�����ֵ�λ�� 
					//	cout<<pos<<"=="<<countNum<<",";
					}
				}
		}	

	}
	if(countNum==0)//�ж��Ƿ�����ȵ� 
	{
		cout<<"-1";
	}
	else
	{
		cout<<countNum<<" "<<pos;
	} 
	
	//����pas
	  //�Ƚϵ�ǰpas��word
	    //���жϵ�ǰpas head �Ƿ�ok
		//ok�Ļ����жϵ�ǰpas tail�Ƿ�ok
		//head �� tail��ok���ͽ���pas��word�ıȽ�
		  //������ֽڲ�һ�£��������Ƚ� 
	return 0;
}
