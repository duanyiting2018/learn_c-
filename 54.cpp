#include<iostream>
using namespace std;
void show(int gs)//gs���β�,int��gs���������� 
{
	int i;
	for(i=1;i<=gs;i++)
		cout<<"*";
	cout<<endl;
}
int main()
{
	int n,a,b;
	cin>>n;
	for(a=1;a<=n;a++)//��ѭ��,Ҳ��ֱ��д 
		show(a);
		b=a*n;
		cout<<"*�ĸ���:"<<b/2;
	return 0;
}
