//#include<iostream>
//#include<queue>
//#include<cstring>
//using namespace std;
//int n, m;
//const int N = 1e6;
//int e[N], ne[N], h[N], w[N],cnt[N],dist[N],idx;
//bool st[N];
//void add(int a, int b, int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//bool spfa()
//{
//	queue<int>q;
//	for (int i = 1; i <= n; i++)
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
//				if (cnt[j] >= n)
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
//	memset(h, -1, sizeof h);
//	memset(dist, 0x3f, sizeof dist);
//	cin >> n >> m;
//	while (m--) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//	}
//	if (spfa())
//	{
//		cout << "Yes" << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//}