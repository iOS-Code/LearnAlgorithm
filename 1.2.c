#include <stdio.h>

//int main()
//{
//    int a[100],i,j,t,n;
//
//    scanf("%d",&n);
//
//    for (i = 1; i <= n; i++)
//        scanf("%d",&a[i]);
//
//    for (i = 0; i <= n-1; i++) {
//        for (j = 1; j <= n-i; j++) {
//            if (a[j] < a[j+1]) {
//                t = a[j];
//                a[j] = a[j+1];
//                a[j+1] = t;
//            }
//        }
//    }
//
//    for (i = 1; i <= n; i++)
//        printf("%d ",a[i]);
//
//    getchar();getchar();
//    return 0;
//}


struct student {
    char name[21];
    int score;
};

int main()
{
    struct student a[100],t;
    int i,j,n;
    
    //输入排序个数
    printf("输入排序个数:");
    scanf("%d",&n);
    
    //循环读取n个人的人名和分数
    for (i = 1; i <= n; i++)//
        scanf("%s %d", a[i].name, &a[i].score);
    
    //进行排序 分数从高到低
    for (i = 1; i <= n-1; i++) {
        for (j = 1; j <= n-i; j++) {
            //比较分数
            if (a[j].score < a[j+1].score) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }
    
    printf("等待计算:");
    
    for (i = 1; i <= n; i++)
        printf("\n第%d名:\n %s\n %d", i, a[i].name, a[i].score);
    
    getchar();getchar();
    return 0;
}

/**
 冒泡排序的时间复杂度: O(N2)
 
 */
