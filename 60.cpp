#include<iostream>
#include<iomanip>//setw()
using namespace std;
void show(int n);//������main���棬Ҫ���� 
int main()
{
	int n=100;
	show(n);
	return 0;
}
void show(int n)
{
	if(n!=1)
		show(n-1);
	cout<<setw(6)<<n;
}
