//��Ŀ����
//���� N(N<=1000)��ͬѧ��ÿ��ͬѧ��Ҫ���һ���ṹ���¼������Ϣ��ѧ�ţ������� 100000 ������������ѧҵ�ɼ���������չ�ɼ����ֱ��� 0 �� 100 �����������ۺϷ�����ʵ������
//ÿ�ж���ͬѧ��������ѧҵ�ɼ���������չ�ɼ������Ҽ����ۺϷ������ֱ��� 70% �� 30% Ȩ���ۼӣ�������ṹ���С�����Ҫ�ڽṹ���ж���һ����Ա���������ظýṹ������ѧҵ�ɼ���������չ�ɼ����ܷ֡�
//Ȼ����Ҫ���һ���������������һ��ѧ���ṹ������жϸ�ѧ���Ƿ����㡣����Ķ�����ѧҵ��������չ�ɼ��ִܷ��� 140 �֣����ۺϷ�����С�� 80 �֡�
//�����ʽ
//��һ��һ������ N��
//������ N �У�ÿ�� 3 �����������δ���ѧ�š�ѧҵ�ɼ���������չ�ɼ���
//�����ʽ
//N �У������ i ��ѧ��������ģ���� Excellent��������� Not excellent��
#include<bits/stdc++.h>
using namespace std;
struct student {
	int no;
	int score,extend_score;
	//double all_score;
//	student() {
//	}
//	student(int no,int score,int extend_score) {
//		no=no;
//		score=score;
//		extend_score=extend_score;
//		all_score=score*0.7+extend_score*0.3;
//	}
	double all_score() {
		return score*0.7+extend_score*0.3;
	}
	int sum() {
		return score+extend_score;
	}
};
int main() {
	int id,score2,extend,n;
	student a[1010];
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>id>>score2>>extend;
		//student b={id,score2,extend};
		student b ;
		b.no=id;
		b.score=score2;
		b.extend_score=extend;
		a[i]=b;
		//student a[i](id,score2,extend);
	}

//	for(int i=1; i<=n; i++) {
//		//cin>>id>>score2>>extend;
//
//		cout<<a[i].no<<" "<<a[i].score <<" "<<a[i].extend_score<<endl;
//		//student a[i](id,score2,extend);
//	}

	for(int i=1; i<=n; i++) {
		if(a[i].sum()>140&&a[i].all_score()>=80) {
			cout<<"Excellent"<<endl;
		} else {
			cout<<"Not excellent"<<endl;
		}
	}
	return 0;
}

