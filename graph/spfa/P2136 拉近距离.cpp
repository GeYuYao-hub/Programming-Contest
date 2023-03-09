//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int e[N], ne[N], h[N], w[N], dist[N];
//int idx = 0;
//int res = 0x3f3f3f3f;
//bool st[N];
//int cnt[N];
//int n, m;
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool spfa(int S,int E)
//{
//	queue<int>q;
//	q.push(S);
//	dist[S] = 0;
//	st[S] = true;
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
//			if (dist[j] > dist[t] + w[i])
//			{
//				cnt[j] = cnt[t] + 1;
//				if (cnt[j]>n)
//				{
//					return true;
//				}
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
//	res =min(res, dist[E]);
//	return false;
//}
//
//int main()
//{
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//
//	cin >> n >> m;
//	while (m--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b,- c);
//	}
//
//	if (spfa(1,n))
//	{
//		cout << "Forever love" << endl;
//		return 0;
//	}
//
//	memset(dist, 0x3f, sizeof dist);
//	memset(st, false, sizeof st);
//	if (spfa(n,1))
//	{
//		cout << "Forever love" << endl;
//		return 0;
//	}	
//	cout << res;
//	return 0;
//}