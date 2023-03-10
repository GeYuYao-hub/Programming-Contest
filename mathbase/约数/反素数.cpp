//#include <cstring>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//typedef long long LL;
//
//int primes[10] = { 2, 3, 5, 7, 11, 13, 17, 19, 23,29 };
//int maxd, number;
//int n;
//
//void dfs(int u, int last, int p, int s)
//{
//    if (s > maxd || s == maxd && p < number)
//    {
//        maxd = s;
//        number = p;
//    }
//
//    for (int i = 1; i <= last; i++)
//    {
//        if ((LL)p * primes[u] > n) break;
//        p *= primes[u];
//        dfs(u + 1, i, p, s * (i + 1));
//    }
//}
//
//int main()
//{
//    cin >> n;
//
//    dfs(0, 30, 1, 1);
//
//    cout << number << endl;
//
//    return 0;
//}
//
