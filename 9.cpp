#include<iostream>
#include<string>
using namespace std;
int main()
{
	const int PSW=12345678;
	int psw;
	string user;
	const string USER="duanyiting";
	cout<<"��ӭ������ͥ��⣬�������û�����";
	cin>>user;
	cout<<"���������룺";
	cin>>psw;
	if(user==USER)
		if(psw==PSW)
		cout<<"��ӭ�㣡С���ѣ��밴enter��������";
		else
		cout<<"��������ˣ������䣡";
	else
	cout<<"�û�����ˣ������䣡";
	return 0;
}
