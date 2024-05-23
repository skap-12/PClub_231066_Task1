#include "testlib.h"
#include <iostream>

using namespace std;

const int MAX_T = 108000;
const long long MAX_N = 4052555153018976267LL;

int main(int argc, char *argv[])
{
    registerGen(argc, argv, 1);
    int t = rnd.next(MAX_T - 1000, MAX_T);
    cout << t << endl;
    for (int i = 0; i < t; ++i)
    {
        long long n = rnd.next(MAX_N - 100000000000000, MAX_N);
        cout << n << endl;
    }

    return 0;
}
