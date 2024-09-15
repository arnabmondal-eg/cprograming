#include <stdio.h>
//the purpose of this file is to test what happens when ++ is put on either sode of a vairable//
int main()
{
int a = 0;
int b = 0;

b = ++a;
printf("a=%d, b= %d\n",a,b);
b = a++;
printf("a=%d, b= %d\n",a,b);
}
