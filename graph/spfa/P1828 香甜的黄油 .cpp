//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//int n, p, c;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], dist[N];
//int cnt[N];
//int idx = 0;
//bool st[N];
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int spfa(int x)
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//	queue<int>q;
//
//	dist[x] = 0;
//	q.push(x);
//	st[x] = true;
//
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//
//			if (dist[j] > dist[t] + w[i])
//			{
//				dist[j] = dist[t] + w[i];
//				if (st[j])
//				{
//					continue;
//				}
//				q.push(j);
//				st[j] = true;
//			}
//		}
//	}
//
//	int res = 0;
//	for (int i = 1; i <= p; i++)
//	{
//		res += cnt[i] * dist[i];
//	}
//	return res;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> p >> c;
//
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		cnt[t]++;
//	}
//
//	while (c--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	int res = 0x3f3f3f3f;
//
//	for (int i = 1; i <= p; i++)
//	{
//		res = min(res, spfa(i));
//	}
//	cout << res;
//}