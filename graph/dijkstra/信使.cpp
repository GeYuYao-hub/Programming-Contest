//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//typedef pair<int, int>PII;
//int e[N], ne[N], h[N], w[N], dist[N];
//bool st[N];
//int n, m;
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int dijkstra()
//{
//	dist[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({dist[1],1});
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int dis = t.first;
//		int pos = t.second;
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
//
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dist[i] == 0x3f3f3f3f)
//		{
//			return -1;
//		}
//		else
//		{
//			res = max(res, dist[i]);
//		}
//	}
//	return res;
//}
//int main()
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	cout << dijkstra() << endl;
//}