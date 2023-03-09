//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int in = 0x3f3f3f3f;
//		int ax = -1;
//		for (int j = i; j < n; j++)
//		{
//			in = min(in, a[j]);
//			ax = max(ax, a[j]);
//			if (ax - in == j - i)
//			{
//				res++;
//			}
//			
//		}
//	}
//	cout << res;
//}