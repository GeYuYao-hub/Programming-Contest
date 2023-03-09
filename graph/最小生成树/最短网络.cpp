//#include<iostream>
//#include<cstring>
//#include<queue>
//using namespace std;
//const int N = 1e3;
//int g[N][N];
//int st[N];
//int n;
//typedef pair<int, int>PII;
//int res = 0;
//
//int prim()
//{
//	priority_queue<PII, vector<PII>, greater<PII>>q;
//	q.push({0,1});
//
//	while (!q.empty())
//	{
//		PII t = q.top();
//		q.pop();
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
//		for (int i = 1; i <= n; i++)
//		{
//			if (i != pos)
//			{
//				q.push({g[pos][i],i});
//			}
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	memset(g, 0x3f, sizeof g);
//	cin >> n;
//	for (int i = 1; i <= n; i ++ )
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//
//	cout<<prim();
//}