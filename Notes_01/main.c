#include <stdio.h>

int main()
{
    //��ʾgetchar��putchar���÷�
    char ch1, ch2;    //�ַ��ͱ���
    printf("������һ���ַ���");
    //scanf("%c", &ch); ���뵥���ַ��ĵȼ�д��
    ch1 = getchar();    //a
    //��ջ�����
    fflush(stdin);
    printf("������ڶ����ַ���");
    ch2 = getchar();
    //printf("��������ַ��ǣ�%c, %c\n",  ch1, ch2);
    printf("��������ַ��ǣ�");
    putchar(ch1);   //putcharһ��ֻ�ܴ�ӡһ���ַ�
    putchar(',');
    putchar(ch2);
    return 0;
}
