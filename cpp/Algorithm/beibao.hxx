//
// Created by ys on 2019/6/11.
//

#ifndef OPONCPP_BEIBAO_HXX
#define OPONCPP_BEIBAO_HXX

void testBei();

class Beibao
{
public:
    Beibao();

    Beibao(int n, int b, int *v, int *w);

    void solve();

    void print();

    float max(float x, float y)
    { return x > y ? x : y; }

private:
    int v[10];
    int w[10];
    int n, b;
    float F[5][11];

};

#endif //OPONCPP_BEIBAO_HXX
