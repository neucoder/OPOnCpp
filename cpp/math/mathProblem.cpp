//
// Created by ys on 19-7-22.
//


#include <vector>
#include <iostream>
#include <ctime>
#include "mathProblem.hxx"
using namespace std;
clock_t start;
clock_t stop;

void test_math()
{
    cout << "test..." << endl;
}



void fractor(int n, vector<int> &frac)
{
    for (int i = 1; i <= n/2; ++i)
    {
        if(!(n%i))
            frac.push_back(i);
    }
}


int sum(vector<int> &c)
{
    int sum = 0;
    for (auto elem : c)
    {
        sum+=elem;
    }
    return sum;
}


void test_fractor()
{
    vector<int> a;
    for (int i = 2; i < 20; ++i)
    {

        fractor(i, a);
        cout << i << " (";
        for(auto elem:a)
        {
            cout << elem << ' ';
        }
        cout << ")" << sum(a) << endl;
        a.clear();
    }
}

void test_per()
{
    start = clock();
    vector<int> a;
    for (int i = 1; i < 1000000; ++i)
    {
        fractor(i, a);
        if(i == sum(a))
            cout << "perfact num" << i << endl;
        a.clear();
        if(i%1000==0)
            cout << i << endl;
    }
    stop = clock();
    cout << "run time is:" << 1000.0*(stop-start)/CLOCKS_PER_SEC << "ms";
}



using namespace std;

// str : Stores input string
// curr : Stores current subset
// index : Index in current subset, curr
void powerSet(string str, int index,
              string curr)
{
    int n = str.length();

    // base case
    if (index == n)
        return;

    // First print current subset
    cout << curr << "\n";

    // Try appending remaining characters
    // to current subset
    for (int i = index + 1; i < n; i++) {

        curr += str[i];
        powerSet(str, i, curr);

        // Once all subsets beginning with
        // initial "curr" are printed, remove
        // last character to consider a different
        // prefix of subsets.
        curr.erase(curr.size() - 1);
    }
    return;
}


