//
//// 二分+dijkstra
//
//#include<iostream>
//#include<deque>
//#include<cstring>
//using namespace std;
//int n, p, k;
//const int N = 1e6+10;
//int e[N], ne[N], w[N], h[N],dist[N];
//bool st[N];
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
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//
//	deque<int>q;
//	dist[1] = 0;
//	q.push_back(1);
//
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop_front();
//
//		if (st[t])
//		{
//			continue;
//		}
//		st[t] = true;
//
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
//
//	if (dist[n] <= k) // 大于k的边如果数量小于等于k就返回true
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//
//	cin >> n >> p >> k;
//
//	for (int i = 0; i < p; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//
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
//
//	if(r==1e6+1)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << r << endl;
//	}
//}