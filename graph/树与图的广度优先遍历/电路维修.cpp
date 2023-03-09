//#include<iostream>
//#include<deque>
//#include<cstring>
//using namespace std;
//const int N = 1e3;
//typedef pair<int, int>PII;
//char g[N][N];
//int res[N][N];
//bool st[N][N];
//int n, m;
//int dx[4] = { -1 , -1 , 1 , 1 }, dy[4] = { -1 , 1 , 1 , -1 };//一个点可以到的四个点偏移量
//int ix[4] = { -1 , -1 , 0 , 0 }, iy[4] = { -1 , 0 , 0 , -1 };//一个点周围的四个方格坐标偏移量
//
//char r[5] = "\\/\\/";//一个点可以到周围四个点的对角线
//
//int BFS()
//{
//	memset(st, 0, sizeof st);
//	memset(res, 0x3f, sizeof res);
//	deque<PII>q;
//	q.push_back({ 0,0 });
//	res[0][0] = 0;
//	while (!q.empty())
//	{
//		auto t = q.front();
//		q.pop_front();
//
//		int x = t.first;
//		int y = t.second;
//
//		if (st[x][y])
//		{
//			continue;
//		}
//		
//		st[x][y] = true;
//
//		for (int i = 0; i < 4; i++)
//		{
//			int a = x + dx[i];
//			int b = y + dy[i];
//			if (a<0 || a>n || b<0 || b>m)
//			{
//				continue;
//			}
//
//			int ga = x + ix[i];
//			int gb = y + iy[i];
//
//			if (g[ga][gb] == r[i])
//			{
//				if (res[a][b] <= res[x][y])
//				{
//					continue;
//				}
//				else
//				{
//					res[a][b] = res[x][y];
//					q.push_front({ a, b });
//				}
//				
//			}
//			else
//			{
//				if (res[a][b] <= res[x][y] + 1)
//				{
//					continue;
//				}
//				else
//				{
//					res[a][b] = res[x][y] + 1;
//					q.push_back({ a, b });
//				}
//			}
//			
//		}
//
//
//	}
//
//	return res[n][m];
//}
//int main()
//{
//	int nn;
//	cin >> nn;
//	while (nn--)
//	{
//		cin >> n >> m;
//		for (int i = 0; i < n; i++)
//		{
//			cin >> g[i];
//		}
//
//		if ((n + m) & 1)
//		{
//			cout << "NO SOLUTION" << endl;
//		}
//		else
//		{
//			cout << BFS() << endl;
//		}
//	}
//}