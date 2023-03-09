//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6 + 10;
//int n, m;
//int dist[N], ne[N], e[N], w[N], h[N], cnt[N], MOD = 100003;
//bool st[N];
//int idx = 0;
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//void dijkstra()
//{
//	dist[1] = 0;
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({0,1});
//	cnt[1] = 1;
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//		int pos = t.second;
//		int dis = t.first;
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
//				cnt[j] = cnt[pos];
//				cnt[j] %= MOD;
//				q.push({dist[j],j});
//			}
//			else if (dist[j] == dis + w[i])
//			{
//				cnt[j] += cnt[pos];
//				cnt[j] %= MOD;
//			}
//		}
//	}
//}
//int main()
//{
//	memset(dist, 0x3f, sizeof dist);
//	memset(h,-1,sizeof h);
//	cin >> n >> m;
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b;
//		c = 1;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	dijkstra();
//	for (int i = 1; i <= n; i++)
//	{
//		cout << cnt[i]%MOD << endl;
//	}
//}