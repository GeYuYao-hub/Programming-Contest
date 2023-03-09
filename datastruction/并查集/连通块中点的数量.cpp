//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int fa[N];
//int Size[N];
//int find(int x)
//{
//	if (x == fa[x])
//	{
//		return x;
//	}
//	else
//	{
//		return fa[x]=find(fa[x]);
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
//	for (int i = 1; i <= n; i++)
//	{
//		Size[i] = 1;
//	}
//	while (m--)
//	{
//		char c;
//		cin >> c;
//		if(c=='C'){
//			int a, b;
//			cin >> a >> b;
//			int px = find(a);
//			int py = find(b);
//			if (px!=py) {
//				fa[px] = py;
//				Size[py] += Size[px];
//			}
//		}
//		else
//		{
//			int a;
//			cin >> a;
//			if (a == 1)
//			{
//				int a, b;
//				cin >> a >> b;
//				if (find(a) == find(b))
//				{
//					cout << "Yes" << endl;
//				}
//				else
//				{
//					cout << "No" << endl;
//				}
//			}
//			else
//			{
//				int a;
//				cin >> a;
//				cout << Size[find(a)] << endl;
//			}
//		}
//	}
//}