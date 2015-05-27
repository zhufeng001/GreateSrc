#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/*
会依次记录下自己所用到的知识点的。sizeof和strlen，以及string.h包含的函数等
判断字符串结束
*/
int main(void)
{
	char input[80];
	int len=0;
	int sum = 0;
	int end=0,i=0,j=0;
	scanf("%s",input);
	len = strlen(input);
	printf("len: %d\n",len);
	len = sizeof(input);
	printf("size: %d\n",len);
	while(input[i]!='\0')
	{
		while(input[i]=='o')
		{
			i++;
			j++;
			sum = sum+j;
		}
		if(input[i]=='\0')
			break;
		i++;
		j = 0;
	}
	printf("sum: %d",sum);
	scanf("%d",&end);
}