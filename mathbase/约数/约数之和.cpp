//#include<iostream>
//#include<map>
//#include<cmath>
//using namespace std;
//const int mod = 1e9 + 7;
//map<int, int>mp;
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		int t;
//		cin >> t;
//		for (int i = 2; i <= sqrt(t); i++)
//		{
//			while (t % i == 0)
//			{
//				t /= i;
//				mp[i]++;
//			}
//		}
//		if (t != 1)
//		{
//			mp[t]++;
//		}
//	}
//
//	long long res = 1;
//	for (auto p : mp)
//	{
//		int P = p.first;
//		int C = p.second;
//		long long ans = 1;
//		while (C--)
//		{
//			ans *= P;
//			ans += 1;
//			ans %= mod;
//		}
//		res *= ans;
//		res %= mod;
//	}
//	cout << res;
//}