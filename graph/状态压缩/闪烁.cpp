//#include<iostream>
//#include<cstring>
//using namespace std;
//const int N = 1e6;
//int p[N];
//long long n, b;
//int update(int x)
//{
//	int res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int j = (i + n - 1) % n;
//		int a = x >> i & 1;
//		int b = x >> j & 1;
//		res += (a ^ b) << i;
//	}
//	return res;
//}
//void print(int x)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << (x >> i & 1 )<< endl;
//	}
//}
//int main()
//{
//	cin >> n >> b;
//	int state = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int x;
//		cin >> x;
//		state += x << i;
//	}
//	memset(p, -1, sizeof p);
//	p[state] = 0;
//	for (int i = 1; ; i++)
//	{
//		state = update(state);
//		if (i == b)
//		{
//			print(state);
//			break;
//		}
//		else if (p[state] != -1)
//		{
//			int len = i - p[state];
//			int r = ( b - i ) % len;
//			while (r--)
//			{
//				state=update(state);
//			}
//			print(state);
//			break;
//		}
//		else
//		{
//			p[state] = i;
//		}
//	}
//}