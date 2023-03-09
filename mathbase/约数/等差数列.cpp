//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int a[N];
//int b[N];
//int gcd(int a, int b)
//{
//	return b ? gcd(b, a % b) : a;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + n);
//	for (int i = 1; i < n; i++)
//	{
//		b[i] = a[i] - a[i - 1];
//	}
//	for (int i = 1; i < n - 1 ; i++)
//	{
//		b[i + 1] = gcd(b[i], b[i + 1]);
//	}
//	int d = b[n - 1];
//	if (d == 0)
//	{
//		cout << n;
//		return 0;
//	}
//	cout << (a[n - 1] - a[0]) / d + 1;
//}