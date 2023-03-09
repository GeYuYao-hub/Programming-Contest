//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int dp[N]; // dp 表示以a[i]为结尾的最大上升字符串的长度
//int a[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		dp[i] = 1;
//		for (int j = 0; j < i; j++)
//		{
//			if (a[j] < a[i])
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		res = max(res, dp[i]);
//	}
//	cout << res;
//}