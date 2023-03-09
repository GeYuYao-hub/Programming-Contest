//#include<iostream>
//#include<cstring>
//#include<queue>
//
//using namespace std;
//
//typedef pair<int, int>PII;
//
//const int N = 1e3;
//int g[N][N];
//bool st[N];
//
//int n;
//
//int res = 0;
//
//int main()
//{
//	memset(g, 0x3f, sizeof g);
//	cin >> n;
//
//	for (int i = 0; i <= n; i++)
//	{
//		g[i][i] = 0;
//
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		int t;
//		cin >> t;
//		g[0][i] = g[i][0] = t;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//
//	q.push({0,0});
//
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
//
//		int pos = t.second;
//		int dis = t.first;
//
//		if (st[pos])
//		{
//			continue;
//		}
//		st[pos] = true;
//
//		res += dis;
//
//		for (int i = 0; i <= n; i++)
//		{
//			if (i!=pos && g[pos][i] != 0x3f3f3f3f)
//			{
//				q.push({g[pos][i],i});
//			}
//		}
//	}
//
//	cout << res;
//}