#include <stdio.h>
#include <stdlib.h>

/**
 链表
 */

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *p, *q, *t;
    int i,n,a;
    
    scanf("%d",&n);
    head = NULL;//初始化头指针
    for (i=1; i<=n; i++) {
        //循环输入n个数
        scanf("%d", &a);
        //动态申请空间 存放节点 临时指针p指向这个节点
        p = (struct node *)malloc(sizeof(struct node));
        p->data = a;//将输入的数据存储在临时指针
        p->next = NULL;//将临时指针的后继指针设置为空
        
        if (head == NULL) {
            head = p;//如果头指针为空 设置指向p
        } else {
            q->next = p;//如果头指针存在 设置上个节点的后继指针指向p
        }
        //指针q指向当前节点
        q = p;
    }
    
    scanf("%d",&a);
    t = head;//从链表的头部开始遍历
    while (t != NULL) {
        if (t->next->data > a) {
            p = (struct node *)malloc(sizeof(struct node));//动态申请内存空间，存储新增节点
            p->data = a;
            p->next = t->next;//新增节点的后继指针指向当前节点的后继指针指向的节点
            t->next = p;//更新当前节点的后继指针指向新增节点
            break;//插入完毕 结束循环
        }
        t = t->next;//继续下一个节点
    }
    
    //输出链表中的数据
    t = head;
    while (t != NULL) {
        printf("%d ",t->data);
        t = t->next;
    }
    
    getchar();getchar();
    return 0;
}
