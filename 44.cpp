#include<iostream>
using namespace std;
int main()
{
	int n=0;
	float n2,s,sum;
	bool flag;
	flag=true;
	sum=0.0;
	while(flag)
	{
		s=0.0;
		do
		{
			cin>>n;
			if(n==-1)
			{
				flag=false;
				break;
			}
			s+=n;
		}while(n!=0);
		cout<<"��ǰӦ�����";
		cout<<s<<endl;
		if(s!=0)
			n2++;
		sum+=s;
	}
	cout<<"Ӫҵ�����񣩣�"<<sum<<endl;
	cout<<"�������������񣩣�"<<n2;
	return 0;
}
