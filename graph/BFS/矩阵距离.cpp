//#include<iostream>
//using namespace std;
//const int N = 1e4;
//char g[N][N];
//int res[N][N];
//typedef pair<int, int>PII;
//int tt = -1, hh = 0;
//PII q[100000010];
//int n, m;
//int dx[4] = {0,0,1,-1}, dy[4] = {1,-1,0,0};
//
//void BFS()
//{
//	while (hh <= tt)
//	{
//		PII t = q[hh++];
//		int x = t.first;
//		int y = t.second;
//		for (int i = 0; i < 4; i++)
//		{
//			int a = x + dx[i];
//			int b = y + dy[i];
//
//			if (a < 0 || a >= n || b < 0 || b >= m)
//			{
//				continue;
//			}
//
//			if (res[a][b] != 0 || g[a][b]== '1')
//			{
//				continue;
//			}
//
//			res[a][b] = res[x][y] + 1;
//
//			q[++tt] = { a,b };
//		}
//	}
//}
//
//int main()
//{
//	
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> g[i][j];
//			if (g[i][j] == '1')
//			{
//				q[++tt] = { i,j };
//				res[i][j] = 0;
//			}
//		}
//	}
//
//	BFS();
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cout << res[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
