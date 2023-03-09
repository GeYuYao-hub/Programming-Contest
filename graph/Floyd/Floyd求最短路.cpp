//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//int n, m, k;
//const int N = 210;
//const int INF = 0x3f;
//int G[N][N];
//void add(int a, int b, int c)
//{
//    G[a][b] = c;
//}
//void floyd()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= n; j++)
//        {
//            for (int t = 1; t <= n; t++)
//            {
//                G[i][j] = min(G[i][j], G[i][t] + G[t][j]);
//            }
//        }
//    }
//}
//void ask(int a, int b)
//{
//    int t = G[a][b];
//    if (t == 0x3f3f3f3f)
//    {
//        cout << "impossible" << endl;
//    }
//    else
//    {
//        cout << t << endl;
//    }
//}
//int main()
//{
//    memset(G, INF, sizeof(G));
//    cin >> n >> m >> k;
//    while (m--)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        add(a, b, c);
//    }
//    floyd();
//    while (k--)
//    {
//        int a, b;
//        cin >> a >> b;
//        ask(a, b);
//    }
//}