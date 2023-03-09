//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e3 + 10;
//int g[N][N];
//int dp[N][N];
//void fun()
//{
//	memset(g, 0, sizeof g);
//	memset(dp, 0, sizeof dp);
//	int r, c;
//	cin >> r >> c;
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			cin >> g[i][j];
//		}
//	}
//	for (int i = 1; i <= r; i++)
//	{
//		for (int j = 1; j <= c; j++)
//		{
//			dp[i][j] = g[i][j] + max(dp[i-1][j],dp[i][j-1]);
//		}
//	}
//	cout << dp[r][c] << endl;
//}
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		fun();
//	}
//}