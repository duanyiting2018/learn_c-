#include<bits/stdc++.h>
using namespace std;
int ans=0,k;
void findkth(int a[],int l,int r){
	if(l==r){
		ans=a[l];//���䳤��Ϊ1ʱ��¼��  
		return;
	}
	int i=l,j=r,flag=a[(1+r)/2],tmp;
	do{
		while(a[i]<flag) i++;//������ҳ����ڱ������ 
		while(a[j]>flag) j--;//���ұ��ҳ����ڱ�С���� 
		if(i<=j){
			tmp=a[i];a[i]=a[j];a[j]=tmp;
			i++;j--;
		}
	}while(i<=j);
	if(k<=j) findkth(a,l,j);//��kС�������������� 
	else if(i<=k) findkth(a,i,r);//��kС�������������� 
	else findkth(a,j+1,i-1);//�Ȳ��������䣬Ҳ����������  
}
int main(){
	int a[50000000],i;
	for(i:a){
		cin>>a[i];
	}
	findkth(a,0,i);
	return 0;
}
