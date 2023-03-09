

//  错误原因：如果该最小生成树的这条边与要替换的边长度相同，那么就该替换次小边

//
//// 建出最小生成树 -> 根据树建图 -> 得到u到v路径上最大距离 -> 枚举每条非树边,u->v,看是dist[u][v]大还是w大                               
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//
//struct Node
//{
//	int a, b, c;
//	bool is;
//	bool operator<(const Node& t)const
//	{
//		return c < t.c;
//	}
//};
//
//Node g[N];
//int fa[N];
//int e[N], ne[N], w[N], h[N];
//int idx = 0;
//int dist[505][505];
//
//void dfs(int v, int f, int u, int maxd)
//{
//	dist[v][u] = maxd;
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (f != j)
//		{
//			dfs(v, u, j, max(maxd, w[i]));
//		}
//	}
//}
//
//void add(int a, int b,int c)
//{
//	w[idx] = c;
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//
//int find(int x)
//{
//	if (x == fa[x])
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//	
//}
//
//void merge(int x, int y)
//{
//	int a = find(x);
//	int b = find(y);
//	if (a == b)
//	{
//		return;
//	}
//	else
//	{
//		fa[x] = y;
//	}
//}
//
//long long res = 1e18;
//long long sum = 0;
//
//int main()
//{
//	memset(h, -1, sizeof h);
//
//	int n, m;
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		g[i] = {a,b,c,false};
//	}
//
//	sort(g, g + m);
//
//	for (int i = 0; i < m; i++)
//	{
//		int a = g[i].a;
//		int b = g[i].b;
//		int x = find(a);
//		int y = find(b);
//		if (x != y)
//		{
//			merge(x, y);
//			sum += g[i].c;
//			g[i].is = true;
//			add(a, b, g[i].c);
//			add(b, a, g[i].c);
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		// for循环中进入dfs的编号，fa，当前点,maxd
//		dfs(i, -1, i,0);
//	}
//
//	for (int i = 0; i < m; i++)
//	{
//		if (!g[i].is)
//		{
//			if (g[i].c >=dist[g[i].a][g[i].b])
//			{
//				res = min(res, sum  +g[i].c - dist[g[i].a][g[i].b]);
//			}
//		}
//	}
//
//	cout << res;
//
//}

// 正确答案

//#include<iostream>
//#include<algorithm>
//#include<cstring>
//using namespace std;
//const int N = 1e6 + 10;
//struct Node
//{
//	int a, b, c;
//	bool is;
//	bool operator<(Node& t)const
//	{
//		return c < t.c;
//	}
//};
//
//int e[N], ne[N], w[N], h[N], dist1[505][505],dist2[505][505],fa[N];
//int idx = 0;
//Node edge[N];
//
//void add(int a, int b, int c)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	w[idx] = c;
//	h[a] = idx++;
//}
//
//int find(int x)
//{
//	if (x == fa[x])
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x] = find(fa[x]);
//	}
//}
//
//void merge(int x, int y)
//{
//	int a = find(x);
//	int b = find(y);
//	if (a == b)
//	{
//		return;
//	}
//	else
//	{
//		fa[a] = b;
//	}
//}
//
//void dfs(int u, int fa,int max1,int max2, int dist1[], int dist2[])
//{
//	dist1[u] = max1;
//	dist2[u] = max2;
//	
//	for (int i = h[u]; i != -1; i = ne[i])
//	{
//		int j = e[i];
//		if (j != fa)
//		{
//			if (max1 < w[i])
//			{
//				dfs(j, u, w[i], max1, dist1, dist2);
//			}
//			else if (max1 > w[i] && max2 < w[i])
//			{
//				dfs(j, u, max1, w[i], dist1, dist2);
//			}
//			else
//			{
//				dfs(j, u, max1, max2, dist1, dist2);
//			}
//		}
//	}
//}
//
//int main()
//{
//	memset(h, -1, sizeof h);
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		cin >> edge[i].a >> edge[i].b >> edge[i].c;
//		edge[i].is = false;
//	}
//
//	sort(edge, edge + m);
//
//	long long sum = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int a = find(edge[i].a);
//		int b = find(edge[i].b);
//		if (a != b)
//		{
//			sum += edge[i].c;
//			edge[i].is = true;
//			merge(a, b);
//			add(edge[i].a, edge[i].b, edge[i].c);
//			add(edge[i].b, edge[i].a, edge[i].c);
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		dfs(i,-1,-1,-1,dist1[i],dist2[i]);
//	}
//	
//	long long res = 1e18;
//	for (int i = 0; i < m; i++)
//	{
//		if (!edge[i].is)
//		{
//			if (edge[i].c > dist1[edge[i].a][edge[i].b])
//			{
//				res = min(res, sum- dist1[edge[i].a][edge[i].b] +edge[i].c);
//			}
//			else if (edge[i].c > dist2[edge[i].a][edge[i].b])
//			{
//				res = min(res, sum - dist2[edge[i].a][edge[i].b] + edge[i].c);
//			}
//		}
//	}
//	cout << res;
//
//}