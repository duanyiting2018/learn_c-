#include<bits/stdc++.h>
using namespace std;
void qsort(int a[],int l,int r){
	int i=l,j=r,flag=a[(1+r)/2],tmp;//flagΪ�ڱ� 
	do{
		while(a[i]<flag) i++;//������ҳ����ڱ������ 
		while(a[j]>flag) j--;//���ұ��ҳ����ڱ�С���� 
		if(i<=j){
			tmp=a[i];a[i]=a[j];a[j]=tmp;
			i++;j--;
		}
	}while(i<=j);
	if(l<j) qsort(a,l,j);
	if(i<r) qsort(a,i,r);
}
int main(){
	return 0;
}
