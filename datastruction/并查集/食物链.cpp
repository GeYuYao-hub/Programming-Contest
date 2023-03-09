//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int fa[N];
//int d[N];
//int find(int x)
//{
//	if (fa[x] != x)
//	{
//		int u = find(fa[x]);
//		d[x] += d[fa[x]];
//		fa[x] = u;
//		return u;
//	}
//	else
//	{
//		return x;
//	}
//}
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		fa[i] = i;
//		d[i] = 0;
//	}
//	int res = 0;
//	while (k--)
//	{
//		int D, X, Y;
//		cin >> D >> X >> Y;
//		if (X > n || Y > n)
//		{
//			res++;
//			continue;
//		}
//		if (D == 1)// Õ¨¿‡ 
//		{
//			int px = find(X);
//			int py = find(Y);
//			if (px == py && (d[Y] - d[X]) % 3)
//			{
//				res++;
//				continue;
//			}
//			if (px != py)
//			{
//				fa[px] = py;
//				d[px] = d[Y] - d[X];
//
//			}
//		}
//		else { // X ≥‘ Y
//			int px = find(X);
//			int py = find(Y);
//			if ( X==Y || px == py &&( d[X]-d[Y]-1)%3!=0)
//			{
//				res++;
//				continue;
//			}
//			if(px!=py)
//			{
//				fa[px] = py;
//				d[px] = d[Y] - d[X] + 1;
//			}
//		}
//	}
//	cout << res << endl;
//}