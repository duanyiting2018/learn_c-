#include<iostream>
using namespace std;
int main()
{//�ǹȲ���
	long long x,count=0;
	cout<<"x=";
	cin>>x;
	while(x!=1)
	{
		cout<<x<<"---------->>>";
		if(x%2==1)
			x=x*3+1;
		else
			x/=2;
		count++; 
	}
	cout<<x<<endl;
	cout<<"������"<<count;
	return 0;
}
