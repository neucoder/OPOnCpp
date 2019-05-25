//
// Created by ys on 2019/5/23.
//

#ifndef OPONCPP_MST_HXX
#define OPONCPP_MST_HXX


/*
 * 最小生成树的 Kruskal 算法
 * 算法思想：构造n个顶点的非连通图，每次选择可用的最小权值的边（选择之后确保生成的树
 * 不会成为连通图）
 * 算法的两个关键步骤：1， 选择最小边（排序的数组，或者最小堆）
 *                      2， 判断连通分量以及合并连通分量
 *
 *
*/

struct edge
{
    int u, v, w;
};

int cmp(const void *a, const void *b);

class MST_Kruskal
{

protected:
    int m, n; //顶点数，和边数
    //边的结构数组
    edge *edges;

public:
    //构造函数
    MST_Kruskal() = default;

    MST_Kruskal(int m, int n)
    {
        this->m = m;
        this->n = n;
        this->edges = new struct edge[n]();
    }
    //从小到大的排序函数


    void Kruskal();

    void setEdgeValue(int i, int edgevalue[][3]);

    void printEdges();

    ~MST_Kruskal()
    {
        delete[] edges;
    }


};


//实现并查集
/*
 * 初始值都设为 -1
 *
 * */
class UFset
{
protected:
    int *parent;
    int length;
public:
    UFset(int n)
    {
        this->parent = new int[n];
        this->length = n;
        for (int i = 0; i < n; ++i)
        {
            this->parent[i] = -1;
        }
    }

    ~UFset()
    {
        delete[] this->parent;
    }

    void setInitValue();

    void printValue();

    int Find(int x);

    void Union(int R1, int R2);
};

class MST_Boruvka : public MST_Kruskal
{
public:
    MST_Boruvka(int m, int n) : MST_Kruskal(m, n)
    {};

    void Boruvka();

};


void test_MST_Boruvka();

void test_Kruskal_MST();

void test_graph();

#endif //OPONCPP_MST_HXX
