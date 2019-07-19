#include <cstdio>
#include <windows.h>
#include <cstdlib>
#include <conio.h>

void init();
void print();
void updateWithInput();
void updateWithoutInput();

int P11 = 1,P12 = 1,P21 = 1,P22 = 1;
bool isOver = false;

int main()
{
    system("color f0");
    char isNext;
    init();
begin:
    isOver = false;
    while(isOver != true){
        print();
        updateWithInput();
        updateWithoutInput();
    }
    printf("����һ�֣�[Y/N]:e");
    scanf("%c",&isNext);
    if(isNext == true) goto begin;
    else return 0;
}

void init(){
    printf("��ӭ����\"������\"С��Ϸ\n");
    printf("��Ϸ����:\n");
    printf("�ʼ��ÿ���˵ļ�������1��1������ͨ�������˵ļ��������Լ���������ֵ\
            ��ֵ������Ϊ�㼦��ԭ�е���ֵ���ϱ��˼�������ֵ\n");
    printf("�����ֵ�պ�Ϊ10�������ջأ������ջ�����������ʤ����\n");
    printf("����1 1������������е�1�ż��������˵�1�ż���\n");
    system("pause");
    printf("��Ϸ������ʼ...");
    Sleep(3000);
    system("cls");
}

void updateWithInput(){
    int self,other;
    printf("P1���룺");
    scanf("%d %d",&self,&other);
    if(self == 1){
        if(other == 1 && P11 != 0) P11 += P21;
        if(other == 2 && P11 != 0) P11 += P22;
    }
    else if (self == 2){
        if(other == 1 && P12 != 0) P12 += P21;
        if(other == 2 && P12 != 0) P12 += P22;
    }
    else{
        printf("������Ч������һλ������룡\n");
    }
    
    printf("P2���룺");
    scanf("%d %d",&self,&other);
    if(self == 1){
        if(other == 1 && P21 != 0) P21 += P11;
        if(other == 2 && P21 != 0) P21 += P12;
    }
    else if (self == 2){
        if(other == 1 && P22 != 0) P22 += P11;
        if(other == 2 && P22 != 0) P22 += P12;
    }
    else{
        printf("������Ч������һλ������룡\n");
    }
}

void updateWithoutInput(){
    P11 %= 10;
    P12 %= 10;
    P21 %= 10;
    P22 %= 10;
    if(P11 == 0 && P12 == 0){
        isOver = true;
        printf("\aP1��ʤ\n");
    }
    if(P21 == 0 && P22 == 0){
        isOver = true;
        printf("\aP2��ʤ\n");
    }
}

void print(){
    printf("------------------------------\n");
    printf("P1:  %d               %d      \nP2:  %d               %d      \n------------------------------\n",P11,P12,P21,P22);
}