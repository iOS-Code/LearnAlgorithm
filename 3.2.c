#include <stdio.h>

/**
 炸弹游戏
 */

int main()
{
    char a[20][21];
    int i,j,sum,map=0,p,q,x,y,m,n;
    //n->行 m->列
    scanf("%d %d", &n,&m);
    
    for (i=0; i<=n-1; i++) {
        scanf("%s",a[i]);
    }
    
    for (i=0; i<=n; i++) {
        for (j=0; j<m-1; j++) {
            if (a[i][j] == '.' ) {
                sum = 0;//初始化sum 进行计数
                
                //向上进行统计
                x=i; y=j;
                while (a[x][y] != '#') {
                    if (a[x][y] == 'G') {
                        sum++;
                    }
                    x--;
                }
                
                //向下进行统计
                x=i; y=j;
                while (a[x][y] != '#') {
                    if (a[x][y] == 'G') {
                        sum++;
                    }
                    x++;
                }
                
                //向左进行统计
                x=i; y=j;
                while (a[x][y] != '#') {
                    if (a[x][y] == 'G') {
                        sum++;
                    }
                    y--;
                }
                
                //向右进行统计
                x=i; y=j;
                while (a[x][y] != '#') {
                    if (a[x][y] == 'G') {
                        sum++;
                    }
                    y++;
                }
                
                //更新map
                if (sum > map) {
                    map = sum;
                    p=i;
                    q=j;
                }
            }
        }
    }
    
    printf("(%d,%d) --> %d", p, q, map);
    
    getchar();getchar();
    return 0;
}
