//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int res = -1;
//int arr[N];
//int st[N];
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> arr[i];
//	}
//	int l = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i - l > k)
//		{
//			st[arr[l]]--;
//			l++;
//		}
//		st[arr[i]]++;
//		if (st[arr[i]] > 1)
//		{
//			res = max(res,arr[i]);
//		}
//	}
//	cout << res;
//}