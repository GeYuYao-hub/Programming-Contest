//
//#include <iostream>
//#include <cstring>
//
//using namespace std;
//
//const int N = 210, M = 30010;
//
//bool d[N][N];
//bool st[N];
//int n, m;
//int match[N];
//
//bool find(int x)
//{
//    for (int i = 1; i <= n; i++)
//    {
//        if (d[x][i] && !st[i])
//        {
//            st[i] = true;
//            if (!match[i] || find(match[i]))
//            {
//                match[i] = x;
//                return true;
//            }
//        }
//    }
//    return false;
//}
//
//int main()
//{
//    cin >> n >> m;
//
//    while (m--)
//    {
//        int a, b;
//        cin >> a >> b;
//        d[a][b] = true;
//    }
//
//    for (int k = 1; k <= n; k++)//求传递闭包
//        for (int i = 1; i <= n; i++)
//            for (int j = 1; j <= n; j++)
//                d[i][j] |= d[i][k] & d[k][j];
//
//    int res = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        memset(st, 0, sizeof st);
//        if (find(i)) res++;
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        cout << "match[" << i << "]为" << match[i] << endl;
//    }
//    cout << n - res << endl;
//    return 0;
//}
