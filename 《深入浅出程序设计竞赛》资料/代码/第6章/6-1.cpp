#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[110];
	scanf("%s",s);//Ҳ����ʹ��cin>>s;��� 
	for(int i=0;s[i]!='\0';i++){
		if('a'<=s[i]&&s[i]<='z'){
			s[i]-='a'-'A';
		}
	}
	printf("%s\n",s);//Ҳ����ʹ��cout<<s<<endl;��� 
	return 0;
}
