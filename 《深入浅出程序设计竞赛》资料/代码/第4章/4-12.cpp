#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	double s=0;
	cin>>n;
	/*����ĳ���,ע�⸡�����������  
	for(double i=0;i!=n;i+=0.1){
		s+=i;
		cout<<i<<endl;
	}
	*/
	for(double i=0;i+0.01<n;i+=0.1){//i+1e-3<nҲ����  
		s+=i;
		//cout<<i<<endl;
	}
	cout<<s;
	return 0;
}
