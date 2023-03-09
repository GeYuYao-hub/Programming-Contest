//#include<iostream>
//using namespace std;
//const int N = 1e3;
//int g[N][N];
//bool st[N][N];
//int dx[4] = { 0,-1,0,1 }, dy[4] = { -1,0,1,0 };
//int dfs(int x, int y)
//{
//	st[x][y] = true;
//	int res = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int a = x + dx[i];
//		int b = y + dy[i];
//		if (st[a][b])
//		{
//			continue;
//		}
//		if (g[x][y]>>i&1)
//		{
//			continue;
//		}
//		res += dfs(a, b);
//	}
//	return res;
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//	int ans = 0;
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (!st[i][j])
//			{
//				ans++;
//				res=max(res,dfs(i, j));
//			}
//		}
//	}
//	cout << ans << endl << res;
//}