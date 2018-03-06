#include <stdio.h>
#include <string.h>

/**
 回文字符串 正读反读均相同的字符序号
 */

int main()
{
    char a[101],s[101];
    int i, len, mid, next, top;
    
    printf("输入一段字符:");
    gets(a);
    len = strlen(a);//获取字符串长度
    mid = len/2 - 1;//获取中点
    
    printf("计算数据 len:%d mid:%d \n",len,mid);
    
    top = 0;//初始化栈
    for (i = 0; i <= mid; i++) {
        printf("计算数据 i:%d top:%d \n",i,top);
        s[++top] = a[i];//入栈
    }
    //获取匹配坐标
    if (len % 2 == 0) {
        next = mid + 1;
    } else {
        next = mid + 2;
    }
    
    printf("计算数据 next:%d \n",next);
    
    //字符串匹配
    for (i = next; i <= len-1; i++) {
        
        printf("计算中:%c %c \n",a[i],s[top]);
        
        if (a[i] != s[top]) {
            break;
        }
        top--;
    }
    //输出结果
    if (top == 0) {
        printf("YES");
    } else {
        printf("NO");
    }
    getchar();
    getchar();
    return 0;
}
