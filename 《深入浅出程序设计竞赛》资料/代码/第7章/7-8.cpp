#include<bits/stdc++.h>
using namespace std;
int a[1050][1050],n;
void cal(int x,int y,int n){
	if(n==0) a[x][y]=1;
	else {
		cal(x+(1<<n-1),y,n-1);//���ϽǾ��� 
		cal(x,y+(1<<n-1),n-1);//���½Ǿ��� 
		cal(x+(1<<n-1),y+(1<<n-1),n-1);//���½Ǿ���  
	}
}
int main(){
	int n;
	//cin>>n;
	scanf("%d",&n);
	cal(0,0,n);
	for(int i=0;i < 1<<n;i++){
		for(int j=0;j < 1<<n;j++){
			printf("%d%c",a[i][j],j==(1<<n)-1?"\n":" ");
		}
	}
	return 0;
}

