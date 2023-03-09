//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e5+10;
//int e[N], ne[N], w[N], h[N];
//bool st[N];
//int dist[N];
//int cnt[N];
//int idx = 0;
//int Nn, M, W;
//
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//
//bool spfa()
//{
//	queue<int>q;
//	for (int i = 1; i <= Nn; i++)
//	{
//		q.push(i);
//		st[i] = true;
//	}
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
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j] >= Nn)
//				{
//					return true;
//				}
//				dist[j] = dist[t] + w[i];
//				if (!st[j])
//				{
//					q.push(j);
//					st[j] = true;
//				}
//			}
//		}
//	}
//	return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		memset(h, -1, sizeof h);
//		memset(dist, 0x3f, sizeof dist);
//		memset(cnt, 0, sizeof cnt);
//		memset(st, false, sizeof st);
//		idx = 0;
//		cin >> Nn >> M >> W;
//		for (int i = 0; i < M; i++)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(a, b, c);
//			add(b, a, c);
//		}
//		for (int i = 0; i < W; i++)
//		{
//			int a, b, c;
//			cin >> a >> b >> c;
//			add(a, b, -c);
//		}
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