//
// Created by ys on 2019/5/23.
//

#include <iostream>
#include <stdlib.h>
#include "MST.hxx"
#include <iterator>

using namespace std;

void MST_Kruskal::setEdgeValue(int i, int edgevalue[][3])
{
    edges[i].u = edgevalue[i][0];
    edges[i].v = edgevalue[i][1];
    edges[i].w = edgevalue[i][2];
}

void MST_Kruskal::printEdges()
{
    for (int i = 0; i < n; ++i)
    {
        cout << edges[i].u << " " << edges[i].v << " " << edges[i].w
             << endl;
    }
}

void MST_Kruskal::Kruskal()
{
    int sumWeight = 0;
    int num = 0;
    int u, v;
    UFset s(m);
    qsort(edges, n, sizeof(edges[0]), cmp);
    cout << endl;
    printEdges();
    cout << endl;
    for (int i = 0; i < n; ++i)
    {
        u = edges[i].u;
        v = edges[i].v;
        if (s.Find(u) != s.Find(v))
        {
            cout << u << " " << v << " " << edges[i].w << endl;
            sumWeight += edges[i].w;
            num++;
            s.Union(u, v);
        }
        if (num > n - 1) break;
    }

    cout << "weight of the MST is " << sumWeight << endl;
}


void UFset::setInitValue()
{

    for (int i = 0; i < this->length; ++i)
    {
        this->parent[i] = i;
    }
}

void UFset::printValue()
{
    for (int i = 0; i < this->length; ++i)
    {
        cout << i << " " << this->parent[i] << endl;
    }
    cout << endl;
}

int UFset::Find(int x)
{
    // 查找的位置
    int s;
    //一直查找到parent[s] 为负数为止， s为根节点的位置
    for (s = x; parent[s] >= 0; s = parent[s]);
    //压缩路径，使后续的查找操作加速
    while (s != x)
    {
        int tmp = parent[x];
        parent[x] = s;
        x = tmp;
    }
    return s;
}


//合并R1 R2 所在的元素的集合
void UFset::Union(int R1, int R2)
{
    //r1 r2 分别为根节点 保存元素的个数 且为负数
    int r1 = Find(R1);
    int r2 = Find(R2);
    int tmp = parent[r1] + parent[r2];

    //把小的结点的树合并大的结点中去
    if (parent[r1] > parent[r2])
    {
        parent[r1] = r2;
        parent[r2] = tmp;
    }
    else
    {
        parent[r2] = r1;
        parent[r1] = tmp;
    }


}

// 暂时放下
void MST_Boruvka::Boruvka()
{
    int sumWeight = 0;
    int numTree = n;
    int u, v;

    UFset s(m);
    qsort(edges, n, sizeof(edges[0]), cmp);
    while (numTree > 1)
    {
        for (int i = 0; i < n; ++i)
        {
            int set1 = s.Find(edges[i].u);
            int set2 = s.Find(edges[i].v);
            if (set1 == set2)
            {
                continue;
            }
            else
            {

            }

        }

        for (int i = 0; i < m; ++i)
        {

        }
    }

    cout << "Weight of MST is " << sumWeight << endl;

}

void test_Kruskal_MST()
{
    int m = 7, n = 9;
    int edgeValue[][3] = {
            {1, 2, 28},
            {1, 6, 10},
            {2, 3, 16},
            {2, 7, 14},
            {3, 4, 12},
            {4, 5, 22},
            {4, 7, 18},
            {5, 6, 25},
            {5, 7, 24}
    };
    MST_Boruvka mst(m, n);
    for (int i = 0; i < n; ++i)
    {
        mst.setEdgeValue(i, edgeValue);
    }

    mst.printEdges();
    mst.Kruskal();

}


int cmp(const void *a, const void *b)
{
    edge aa = *(const edge *) a;
    edge bb = *(const edge *) b;
    return aa.w - bb.w;
}

void test_graph()
{
    cout << "test graph" << endl;
}
