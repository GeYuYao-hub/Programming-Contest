//#include<iostream>
//#include<algorithm>
//using namespace std;
//typedef pair<int, int>PII;
//const int N = 1e6;
//PII a[N];
//int pre_max[N];
//int pos_min[N];
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i].first >> a[i].second;
//	}
//	sort(a + 1, a + n + 1);
//	pre_max[0] = -1e8;
//	pos_min[n+1] = 1e8;
//	for (int i = 1; i <= n; i++)
//	{
//		pre_max[i] = max(pre_max[i-1], a[i].second);
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		pos_min[i] = min(pos_min[i + 1], a[i].second);
//	}
//	int res = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i].second >= pre_max[i] && a[i].second <= pos_min[i])
//		{
//			res++;
//		}
//	}
//	cout << res << endl;
//}
