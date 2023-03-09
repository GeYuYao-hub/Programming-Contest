//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//bool st[N];
//int primes[N];
//int cnt = 0;
//void get_primes(int n)
//{
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			primes[cnt++] = i;
//		}
//		for (int j = 0; primes[j] * i <= n; j++)
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
//	memset(st, false, sizeof(st));
//	int n;
//	cin >> n;
//	get_primes(n);
//	cout << cnt << endl;
//}