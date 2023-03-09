//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//int idx = 0;
//int e[N], ne[N], h[N], w[N],dist[N];
//bool st[N];
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//int dijkstra(int S,int E)
//{
//	dist[S] = 0;
//	priority_queue<PII, vector<PII>,greater<PII>>q;
//	q.push({dist[S],S});
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
//	return dist[E];
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	int T, C, s, e;
//	cin >> T >> C >> s >> e;
//	while (C--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	cout<<dijkstra(s,e);
//}