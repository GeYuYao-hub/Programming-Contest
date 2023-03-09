//#include<iostream>
//#include<algorithm>
//using namespace std;
//const int N = 1e6;
//int n, d, k;
//typedef pair<int, int>PII;
//PII a[N];
//int cnt[N];
//int res[N];
//int main()
//{
//	cin >> n >> d >> k;
//	for (int i = 0; i < n; i++)
//	{
//		int ts, id;
//		cin >> ts >> id;
//		a[i] = {ts,id};
//	}
//	sort(a, a + n);
//	int j = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int pos = a[i].second;
//		cnt[pos]++;
//		while (a[i].first - a[j].first>=d)
//		{
//			cnt[a[j].second]--;
//			j++;
//		}
//
//		if (cnt[pos] >= k)
//		{
//			res[pos]++;
//		}
//	}
//	for (int i = 0; i <= 1e5; i++)
//	{
//		if (res[i])
//		{
//			cout << i << endl;
//		}
//	}
//}