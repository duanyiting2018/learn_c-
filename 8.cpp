#include<iostream>
using namespace std;
int main()
{
	int iq;
	cout<<"IQ:";
	cin>>iq;
	if(iq>=160)cout<<"��ţ�";
	if(iq<160&&iq>=135)cout<<"����";
	if(iq<135)cout<<"������";
	return 0;
}
