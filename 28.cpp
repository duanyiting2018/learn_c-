#include<iostream>
using namespace std;
int main()
{
//A:�Ҳ���С͵
//B:C��С͵
//C:D��С͵
//D:�Ҳ���С͵
//(3�˶ԣ�1�˴���С͵)
	int i;
	char xt;
	for(i=1;i<=4;i++)
		if((i!=1)+(i==3)+(i==4)+(i!=4)==3)
		{
			xt=64+i;
			cout<<"xiaotou:"<<xt;
			break;
		}
	return 0;
}
