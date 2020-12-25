//利用malloc开辟内存空间
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int* p = (int*)malloc(10 * sizeof(int));//10 * sizeof(int)//换为INT_MAX
	if (p == NULL)
	{
		printf("%s",strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(p + i) = i;
		}
		int j;
		for(j=0;j<10;j++)
		printf("%d ",*(p+j));
		free(p);//释放空间
		p = NULL;//因为p还有记忆，所以赋值空指针
	}
	return 0;
}