#include<iostream>
using namespace std;
class art
{
	private:	//����˽�����ݺͳ�Ա���� 
		string name;//ֻ���ڱ����Ա������  
		int age;
	public:    //�����������ݺͳ�Ա����������Ҳ�ɵ��� 
		void set(string sn,int sa)
		{
			name=sn;
			age=sa;
		}
		void display()
		{
			cout<<"������"<<name<<endl;
			cout<<"���䣺"<<age<<endl;
			cout<<"----------------"<<endl;
		}
};
int main()
{
	art s1,s2,s3;//������art����������� 
	s1.set("DANNY",12);
	s1.display();
	s2.set("KITE",15);
	s2.display();
	s3.set("MANY",18);
	s3.display();
	return 0;
}
