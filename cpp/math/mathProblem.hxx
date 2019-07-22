//
// Created by ys on 19-7-22.
//

#ifndef OPONCPP_MATHPROBLEM_HXX
#define OPONCPP_MATHPROBLEM_HXX

#include <vector>
#include <string>
using std::vector;
using std::string;

void test_math();
void test_fractor();
void test_per();
int sum(vector<int> &c);
void fractor(int n, vector<int> &frac);
void powerSet(string str, int index = -1,
              string curr = "");
#endif //OPONCPP_MATHPROBLEM_HXX
