#include <stdio.h>

int main()
{
    int q[102] = {0,6,3,1,7,5,8,9,2,4},head,tail;
    int i;
    
    //初始化队列
    head = 1;
    //当前队列有9个元素，tail指向队尾的后一个位置
    tail = 10;
    
    while (head < tail) {
        //
        printf("%d ",q[head]);
        head++;
        
        q[tail] = q[head];
        tail++;
        head++;
    }
    
    getchar();
    getchar();
    return 0;
}
