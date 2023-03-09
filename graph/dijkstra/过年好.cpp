
// dfs + dijkstra

//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], dist[6][N];
//bool st[N];
//bool to[6];
//int H[6];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//void dijkstra(int hh, int x)
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({ 0,x });
//	dist[hh][x] = 0;
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int pos = t.second;
//		int dis = t.first;
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[hh][j] > dis + w[i])
//			{
//				dist[hh][j] = dis + w[i];
//				q.push({ dist[hh][j],j});
//			}
//		}
//	}
//}
//int dfs(int s,int num,int dis) // s是当前点的标号，num是现在走了几站，dis是当前走了多远
//{
//	int S = H[s];
//	if (num == 5)
//	{
//		return dis;
//	}
//	int res = 0x3f3f3f3f;
//	for (int i = 1; i < 6; i++)
//	{
//		int p = H[i]; // p是可到点的名称
//		if (to[i])
//		{
//			continue;
//		}
//		to[i] = true;
//		res = min(res, dfs(i,num+1,dis+dist[s][p]));
//		to[i] = false;
//	}
//	return res;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	int n, m;
//	cin >> n >> m;
//	H[0] = 1;
//	for (int i = 1; i < 6; i++)
//	{
//		cin >> H[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//
//	memset(dist, 0x3f, sizeof dist);
//
//	for (int i = 0; i < 6; i++)
//	{
//		memset(st, false, sizeof st);
//		dijkstra(i,H[i]);
//	}
//
//	cout << dfs(0,0, 0) << endl;
//}