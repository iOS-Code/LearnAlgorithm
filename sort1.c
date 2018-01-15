#include <stdio.h>
//int main()
//{
//    int a[11],i,j,t;
//
//    //初始化a[11]数组
//    for (i = 0; i <= 10; i++)
//        a[i] = 0 ;
//
//    //输入5个数字并加入a[]数组
//    for (i = 1; i <= 5; i++)
//    {
//        scanf("%d",&t);
//        a[t]++;
//    }
//
//    for (i = 0; i <= 10; i++) {
//        for (j = 1; j <= a[i]; j++) {
//            printf("%d",i);
//        }
//    }
//
//    getchar();
//    return 0;
//}

// 桶排序
int main()
{
    int book[1001],i,j,t,n;
    
    for (i = 0; i <= 1000; i++)
        book[i] = 0 ;
    
    //输入个数n 代表参加排序的个数
    scanf("%d",&n);
    
    for (i = 1; i <= n; i++)
    {
        scanf("%d",&t);//读取输入的数 存储在变量t
        book[t]++;//运行计数 对编号t的桶+1
    }
    
    for (i = 1000; i >= 0; i--) {//依次判断1000—0的桶
        for (j = 1; j <= book[i]; j++) {//根据桶里的计数 进行打印
            printf("%d ",i);
        }
    }
    
    getchar();getchar();
    return 0;
}

/**
 桶排序的时间复杂度:
 32-33 代码循环执行m次
 38-42 代码循环执行n次
 44-48 代码循环执行m+n次
 
 计算时间复杂度可以忽略小的常数
 时间复杂度:O(m+n+m+n) ——> O(2*(m+n)) ——> O(M+N)
 
 */
