//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int a[N], b[N];
//int main()
//{
//	int n,m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> b[i];
//	}
//	int l = 1;
//	int r = 1;
//	int A = a[1];
//	int B = b[1];
//	int res = 0;
//	while (l <= n && r <= m)
//	{
//		if (A == B)
//		{
//			res++;
//			l++;
//			r++;
//			A = a[l];
//			B = b[r];
//		}
//		else if (A < B)
//		{
//			l++;
//			A += a[l];
//		}
//		else if (A > B)
//		{
//			r++;
//			B += b[r];
//		}
//	}
//	cout << res;
//}