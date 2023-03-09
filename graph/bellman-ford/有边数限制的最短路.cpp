//#include<iostream>
//#include<cstring>
//using namespace std;
//int n, m, k;
//const int N = 1e6;
//int dist[N];
//int backup[N];
//struct Node
//{
//	int a, b, c;
//};
//Node a[N];
//bool BF()
//{
//	memset(dist, 0x3f, sizeof dist);
//	dist[1] = 0;
//	for (int i = 0; i < k; i++)
//	{
//		memcpy(backup, dist, sizeof dist);
//		for (int j = 0; j < m; j++)
//		{
//			int A = a[j].a;
//			int B = a[j].b;
//			int C = a[j].c;
//			dist[B] = min(dist[B], backup[A] + C);
//		}
//	}
//
//	if (dist[n] >= 0x3f3f3f3f / 2)
//	{
//		return false;
//	}
//	else
//	{
//		return true;
//	}
//}
//
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 0; i < m; i++)
//	{
//		Node t;
//		cin >> t.a >> t.b >> t.c;
//		a[i] = t;
//	}
//	if (BF())
//	{
//		cout << dist[n] << endl;
//	}
//	else
//	{
//		cout << "impossible" << endl;
//	}
//}