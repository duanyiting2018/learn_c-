#include<iostream>
using namespace std;
int main()
{
	float x;
	do{
		cout<<"������ɼ���";
		cin>>x;
	}
	while(x<0||x>100);
	cout<<"chengji:"<<x;
	return 0;
}
