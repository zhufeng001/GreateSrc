
#include <stdio.h>

/*
函数么，就是各种的调动细节了，比如这次的printf函数等等。
把所有的数据结构都玩一遍。队列，结构体，栈，列表之类，数组。以及各种的库函数等等，都要来一遍。不能以达到目的为方式了，列一个计划，把所有的库函数和涉及的
stl等数据结构，等知识，都要强行的去用一遍，任何的算法，都比不过这个好使了。是的。给自己定计划，定任务。
git的命令行搞定，不要再去用eclipse了。使用centos的服务器给github上传代码了。
*/


void main_average()
//void main()
{
	int l,m,n;
	float sum;
	int end;
	
	scanf("%d %d %d",&l,&m,&n);
	sum = (float)l+(float)m+(float)n;
	// printf("%d %d %d\n",l,m,n);
	printf("%.3f\n",sum/3);
	scanf("%d",&end);
}

