//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int fa[N];
//int n, m;
//int res = 0;
//struct Node
//{
//	int a, b, c;
//};
//bool fun(Node a, Node b) {
//	if (a.c < b.c)
//	{
//		return true;
//	}
//	return false;
//}
//Node a[N];
//
//int find(int x)
//{
//	if (x != fa[x])
//	{
//		return fa[x] = find(fa[x]);
//	}
//	else
//	{
//		return x;
//	}
//}
//bool Kruskal()
//{
//	int cnt = 0;
//	for (int i = 0; i < m; i++)
//	{
//		int A = a[i].a, B = a[i].b, C = a[i].c;
//		if (find(A) != find(B))
//		{
//			fa[find(A)] = find(B);
//			res += C;
//			cnt++;
//		}
//	}
//	if (cnt == n-1)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	for (int i = 0; i < m; i++)
//	{
//		Node t;
//		cin >> t.a >> t.b >> t.c;
//		a[i] = t;
//	}
//	sort(a, a + m, fun);
//	if (Kruskal())
//	{
//		cout << res << endl;
//	}
//	else
//	{
//		cout << "impossible" << endl;
//	}
//}