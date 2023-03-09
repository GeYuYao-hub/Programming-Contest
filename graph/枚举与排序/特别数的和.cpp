//#include<iostream>
//using namespace std;
//bool check(int x)
//{
//	while (x != 0)
//	{
//		int a = x % 10;
//		if (a == 2 || a == 0 || a == 1 || a == 9)
//		{
//			return true;
//		}
//		x /= 10;
//	}
//	return false;
//}
//int main()
//{
//	int n;
//	cin >> n;
//	long long res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (check(i))
//		{
//			res += i;
//		}
//	}
//	cout << res;
//}