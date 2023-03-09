//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], dist[N], lv[N];
//bool st[N];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int dijkstra(int l, int r)
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//
//	q.push({ 0,0 });
//	dist[0] = 0;
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int dis = t.first;
//		int pos = t.second;
//
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//
//		for (int i = h[pos]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (l <= lv[j] && lv[j] <= r && dist[j] > dis + w[i])
//			{
//				dist[j] = dis + w[i];
//				q.push({ dist[j],j });
//			}
//		}
//	}
//
//	return dist[1];
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	int m, n;
//	cin >> m >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int p, l, x;
//		cin >> p >> l >> x;
//		lv[i] = l;
//		add(0, i, p);
//		for (int j = 1; j <= x; j++)
//		{
//			int t, v;
//			cin >> t >> v;
//			add(t, i, v);
//		}
//	}
//
//	int res = 0x3f3f3f3f;
//	for (int i = lv[1] - m; i <= lv[1]; i++)
//	{
//		res = min(res, dijkstra(i, i + m));
//		break;
//	}
//	cout << res;
//}