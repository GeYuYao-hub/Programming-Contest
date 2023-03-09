
// ±∂‘ˆÀ„∑®

//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 2e4 + 10;
//const int M = N * 2;
//int e[M], ne[M], h[N], w[M];
//int n, m;
//int idx = 0;
//int dist[N];
//int d[N];
//int fa[N][20];
//void add(int a,int b,int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//void dfs()
//{
//	queue<int>q;
//	q.push(1);
//	d[1] = 1;
//	d[0] = 0;
//	dist[1] = 0;
//	q.push(1);
//	while (!q.empty())
//	{
//		int t = q.front();
//		q.pop();
//
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (d[j])
//			{
//				continue;
//			}
//			d[j] = d[t] + 1;
//			dist[j] = dist[t] + w[i];
//			fa[j][0] = t;
//			q.push(j);
//			for (int k = 1; k <= 16; k++)
//			{
//				fa[j][k] = fa[fa[j][k-1]][k-1];
//			}
//		}
//	}
//}
//
//int lca(int a, int b)
//{
//	if (d[a] < d[b])
//	{
//		swap(a, b);
//	}
//
//	for (int k = 16; k >= 0;k--)
//	{
//		if (d[fa[a][k]] >= d[b])
//		{
//			a = fa[a][k];
//		}
//	}
//	if (a == b)
//	{
//		return a;
//	}
//	for (int k = 16; k >= 0; k--)
//	{
//		if (fa[a][k] != fa[b][k])
//		{
//			a = fa[a][k];
//			b = fa[b][k];
//		}
//	}
//	return fa[a][0];
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n >> m;
//	n--;
//	while (n--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//
//	dfs();
//
//	while (m--)
//	{
//		int a, b;
//		cin >> a >> b;
//		int t = lca(a, b);
//		cout << dist[a] + dist[b] - 2 * dist[t] << endl;
//	}
//}


// tarjan∑®

//#include<iostream>
//#include<cstring>
//#include<queue>
//#include<vector>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//const int M = 2 * N;
//int fa[N];
//int dist[N];
//int ne[M], e[M], h[N], w[M];
//int idx = 0;
//int st[N];
//int res[N];
//vector<PII>q[N];
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//int find(int x)
//{
//	if (fa[x] == x)
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//}
//void dfs(int u, int fa)
//{
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (j == fa)
//		{
//			continue;
//		}
//		dist[j] = dist[u] + w[i];
//		dfs(j,u);
//	}
//}
//void tarjan(int x)
//{
//	st[x] = 1;
//	for (int i = h[x]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (!st[j])
//		{
//			tarjan(j);
//			fa[j] = x;
//		}
//	}
//
//	for (auto item : q[x])
//	{
//		int id = item.second;
//		int y = item.first;
//		if (st[y]==2)
//		{
//			int anc = find(y);
//			res[id] = dist[x] + dist[y] - 2 * dist[anc] ;
//		}
//	}
//	st[x] = 2;
//}
//int main()
//{
//	memset(h, -1, sizeof h);
//	int n, m;
//	cin >> n >> m;
//	n--;
//	while (n--)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	dfs(1,-1);
//	for(int i=0;i<m;i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (a == b)
//		{
//			continue;
//		}
//		q[a].push_back({ b ,i});
//		q[b].push_back({a,i});
//	}
//	for (int i = 0; i < N; i++)
//	{
//		fa[i] = i;
//	}
//	tarjan(1);
//	for (int i = 0; i < m; i++)
//	{
//		cout << res[i] << endl;
//	}
//}