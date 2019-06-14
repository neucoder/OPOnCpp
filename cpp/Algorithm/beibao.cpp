//
// Created by ys on 2019/6/11.
//

#include <iostream>
#include "beibao.hxx"

using namespace std;

void testBei()
{
    int v[5] = {0, 1, 3, 5, 9};
    int w[5] = {0, 2, 3, 4, 7};
    Beibao b(4, 10, v, w);
    b.solve();
}

Beibao::Beibao(int n, int b, int v[], int w[])
{

    this->n = n;
    this->b = b;
    for (int i = 0; i < n + 1; ++i)
    {
        this->v[i] = v[i];
        this->w[i] = w[i];
    }

    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < b + 1; ++j)
        {
            F[i][j] = 0;
        }
    }

}

void Beibao::solve()
{
    print();
    for (int k = 1; k < n + 1; ++k)
    {
        for (int y = 0; y < b + 1; ++y)
        {
            if (k == 1)
            {
                F[k][y] = y / w[k] * v[k];
            }
            else
            {
                for (int yy = 0; yy < y / w[k] + 1; ++yy)
                {
                    int vy = y - yy * w[k];
                    if (yy >= 0)
                    {
                        F[k][y] = max(F[k - 1][y], F[k - 1][vy] + yy * v[k]);
                    }
                    else
                    {
                        F[k][y] = F[k - 1][y];
                    }
                }
            }
        }
    }
    cout << endl;
    print();
}

void Beibao::print()
{
    for (int i = 0; i < n + 1; ++i)
    {
        for (int j = 0; j < b + 1; ++j)
        {
            cout << F[i][j] << " ";
        }
        cout << endl;
    }
}