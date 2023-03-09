//#include<iostream>
//#include<map>
//#include<string>
//#include<cstring>
//using namespace std;
//const int N = 26;
//int cnt = 1;
//map<string, int>mp1;
//string mp2[N];
//int g[N][N];
//bool st[N];
//int fa[N];
//int n, m;
//void init()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	memset(st, false, sizeof st);
//	memset(g, 0, sizeof g);
//	mp1.clear();
//	cnt = 1;
//}
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
//void merge(int a, int b)
//{
//	int x = find(a);
//	int y = find(b);
//	if (x == y)
//	{
//		return;
//	}
//	else
//	{
//		fa[x] = y;
//	}
//}
//void floyd()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 1; k <= n; k++)
//			{
//				if (g[j][i] && g[i][k])
//				{
//					g[j][k] = 1;
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	int T = 0;
//	while (cin >> n >> m)
//	{
//		if (n == 0 && m == 0)
//		{
//			break;
//		}
//		T++;
//		init();
//		for (int i = 0; i < m; i++)
//		{
//			string a, b;
//			cin >> a >> b;
//			if (!mp1.count(a))
//			{
//				mp1[a] = cnt;
//				mp2[cnt] = a;
//				cnt++;
//			}
//			if (!mp1.count(b))
//			{
//				mp1[b] = cnt;
//				mp2[cnt] = b;
//				cnt++;
//			}
//
//			int x = mp1[a];
//			int y = mp1[b];
//
//			g[x][y] = 1;
//		}
//
//		floyd();
//
//		for (int i = 1; i <=n; i++)
//		{
//			for (int j = 1; j <=n; j++)
//			{
//				if (g[i][j] && g[j][i])
//				{
//					merge(i, j);
//				}
//			}
//		}
//
//		cout << "Calling circles for data set " << T << ":" << endl;
//		for (int i = 1; i <= n; i++)
//		{
//			if (!st[i])
//			{
//				cout << mp2[i] ;
//				st[i] = true;
//
//				for (int j = 1; j <= n; j++)
//				{
//					if (!st[j] && find(i) == find(j))
//					{
//						cout << ", " << mp2[j] ;
//						st[j] = true;
//					}
//				}
//				
//				cout << endl;
//			}
//		}
//	}
//}