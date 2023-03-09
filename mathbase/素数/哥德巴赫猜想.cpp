//#include<iostream>
//using namespace std;
//const int N = 1e6+10;
//bool st[N];
//int primes[N];
//int cnt = 0;
//void get_primes()
//{
//	for (int i = 2; i < N; i++)
//	{
//		if (!st[i])
//		{
//			primes[cnt++] = i;
//		}
//		for (int j = 0; i * primes[j] < N; j++)
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
//	get_primes();
//	int t;
//	while (cin >> t)
//	{
//		if (t == 0)
//		{
//			return 0;
//		}
//
//		for (int i = 0; i < cnt; i++)
//		{
//			if (!st[t - primes[i]])
//			{
//				cout << t << " = " << primes[i] << " + " << t - primes[i] << endl;
//				break;
//			}
//		}
//	}
//}