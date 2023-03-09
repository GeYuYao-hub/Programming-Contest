//#include<iostream>
//using namespace std;
//
//typedef pair<int, int>PII;
//const int N = 1e3 + 10;
//int n, m;
//PII q[100010];
//int tt = -1, hh = 0;
//char g[N][N];
//int r[N][N];
//int dx[] = { -2, -1, 1, 2, 2, 1, -1, -2 };
//int dy[] = { 1, 2, 2, 1, -1, -2, -2, -1 };
//PII e;
//PII s;
//
//void BFS(int x, int y)
//{
//	q[++tt] = { x,y };
//	while (hh <= tt)
//	{
//		PII t = q[hh++];
//		int x = t.first;
//		int y = t.second;
//		for (int i = 0; i < 8; i++)
//		{
//			int a = x + dx[i];
//			int b = y + dy[i];
//			if (g[a][b]=='*')
//			{
//				continue;
//			}
//
//			if (a < 0 || a >= n || b < 0 || b >= m) continue;
//
//			if (r[a][b] != 0)
//			{
//				continue;
//			}
//
//			q[++tt] = {a,b};
//			r[a][b] = r[x][y] + 1;
//
//			if (a == e.first && b == e.second)
//			{
//				cout << r[a][b] << endl;
//				return;
//			}
//		}
//	}
//}
//int main()
//{
//	cin >> m >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> g[i][j];
//			if (g[i][j] == 'H')
//			{
//				s = { i,j };
//			}
//			if (g[i][j] == 'K')
//			{
//				e = { i,j };
//			}
//		}
//	}
//
//	BFS(s.first, s.second);
//
//}