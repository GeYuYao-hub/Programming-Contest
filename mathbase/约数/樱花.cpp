//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10, mod = 1e9 + 7;
//typedef long long LL;
//int primes[N];
//int cnt = 0;
//bool st[N];
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
//int main()
//{
//	int n;
//	cin >> n;
//	get_primes();
//	int res = 1;
//	for (int i = 0; i < cnt; i++)
//	{
//		int t = n;
//		int p = primes[i];
//		int s = 0;
//		while (t)
//		{
//			s += t / p;
//			t /= p;
//		}
//		res = (LL)res * (2 * s + 1) % mod;
//	}
//	cout << res;
//
//}