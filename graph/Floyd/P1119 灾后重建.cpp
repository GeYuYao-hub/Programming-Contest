//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e3;
//int g[N][N];
//int n, m;
//int t[N];
//int k = 0;
//int Floyd(int s,int e,int T)
//{
//    while(t[k]<=T)
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n;j++)
//            {
//                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
//            }
//        }
//        k++;
//    }
//    int tt = g[s][e];
//    if(tt==0x3f3f3f3f || t[s]>T || t[e]>T)
//    {
//        return -1;
//    }
//    else
//    {
//        return tt;
//    }
//}
//int main()
//{
//     memset(t, 0x3f, sizeof t);
//    memset(g, 0x3f, sizeof g);
//    cin >> n >> m;
//    for (int i = 0; i < n;i++)
//    {
//        cin >> t[i];
//    }
//    for (int i = 0; i < m;i++)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        g[a][b] = g[b][a] = c;
//    }
//
//    int q;
//    cin >> q;
//    while(q--)
//    {
//        int x, y, z;
//        cin >> x >> y >> z;
//        cout << Floyd(x, y, z) << endl;
//    }
//}