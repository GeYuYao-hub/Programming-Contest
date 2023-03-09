//#include<iostream>
//#include<cstring>
//#include<string>
//#include<cmath>
//using namespace std;
//const double INF = 1e20;
//typedef pair<int, int>PII;
//const int N = 200;
//double dist[N][N];
//PII q[N];
//string g[N];
//double maxd[N];
//
//double get_dis(PII a, PII b)
//{
//	double dx = a.first - b.first;
//	double dy = a.second - b.second;
//	return sqrt(dx * dx + dy * dy);
//}
//
//int main()
//{
//
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> q[i].first >> q[i].second;
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> g[i];
//	}
//	
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (i == j)
//			{
//				dist[i][j] = 0;
//			}
//			else
//			{
//				if (g[i][j] == '1')
//				{
//					dist[i][j] = get_dis(q[i], q[j]);
//				}
//				else
//				{
//					dist[i][j] = INF;
//				}
//			}
//		}
//	}
//
//	for (int k = 0; k < n; k++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				dist[i][j] = min(dist[i][k] + dist[k][j], dist[i][j]);
//			}
//		}
//	}
//
//	double res1 = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (dist[i][j]!=INF)
//				maxd[i] = max(maxd[i], dist[i][j]);
//		}
//		res1 = max(res1, maxd[i]);
//	}
//
//	double res2 = 0x3f3f3f3f;
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if  (dist[i][j] ==INF)
//			{
//				res2 = min(res2, get_dis(q[i], q[j] )+ maxd[i] + maxd[j]);
//			}
//		}
//	}
//
//
//	printf("%.6lf\n", max(res1, res2));
//
//}