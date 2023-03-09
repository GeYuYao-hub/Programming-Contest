//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 2e3+10;
//typedef pair<int, int> PII;
//int g[N][N];
//int cnt[N];
//int dist[N];
//bool st[N];
//
//void add(int a,int b,int c)
//{
//    g[a][b] = min(g[a][b], c);
//}
//int n, E;
//int res = 0;
//
//
//void dijkstra()
//{
//    priority_queue<PII, vector<PII>, greater<PII>> q;
//    q.push({0, 1});
//    cnt[1] = 1;
//    while(!q.empty())
//    {
//        PII t = q.top();
//        q.pop();
//
//        int pos = t.second;
//        int dis = t.first;
//        if(st[pos])
//        {
//            continue;
//        }
//        st[pos] = true;
//
//        for (int i = 1; i <= n;i++)
//        {
//            if(g[pos][i]==0x3f3f3f3f || i == pos)
//            {
//                continue;
//            }
//
//            if(dist[i]==dis+g[pos][i])
//            {
//                cnt[i] +=cnt[pos];
//            }
//            if(dist[i]>dis+g[pos][i])
//            {
//                dist[i] = dis + g[pos][i];
//                cnt[i] = cnt[pos];
//                q.push({dist[i],i});
//            }
//        }
//    }
//
//
//    if(dist[n]==0x3f3f3f3f)
//    {
//        res = -1;
//    }
//
//}
//
//int main()
//{
//    memset(st, false, sizeof st);
//    memset(dist, 0x3f, sizeof dist);
//    memset(g, 0x3f, sizeof g);
//    cin >> n >> E;
//    while(E--)
//    {
//        int a, b, c;
//        cin >> a >> b >> c;
//        add(a, b, c);
//    }
//
//    dijkstra();
//    if(res==-1)
//    {
//        cout << "No answer" << endl;
//    }
//    else
//    {
//        cout << dist[n] << ' ' << cnt[n] << endl;
//    }
//
//    
//}