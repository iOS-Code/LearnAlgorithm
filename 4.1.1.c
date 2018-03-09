#include <stdio.h>

/**
 深度优先搜索
 */

int a[10],book[10],n;//全局变量默认为0

void dfs(int step)
{
    int i;
    if (step == n+1) {
        for (i=1; i<=n; i++) {
            printf("%d",a[i]);
        }
        printf("\n");
        return;
    }
    
    
    for (i=1; i<=n; i++) {
        if (book[i] == 0) {
            a[step] = i;
            book[i] = 1;
            
            dfs(step+1);
            book[i] = 0;
        }
        return;
    }
}

int main()
{
    scanf("%d",&n);
    dfs(1);
    getchar();getchar();
    return 0;
}


/**
 深度优先搜索的关键在于解决“当下该如何做”
 
 
 void dfs (int step)
 {
    判断边界
    尝试每一种可能  for (i=1;i<=n;i++)
    {
        继续下一步 dfs(step+1)
    }
    返回
 }
 
 
 
 */
