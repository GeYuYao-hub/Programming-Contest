//#include<iostream>
//#include<cstring>
//using namespace std;
//
//const int N = 1e3+10;
//int n;
//typedef pair<int, int>PII;
//
//PII q[1000010];
//int tt = -1, hh = 0;
//int g[N][N];
//PII cf[N][N]; // 意思为 comefrom 本题为倒叙，意思是如果倒着走，那么这个点来自于哪里，可以得出结论，所有点最后都一定来自于[n-1][n-1]
//
//int dx[4] = { 0,0,1,-1 }, dy[4] = { 1,-1,0,0 };
//
//void BFS(int x, int y)
//{
//	PII F = { -1,-1 };
//	memset(cf, -1, sizeof cf);
//	q[++tt] = { x,y };
//
//	while (hh <= tt) {
//
//		PII t = q[hh++];
//
//		x = t.first;
//		y = t.second;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int a = x + dx[i];
//			int b = y + dy[i];
//			if (g[a][b] == 1)
//			{
//				continue;
//			}
//			if (cf[a][b]!=F)
//			{
//				continue;
//			}
//			if (a < 0 || a >= n || b < 0 || b >= n)
//			{
//				continue;
//			}
//
//			cf[a][b] = {x,y};
//
//			q[++tt] = {a,b};
//
//		}
//
//	}
//
//}
//
//int main()
//{
//	cin >> n;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//
//	BFS(n - 1, n - 1);
//
//	PII t = {0,0};
//
//	while (1) {
//
//		cout << t.first << ' ' << t.second << endl;
//
//		if (t.first == n - 1 && t.second == n - 1)
//		{
//			break;
//		}
//
//		t = cf[t.first][t.second];
//
//	}
//
//	return 0;
//
//}