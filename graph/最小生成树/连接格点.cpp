//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 2e3;
//int m, n;
//int g[N][N];
//int fa[N * N];
//struct Node
//{
//	int a, b, c;
//};
//Node e [N * N];
//int cnt = 0;
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
//int dx[4] = {-1,1,0,0};
//int dy[4] = {0,0,1,-1};
//
//void get_edges()
//{
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 0; k < 2; k++)
//			{
//				int a = i + dx[k];
//				int b = j + dy[k];
//				if (a >= 1 && a <= m && b >= 1 && b <= n)
//				{
//					int x = g[i][j];
//					int y = g[a][b];
//					e[cnt++] = {x,y,1};
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 0; k < 2 ;k++)
//			{
//				int a = i + dx[k+2];
//				int b = j + dy[k+2];
//				if (a >= 1 && a <= m && b >= 1 && b <= n)
//				{
//					int x = g[i][j];
//					int y = g[a][b];
//					e[cnt++] = { x,y,2 };
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int a, b, c, d;
//	cin >> m >> n;
//	int k = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			g[i][j] = k++;
//		}
//	}
//	for (int i = 0; i < k; i++)
//	{
//		fa[i] = i;
//	}
//	while (cin >> a >> b >> c >> d)
//	{
//		int x = g[a][b];
//		int y = g[c][d];
//		merge(x, y);
//	}
//
//	get_edges();
//
//	int res = 0;
//	// cout << cnt << endl;
//	for (int i = 0; i < cnt; i++)
//	{
//		Node t = e[i];
//		int a = t.a;
//		int b = t.b;
//		int w = t.c;
//		if (find(a) == find(b))
//		{
//			continue;
//		}
//		else
//		{
//			merge(a, b);
//			res += w;
//		}
//	}
//	cout << res;
//}