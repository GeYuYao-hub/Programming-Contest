//#include<iostream>
//using namespace std;
//const int N = 1e6+10;
//bool st[N];
//int cnt = 0;
//void get_primes(int n)
//{
//	st[1] = true;
//	for (int i = 2; i <= n; i++)
//	{
//		if (!st[i])
//		{
//			cnt++;
//			for (int j = i + i; j <= n; j += i)
//			{
//				st[j] = true;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	cin >> n;
//	get_primes(n);
//	cout << cnt << endl;
//}