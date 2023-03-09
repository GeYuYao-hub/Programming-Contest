//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6 + 10;
//int e[N], ne[N], w[N], h[N], dist[N];
//bool st[N];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//int n, m, s;
//int dijkstra()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[0] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({0,0});
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
//			if (dist[j] > dis + w[i])
//			{
//				dist[j] = dis + w[i];
//				q.push({dist[j],j});
//			}
//		}
//	}
//	return dist[s];
//}
//int main()
//{
//	while (cin >> n >> m >> s) {
//		memset(dist, 0x3f, sizeof dist);
//		memset(st, false, sizeof st);
//		memset(e, 0, sizeof e);
//		memset(h, -1, sizeof h);
//		memset(ne, 0, sizeof ne);
//		memset(w, 0, sizeof w);
//		for (int i = 0; i < m; i++)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(a, b, c);
//		}
//		int w;
//		cin >> w;
//		int res = 0x3f3f3f3f;
//		for (int i = 0; i < w; i++)
//		{
//			int t;
//			cin >> t;
//			add(0, t, 0);
//		}
//		res=dijkstra();
//		if (res == 0x3f3f3f3f)
//		{
//			res = -1;
//		}
//		cout << res<<endl;
//	}
//}