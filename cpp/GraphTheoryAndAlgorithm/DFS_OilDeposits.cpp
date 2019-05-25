//
// Created by ys on 2019/5/21.
//
/*
 * 探测油田的数量，如果相邻认为是同一个表
 *
 * 样例输入
 *   5 5
 *   ****@
 *   *@@*@
 *   *@**@
 *   @@@*@
 *   @@**@
 *   0 0
 *
 * */

/*
#include <stdio.h>


char grid[101][101]; //存储网络
int m, n;
int dir[8][2] = {
        {-1, -1},
        {-1, 0},
        {-1, 1},
        {0,  1},
        {1,  1},
        {1,  0},
        {1,  -1},
        {0,  -1}
};


//深度优先搜索
void DFS(int x, int y)
{
    int xx, yy;
    grid[x][y] = '*';
    for (int i = 0; i < 8; ++i)
    {
        xx = x + dir[i][0];
        yy = y + dir[i][1];
        if (xx < 0 || yy < 0 || xx >= m || yy >= n)
        {
            continue;
        }
        if (grid[xx][yy] == '@')
        {
            DFS(xx, yy);
        }
    }

}


int main()
{
    int i, j;
    int count = 0;
    char tmp;
    while (1)
    {
        scanf("%d%d", &m, &n);
        if (m == 0)
        {
            break;
        }
        scanf("%c", &tmp);
        for (int k = 0; k < m; ++k)
        {
            for (int l = 0; l < n; ++l)
            {
                scanf("%c", &grid[k][l]);
            }
            scanf("%c", &tmp);
        }

        for (int l = 0; l < m; ++l)
        {
            puts(grid[l]);
        }

        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < n; ++j)
            {
                if (grid[i][j] == '@')
                {
                    printf("%d %d\n", i, j);
                    DFS(i, j);
                    count++;
                }

            }
        }
        printf("%d\n", count);
    }
    return 0;
}
*/