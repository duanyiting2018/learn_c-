#include<bits/stdc++.h>
using namespace std;
void a(int x);
void b(int x);
void c(int x);
int d(int x);
void a(int x){
	cout<<"a�յ����ݹ�����"<<x<<endl;
	x++;
	b(x);
}
void b(int x){
	cout<<"b�յ����ݹ�����"<<x<<endl;
	x++;
	c(x);
}
void c(int x){
	cout<<"c�յ����ݹ�����"<<x<<endl;
	x++;
	d(x);
}
int d(int x){return x;}
int main(){
	int x=20;
	a(x);
	cout<<d(++x);
	return 0;
}
