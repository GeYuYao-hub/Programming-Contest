//#include<iostream>
//#include<map>
//#include<cstring>
//using namespace std;
//const int N = 1e3;
//bool g[N][N];
//bool st[N][N];
//typedef pair<int, int>PII;
//PII match[N][N];
//int n, m, t;
//int dx[] = { 1,2,2,1,-1,-2,-2,-1 };
//int dy[] = { 2,1,-1,-2,-2,-1,1,2 };
//bool find(int x,int y)
//{
//	for (int i = 0; i < 8; i++)
//	{
//		int a = x + dx[i];
//		int b = y + dy[i];
//
//		if(a<1 || a>n || b<1 || b>m || g[a][b] ) continue;
//
//		if (st[a][b] || g[a][b])
//		{
//			continue;
//		}
//		st[a][b] = true;
//		if (match[a][b].first == 0 || find(match[a][b].first, match[a][b].second))
//		{
//			match[a][b] = {x,y};
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int res = 0;	
//	cin >> n >> m >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int a, b;
//		cin >> a >> b;
//		g[a][b] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if ((i+j)%2 && !g[i][j])
//			{
//				memset(st, false, sizeof st);
//				if (find(i,j))
//				{
//					res++;
//				}
//			}
//		}
//	}
//	cout << m * n - res - t;
//	return 0;
//}