/*
 *
 * 邻接矩阵表示法求图的出度和入读
 *
 * 输入第一行 n m  m表示m行数据 n,表示n个顶点
 * 以后每一行都为边 为顶点的形式(u, v)
 *顶点的计数从1开始
 * 7 9
 * 1 2
 * 2 3
 * 2 5
 * 2 6
 * 3 5
 * 4 3
 * 5 2
 * 5 4
 * 6 7
 * 0 0
 *
 * 输出两行每行n个数，第一行出度，第二行入读
 * 1 3 1 1 2 1 0
 * 0 2 2 1 2 1 1
 *
 * */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXN 100
int Edge[MAXN][MAXN];


int main()
{
    int m = 0, n = 0;
    while (1)
    {
        scanf("%d%d", &n, &m);
        if (n == 0 && m == 0)
        {
            break;
        }
        memset(Edge, 0, sizeof(Edge));
        int u = -1, v = -1;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d%d", &u, &v);
            Edge[u - 1][v - 1] = 1;
        }
        int idree = 0, odree = 0;
        for (int j = 0; j < n; ++j)
        {
            odree = 0;
            for (int i = 0; i < n; ++i)
            {
                odree += Edge[j][i];
            }
            if (j == 0)
            {
                printf("%d", odree);
            }
            else
            {
                printf(" %d", odree);
            }
        }
        printf("\n");
        for (int k = 0; k < n; ++k)
        {
            idree = 0;
            for (int i = 0; i < n; ++i)
            {
                idree += Edge[i][k];
            }
            if (k == 0)
            {
                printf("%d", idree);
            }
            else
            {
                printf(" %d", idree);
            }
        }

    }
    for (int l = 0; l < n; ++l)
    {
        for (int i = 0; i < n; ++i)
        {
            printf("%d ", Edge[l][i]);
        }
        printf("\n");
    }
    return 0;
}