//#include<iostream>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 2e5+10;
//int primes[N];
//bool st[N];
//int cnt = 0;
//
//void get_primes()
//{
//	for (int i = 2; i < N; i++)
//	{
//		if (!st[i])
//		{
//			primes[cnt++] = i;
//		}
//		for (int j = 0; primes[j] * i < N; j++)
//		{
//			st[primes[j] * i] = true;
//			if (i % primes[j] == 0)
//			{
//				break;
//			}
//		}
//	}
//}
//
//
//PII factor[N];
//int a, b, c, d;
//int fcnt = 0;
//void get_factor()
//{
//	for (int i = 0; primes[i] <= d / primes[i]; i++)
//	{
//		if (d % primes[i] == 0)
//		{
//			int t = 0;
//			while (d % primes[i] == 0)
//			{
//				t++;
//				d /= primes[i];
//			}
//			factor[fcnt++] = { primes[i],t };
//		}
//	}
//	if (d > 1)
//	{
//		factor[fcnt++] = { d,1 };
//	}
//}
//
//int divide[N];
//int dcnt = 0;
//void dfs(int u, int p)
//{
//	if (u == fcnt)
//	{
//		divide[dcnt++] = p;
//		return;
//	}
//	for (int i = 0; i <= factor[u].second; i++)
//	{
//		dfs(u + 1, p);
//		p *= factor[u].first;
//	}
//}
//
//int gcd(int a, int b)
//{
//	return b ? gcd(b,a% b) : a;
//}
//
//int main()
//{
//	get_primes();
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		fcnt = 0;
//		dcnt = 0;
//		cin >> a >> b >> c >> d;
//		int t = d;
//		get_factor();
//		dfs(0,1);
//		int ans = 0;
//		for (int i = 0; i < dcnt; i++)
//		{
//			if (gcd(divide[i], a) == b && (long long)divide[i] * c / gcd(divide[i], c) == t)
//			{
//				ans++;
//			}
//		}
//		cout << ans << endl;
//	}
//}