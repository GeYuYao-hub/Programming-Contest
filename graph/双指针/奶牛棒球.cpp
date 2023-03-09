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
//	sort(a, a + n);
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = i + 1; j < n; j++)
//		{
//			int l = lower_bound(a, a + n, 2 * a[j] - a[i]) - a;
//			int r = upper_bound(a, a + n, 3 * a[j] - 2 * a[i]) - a;
//			res += r - l;
//		}
//	}
//	cout << res;
//}