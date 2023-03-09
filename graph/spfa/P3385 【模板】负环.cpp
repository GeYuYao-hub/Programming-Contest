//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], w[N], h[N], dist[N];
//int idx = 0;
//bool st[N];
//int n, m;
//int cnt[N];
//void init()
//{
//	idx = 0;
//	memset(cnt, 0, sizeof cnt);
//	memset(e, 0, sizeof e);
//	memset(ne, 0, sizeof ne);
//	memset(w, 0, sizeof w);
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//}
//bool spfa()
//{
//	queue<int>q;
//	q.push(1);
//	st[1] = true;
//	dist[1] = 0;
//
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//		st[t] = false;
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//		
//			if (dist[j] > dist[t] + w[i])
//			{
//
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j] >= n)
//				{
//					return true;
//				}
//
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
//	return false;
//}
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	w[idx] = c;
//	ne[idx] = h[a];
//	h[a] = idx++;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//		init();
//		while (m--)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			if (c >= 0) {
//				add(a, b, c);
//				add(b, a, c);
//			}
//			else
//			{
//				add(a, b, c);
//			}
//		}
//
//		if (spfa())
//		{
//			cout << "YES" << endl;
//		}
//		else
//		{
//			cout << "NO" << endl;
//		}
//	}
//}
