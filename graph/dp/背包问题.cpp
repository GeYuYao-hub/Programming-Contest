//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int dp[N];
//int w[N], v[N];
//int main()
//{
//	int n, V;
//	cin >> n >> V;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i] >> w[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = V; j >= v[i]; j--)
//		{
//			dp[j] = max(dp[j] ,dp[j - v[i]] + w[i]);
//		}
//	}
//	cout << dp[V];
//}