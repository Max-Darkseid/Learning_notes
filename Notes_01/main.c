#include <stdio.h>

int main()
{
    //演示getchar、putchar的用法
    char ch1, ch2;    //字符型变量
    printf("请输入一个字符：");
    //scanf("%c", &ch); 输入单个字符的等价写法
    ch1 = getchar();    //a
    //清空缓冲区
    fflush(stdin);
    printf("请输入第二个字符：");
    ch2 = getchar();
    //printf("您输入的字符是：%c, %c\n",  ch1, ch2);
    printf("您输入的字符是：");
    putchar(ch1);   //putchar一次只能打印一个字符
    putchar(',');
    putchar(ch2);
    return 0;
}
