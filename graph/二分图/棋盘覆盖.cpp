//#include<iostream>
//#include<cstring>
//using namespace std;
//int res;
//typedef pair<int, int>PII;
//const int N = 1e3;
//int n, t;
//bool g[N][N];
//bool st[N][N];
//PII match[N][N];
//int dx[4] = {1,-1,0,0};
//int dy[4] = {0,0,1,-1};
//bool find(int x,int y) {
//	
//	for (int i = 0; i < 4; i++)
//	{
//		int X = dx[i] + x;
//		int Y = dy[i] + y;
//		if (st[X][Y] || g[X][Y])
//		{
//			continue;
//		}
//		if (X<1 || X>n || Y<1 || Y>n)
//		{
//			continue;
//		}		
//		st[X][Y] = true;
//		if (match[X][Y].first==0 || find(match[X][Y].first, match[X][Y].second))
//		{
//			match[X][Y] = {x,y};
//			return true;
//		}
//	}
//	return false;
//}
//int main()
//{
//	cin >> n >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int x, y;
//		cin >> x >> y;
//		g[x][y] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if ((i + j) % 2 && !g[i][j])
//			{
//				memset(st, false, sizeof st);
//				if (find(i, j))
//				{
//					res++;
//				}
//			}
//		}
//	}
//	cout << res;
//}