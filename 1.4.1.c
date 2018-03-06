#include <stdio.h>


// 1、将图书的ISBN进行去重，进行小大排序
// 2、先进行小大排序，去重

int main()
{
   int a[1001],n,i,t;
   for (int i = 0; i < 1000; ++i) 
   {
   		a[i] = 0;
   }
   

   printf("输入排序个数:");
   scanf("%d",&n); //输入个数
   
   for (int i = 0; i < n; ++i)
   {
 		scanf("%d",&t); //输入编号
 		a[t] = 1;
   }


   printf("等待计算:\n");

   for (int i = 0; i < 1000; ++i)
   {
   		if (a[i] == 1)
   		{
   			/* code */
   			printf(" %d ", i);
   		}
   }

   getchar();getchar();
   return 0;
}

 