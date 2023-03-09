//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int fa[N];
//int find(int a)
//{
//	if (fa[a] != a)
//	{
//		return fa[a] = find(fa[a]);
//	}
//	else
//	{
//		return a;
//	}
//}
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//	}
//	while (m--)
//	{
//		char c;
//		cin >> c;
//		int a, b;
//		cin >> a >> b;
//		if (c == 'M')
//		{
//			fa[find(a)] = find(b);
//		}
//		if (c == 'Q')
//		{
//			if (find(a) == find(b))
//			{
//				cout << "Yes" << endl;
//			}
//			else
//			{
//				cout << "No" << endl;
//			}
//		}
//	}
//}