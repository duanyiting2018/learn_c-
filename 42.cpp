#include<iostream>
using namespace std;
int main()
{
	int gj,mj,xj;
	cout<<"    ����    ĸ��    С��"<<endl;
	for(gj=1;gj<=33;gj++)
		for(mj=1;mj<=50;mj++)
			for(xj=1;xj<=100;xj++)
				if((gj+mj+xj==100)&&(gj*3+mj*2+xj/3.0==100))
					cout<<"    "<<gj<<"       "<<mj<<"       "<<xj<<endl;
//һ��������33��50��100=165000��if�ж�
//--------------------------------------------------------------------------
//һ��������33��55=1650��if�ж�
    cout<<"    ����    ĸ��    С��"<<endl;
	for(gj=1;gj<=33;gj++)
		for(mj=1;mj<=50;mj++)
		{
			xj=100-gj-mj;
			if((gj+mj+xj==100)&&(gj*3+mj*2+xj/3.0==100))
				cout<<"    "<<gj<<"       "<<mj<<"       "<<xj<<endl;
	    }
	return 0;
}

