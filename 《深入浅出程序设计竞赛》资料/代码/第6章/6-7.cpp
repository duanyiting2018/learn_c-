#include<bits/stdc++.h>
using namespace std;
int main(){
	string word,s;
	getline(cin,word);
	getline(cin,s);
	for(int i=0;i<word.length();i++){
		if('A'<=word[i]&&word[i]<='Z'){
			word[i]+='a'-'A';
		}
	}
	for(int i=0;i<s.length();i++){
		if('A'<=s[i]&&s[i]<='Z'){
			s[i]+='a'-'A';
		}
	}
	word=' '+word+' ';//�����ʵ�ǰ�󶼼��Ͽո񣬷�ֹ���� 
	s=' '+s+' ';
	if(s.find(word)==-1){
		cout<<-1<<endl;
	} else {
		int firstpos=s.find(word);
		int nextpos=s.find(word),cnt=0;
		while(nextpos!=-1){
			cnt++;
			nextpos=s.find(word,nextpos+1);/*ÿ�δ���һ�γ��ִ����ĺ���
			��ѯ���������һ�γ��ֵ�λ��*/
		}
		cout<<cnt<<" "<<firstpos<<endl;
	}
	return 0;
}
