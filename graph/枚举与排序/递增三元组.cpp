////#include<iostream>
////#include<algorithm>
////using namespace std;
////const int N = 1e6;
////int a[N], b[N], c[N];
////int main()
////{
////	int n;
////	cin >> n;
////	for (int i = 0; i < n; i++)
////	{
////		cin >> a[i];
////	}
////	for (int i = 0; i < n; i++)
////	{
////		cin >> b[i];
////	}
////	for (int i = 0; i < n; i++)
////	{
////		cin >> c[i];
////	}
////	sort(a, a + n);
////	sort(b, b + n);
////	sort(c, c + n);
////	int res = 0;
////	for (int i = 0; i < n; i++)
////	{
////		int pos_b=upper_bound(b, b + n, a[i]) - b;
////		for(pos_b;pos_b<n;pos_b++)
////		{
////			int B = b[pos_b];
////			int pos_c = upper_bound(c, c + n, B) - c;
////			if (pos_c == n)
////			{
////				break;
////			}
////			int C = c[pos_c];
////			res += n - pos_c;
////		}
////	}
////	cout << res;
////}
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int a[N], b[N], c[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> b[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cin >> c[i];
//	}
//	sort(a, a + n);
//	sort(b, b + n);
//	sort(c, c + n);
//	long long res = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int B = b[i];
//		int l = 0;
//		int r = n - 1;
//		while (l < r)
//		{
//			int mid = (l + r + 1) >> 1;
//			if (a[mid] < B)
//			{
//				l = mid;
//			}
//			else
//			{
//				r = mid - 1;
//			}
//		}
//		int pos_a = l;
//		int A = a[l];
//
//		int pos_c = upper_bound(c, c + n, B) - c;
//
//		if (pos_c >= n)
//		{
//			continue;
//		}
//		int C = c[pos_c];
//		if (A >= B || C <= B)
//		{
//			continue;
//		}
//		res += (long long)(pos_a+1) * (long long)(n-pos_c);
//	}
//	cout << res;
//}