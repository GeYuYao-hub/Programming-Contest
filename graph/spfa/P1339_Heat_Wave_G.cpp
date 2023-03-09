//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N],dist[N];
//bool st[N];
//int idx = 0;
//int n, m, s, t;
//void add(int a, int b, int c)
//{
//	ne[idx] = h[a];
//	w[idx] = c;
//	e[idx] = b;
//	h[a] = idx;
//	idx++;
//}
//
//void spfa()
//{
//	dist[s] = 0;
//	queue<int>q;
//	q.push(s);
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (dist[j] > dist[t] + w[i])
//			{
//				dist[j] = dist[t] + w[i];
//
//				if (st[j])
//				{
//					continue;
//				}
//
//				q.push(j);
//				st[j] = true;
//			}
//		}
//	}
//	
//}
//
//int main()
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(h, -1, sizeof h);
//	cin >> n >> m >> s >> t;
//
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//
//	spfa();
//
//	cout << dist[t];
//}