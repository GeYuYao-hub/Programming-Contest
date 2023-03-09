//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N],num[N],dist[N];
//bool st[N];
//int idx = 0;
//int n, p, c;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int spfa(int x)
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//
//	dist[x] = 0;
//	queue<int>q;
//	st[x] = true;
//	q.push(x);
//
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
//				if (!st[j])
//				{
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//
//	int res = 0;
//
//	for (int i = 1; i <= p; i++)
//	{
//		if (num[i] && dist[i] == 0x3f3f3f3f)
//		{
//			return 0x3f3f3f3f;
//		}
//		res += dist[i] * num[i];
//	}
//
//	return res;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> p >> c;
//	for (int i = 0; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		num[t]++;
//	}
//	for (int i = 0; i < c; i++)
//	{
//		int x, y, z;
//		cin >> x >> y >> z;
//		add(x, y, z);
//		add(y, x, z);
//	}
//
//	int res = 0x3f3f3f3f;
//	for (int i = 1; i <= p; i++)
//	{
//		res = min(res, spfa(i));
//	}
//	cout << res;
//}