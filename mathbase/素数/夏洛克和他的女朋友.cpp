//#include<iostream>
//using namespace std;
//const int N = 1e5 + 10;
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
//	get_primes();
//	cin >> n;
//
//	if (n <= 2)
//	{
//		cout << "1" << endl;
//	}
//	else
//	{
//		cout << "2" << endl;
//	}
//
//	for (int i = 2; i <= n + 1; i++)
//	{
//		if (!st[i])
//		{
//			cout << 1 << ' ';
//		}
//		else
//		{
//			cout << 2 << ' ';
//		}
//	}
//}