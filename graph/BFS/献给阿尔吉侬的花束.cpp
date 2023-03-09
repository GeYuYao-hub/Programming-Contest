//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<string>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e3;
//char g[N][N];
//bool st[N][N];
//int res[N][N];
//void solve()
//{
//	memset(st, false, sizeof st);
//	memset(res, 0, sizeof res);
//	int r, c;
//	cin >> r >> c;
//	PII s;
//	for (int i = 0; i < r; i++)
//	{
//		for (int j = 0; j < c; j++)
//		{
//			cin >> g[i][j];
//			if (g[i][j] == 'S')
//			{
//				s = { i,j };
//			}
//		}
//	}
//	queue<PII>q;
//	int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };
//	q.push(s);
//	st[s.first][s.second] = true;
//	res[s.first][s.second] = 0;
//	while (!q.empty())
//	{
//		PII t = q.front();
//		q.pop();
//
//		if (g[t.first][t.second] == 'E')
//		{
//			cout << res[t.first][t.second] << endl;
//			return;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int a = t.first + dx[i];
//			int b = t.second + dy[i];
//			if (a < 0 || a >= r || b < 0 || b >= c)
//			{
//				continue;
//			}
//			if (g[a][b] == '#')
//			{
//				continue;
//			}
//			if (st[a][b])
//			{
//				continue;
//			}
//			st[a][b] = true;
//			res[a][b] = res[t.first][t.second] + 1;
//
//			q.push({ a,b });
//		}
//	}
//	cout << "oop!" << endl;
//}
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//}