//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cin >> n;
//	int a;
//	cin >> a;
//	int l = 0;
//	int r = 0;
//	for (int i = 1; i < n; i++)
//	{
//		int t;
//		cin >> t;
//		if (abs(t) < abs(a) && t > 0)
//		{
//			l++;
//		}
//		if (abs(t) > abs(a) && t < 0)
//		{
//			r++;
//		}
//	}
//	if ((l == 0 && a < 0) || (r == 0 && a > 0))
//	{
//		cout << 1 << endl;
//	}
//	else
//	{
//		cout << l + r + 1 << endl;
//	}
//}