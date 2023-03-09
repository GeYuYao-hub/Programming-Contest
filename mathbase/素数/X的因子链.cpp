//#include<iostream>
//using namespace std;
//
//const int N = 1e6 + 10;
//
//int primes[N];
//bool st[N];
//int cnt = 0;
//int fcnt = 0;
//long long f[30];
//long long res = 0;
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
//int n;
//long long a = 0;
//long long b = 1;
//void get_f()
//{
//	a = 0;
//	b = 1;
//	for (int i = 0;  primes[i]<= n/primes[i]; i++)
//	{
//		if (n % primes[i] == 0)
//		{
//			int t = 0;
//			while (n%primes[i]==0)
//			{
//				n /= primes[i];
//				t++;
//				a++;
//			}
//			b *= f[t];
//		}
//	}
//	if (n > 1)
//	{
//		a++;
//		b *= 1;
//	}
//	res = f[a] / b;
//}
//int main()
//{
//	f[0] = 1;
//	for (int i = 1; i <= 20; i++)
//	{
//		f[i] = i * f[i - 1];
//	}
//	get_primes();
//	while (cin >> n)
//	{
//		get_f();
//		cout << a << ' ' << res << endl;
//	}
//}