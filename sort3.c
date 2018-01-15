#include <stdio.h>

int a[101],n;

void queckSort (int left, int right)
{
	int i,j,t,temp;
	if (left > right)
		return;

	temp = a[left];
	i = left;
	j = right;

	while (i != j)
	{
		while (a[j] >= temp && i < j)
            j--;
		while (a[i] <= temp && i < j)
            i++;

		if (i<j)
		{
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}

	a[left] = a[i];
	a[i] = temp;

	queckSort(left, i-1);
	queckSort(i+1, right);
}

int main()
{
    
    int i,j,t;

    printf("输入排序个数:");
    scanf("%d",&n);

    for (int i = 1; i <= n; ++i)
        scanf("%d",&a[i]);
    
    queckSort(1,n);
    
    printf("等待计算:");
    for (int i = 1; i <= n; ++i)
        printf("%d ",a[i]);
    
    getchar();getchar();
    return 0;
}

/**
 快速排序
 */
