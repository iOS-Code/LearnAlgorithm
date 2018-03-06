#include <stdio.h>

struct queue
{
    int data[100];
    int head;
    int tail;
};

int main()
{
    struct queue q;
    int i,n;
    
    printf("输入队列个数:");
    scanf("%d",&n);
    
    
    //初始化队列
    q.head = 1;
    q.tail = 1;
    for (int i=1; i <= n; i++) {
        //依次进入队列
        scanf("%d",&q.data[q.tail]);
        q.tail++;
    }
    
    printf("打印队首:%d \n",q.data[q.head]);
    printf("打印队尾:%d \n",q.data[q.tail]);
    printf("打印结果:\n");
    
    while (q.head < q.tail) {
        printf("%d ",q.data[q.head]);
        q.head ++;
        
        // 将队首的数据添加到队尾
        q.data[q.tail] = q.data[q.head];
        q.tail++;
        // 将队首出队
        q.head++;
    }
    
    getchar();
    getchar();
    return 0;
}
