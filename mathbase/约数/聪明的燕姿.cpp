//#include<iostream>
//#include<cstring>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//const int N = 1e6, mod = 1e9 + 7;
//typedef long long LL;
//int primes[N];
//int cnt = 0;
//bool st[N];
//int s;
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
//bool is_prime(int x)
//{
//	if (x < N)
//	{
//		return !st[x];
//	}
//	for (int i = 0; primes[i] <= x / primes[i]; i++) 
//	{
//		if (x % primes[i] == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//int len = 0;
//int res[N];
//
//void dfs(int u,int prod,int v)
//{
//	if (v == 1)
//	{
//		res[len++] = prod;
//		return;
//	}
//
//
//	if (v - 1 > ((u < 0) ? 0 : primes[u]) && is_prime(v - 1))
//	{
//		res[len++] = prod * (v - 1);
//	}
//
//	for (int i = u + 1; primes[i] <= v / primes[i] ; i++)
//	{
//		int p = primes[i];
//		for (int t = p + 1, k = p;t <= s; k *= p, t += k)
//		{
//			if (v % t == 0)
//			{
//				dfs(i, prod * k, v / t);
//			}
//		}
//	}
//}
//
//int main()
//{
//	get_primes();
//
//	while (cin >> s)
//	{
//		len = 0;
//		dfs(-1, 1, s);
//		sort(res, res + len);
//
//		cout << len << endl;
//		if (len)
//		{
//			sort(res, res + len);
//			for (int i = 0; i < len; i++) cout << res[i] << ' ';
//			cout << endl;
//		}
//	}
//}