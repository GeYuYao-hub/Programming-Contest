//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6 + 10;
//int e[N], ne[N], w[N], h[N], dist[N];
//bool st[N];
//int n, m, k;
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool check(int bound)
//{
//	memset(st, false, sizeof st);
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	deque<int>q;
//	q.push_back(1);
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop_front();
//		if (st[t])
//		{
//			continue;
//		}
//		st[t] = true;
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			int v = w[i] > bound;
//			if (dist[j] > v + dist[t])
//			{
//				dist[j] = v + dist[t];
//				if (v)
//				{
//					q.push_back(j);
//				}
//				else
//				{
//					q.push_front(j);
//				}
//			}
//		}
//	}
//	return dist[n] <= k;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	int l = 0;
//	int r = 1e6 + 1;
//	while (l < r)
//	{
//		int mid = (l + r) >> 1;
//		if (check(mid))
//		{
//			r = mid;
//		}
//		else
//		{
//			l = mid + 1;
//		}
//	}
//	if (r == 1e6 + 1)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << r << endl;
//	}
//}