
#include <stdio.h>

/*
����ô�����Ǹ��ֵĵ���ϸ���ˣ�������ε�printf�����ȵȡ�
�����е����ݽṹ����һ�顣���У��ṹ�壬ջ���б�֮�࣬���顣�Լ����ֵĿ⺯���ȵȣ���Ҫ��һ�顣�����ԴﵽĿ��Ϊ��ʽ�ˣ���һ���ƻ��������еĿ⺯�����漰��
stl�����ݽṹ����֪ʶ����Ҫǿ�е�ȥ��һ�飬�κε��㷨�����Ȳ��������ʹ�ˡ��ǵġ����Լ����ƻ���������
git�������и㶨����Ҫ��ȥ��eclipse�ˡ�ʹ��centos�ķ�������github�ϴ������ˡ�
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

