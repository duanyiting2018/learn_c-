#include<iostream>
using namespace std;
int main()
{
	bool bools;
	int year;
	cout<<"����������������������"<<endl<<"�㱻İ���˴���ˣ�����������"<<endl<<"��Ҫд������ݲ����ӳ�ȥ��";
	cin>>year;
	if((year%4==0&&year%100!=0)||year%400==0)
		bools=true;
	else
		bools=false;
	if(bools)
		cout<<"��ϲ��ɹ���";
	else
		cout<<"�ܱ�Ǹ������ʧ��...";
	return 0;
}
