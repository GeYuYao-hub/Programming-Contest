///*
//2
//6
//8
//*/
//
//
//#include<iostream>
//#include<cmath>
//using namespace std;
//void solve()
//{
//	int t;
//	cin >> t;
//	for (int i = 2; i <= sqrt(t); i++)
//	{
//		if (t % i == 0)
//		{
//			int sum = 0;
//			while (t % i == 0)
//			{
//				t /= i;
//				sum++;
//			}
//			cout << i << ' ' << sum << endl;
//		}
//	}
//	if (t != 1)
//	{
//		cout << t << ' ' << 1 << endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	while (n--)
//	{
//		solve();
//	}
//}
//
