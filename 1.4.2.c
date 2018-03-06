#include <stdio.h>

int main() {
    
    int a[101],n,i,j,t;
    
    printf("输入排序个数:");
    scanf("%d",&n); //输入个数
    
    for (int i = 1; i <= n; ++i) {
 		scanf("%d",&a[i]); //输入编号
 		a[t] = 1;
    }

    //排序处理
    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= n-i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    printf("等待计算:\n");
    printf("%d ",a[1]);
    
    for (int i=2; i <= n; i++) {
        if (a[i] != a[i-1])
   			printf("%d ", a[i]);
    }

    getchar();getchar();
    return 0;
}

 
