
// ³¬Ê±

//#include<iostream>
//#include<cmath>
//using namespace std;
//const int N = 1e6 + 10;
//int res[N];
//void solve(int x)
//{
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//		{
//			int t = 0;
//			while (x % i == 0)
//			{
//				x /= i;
//				t++;
//			}
//			res[i] += t;
//		}
//	}
//	if (x != 1)
//	{
//		res[x] += 1;
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 2; i <= n; i++)
//	{
//		solve(i);
//	}
//	for (int i = 2; i < N; i++)
//	{
//		if (res[i] != 0)
//		{
//			cout << i << ' ' << res[i] << endl;
//		}
//	}
//}

// AC

//#include<iostream>
//using  namespace std;
//const int N = 1e6 + 10;
//int primes[N];
//bool st[N];
//int cnt = 0;
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
//			if (i % primes[j]==0)
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
//
//	get_primes();
//
//	for (int i = 0; i < cnt; i++)
//	{
//		if (primes[i] > n)
//		{
//			break;
//		}
//		int t = n;
//		int p = 0;
//		while (t)
//		{
//			p += t / primes[i];
//			t /= primes[i];
//		}
//		cout << primes[i] << ' ' << p << endl;
//	}
//}


