#include<iostream>
using namespace std;
int main()
{
	int n,g,s;
	cout<<"��������λ����";
	cin>>n;
	s=n/10;
	g=n%10;
	n=g*10+s;
	cout<<n<<endl;
	return 0;
}
