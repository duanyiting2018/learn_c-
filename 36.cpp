#include<iostream>
using namespace std;
int main()
{
	int p,x,s;
	p=1;
	x=15;
	s=x;
	cout<<p<<" "<<x;
	cout<<" "<<s<<endl;
	do{
		p++;
		x+=2;
		s+=x;
		cout<<p<<" "<<x<<" "<<s<<endl;
	}
	while(s!=312);
	cout<<"���һ����λ���ǣ�"<<x<<endl;
	cout<<"������"<<p;
	return 0;
}
