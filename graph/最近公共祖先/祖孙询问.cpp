//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 40010, M = N * 2;
//int n, m;
//int e[M], ne[M], h[N], w[M];
//int idx = 0;
//
//void add(int a, int b)
//{
//	e[idx] = b;
//	ne[idx] = h[a];
//	h[a] = idx;
//	idx++;
//}
//
//int q[N];
//int hh = 0, tt = -1;
//int depth[N], fa[N][16];
//void bfs(int root)
//{
//	memset(depth, 0x3f, sizeof depth);
//	depth[0] = 0, depth[root] = 1;
//	q[++tt] = root;
//	while (hh <= tt)
//	{
//		int t = q[hh++];
//		for (int i = h[t]; i != -1; i = ne[i])
//		{
//			int j = e[i];
//			if (depth[j] > depth[t] + 1)
//			{
//				depth[j] = depth[t] + 1;
//				q[++tt] = j;
//				fa[j][0] = t;
//				for (int k = 1; k <= 15; k++)
//				{
//					fa[j][k] = fa[fa[j][k-1]][k-1];
//				}
//			}
//		}
//	}
//}
//
//int lca(int a,int b)
//{
//	if (depth[a] < depth[b])
//	{
//		swap(a,b);
//	}
//	for (int k = 15; k >= 0; k--)
//	{
//		if (depth[fa[a][k]] >= depth[b])
//		{
//			a = fa[a][k];
//		}
//	}
//	if (a == b)
//	{
//		return a;
//	}
//	for (int k = 15; k >= 0; k--)
//	{
//		if (fa[a][k] != fa[b][k])
//		{
//			a = fa[a][k];
//			b = fa[b][k];
//		}
//	}
//	return fa[a][0];
//}
//
//
//int main()
//{
//	memset(h, -1, sizeof h);
//	cin >> n;
//	int root = 0;
//	
//	for (int i = 0; i < n; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		if (b == -1)
//		{
//			root = a;
//		}
//		else
//		{
//			add(a, b);
//			add(b, a);
//		}
//	}
//
//	bfs(root);
//
//	cin >> m;
//	while (m--)
//	{
//		int a, b;
//		cin >> a >> b;
//		int p = lca(a, b);
//		if (p == a) puts("1");
//		else if (p == b) puts("2");
//		else puts("0");
//	}
//
//	return 0;
//}
