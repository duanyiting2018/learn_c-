#include<iostream>
#include<iomanip>//��setw 
using namespace std;
int main()
{
	int i,j;
	for(i=1;i<=40;i++)//�������� 
	{
		cout<<setw(41-i)<<' ';//ָ��*��λ�� 
		for(j=1;j<=i*2-1;j++)//����ÿ�и��� 
			cout<<'*';//��� 
		cout<<endl;//���� 
	}
	return 0;
}
