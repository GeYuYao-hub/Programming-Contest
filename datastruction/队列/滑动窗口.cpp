//#include<iostream>
//using namespace std;
//const int N = 1e6;
//int q[N];
//int a[N];
//int hh, tt = -1;
//int main()
//{
//	int n,k;
//	cin >> n>>k;
//	for (int i = 0; i < n; i++)
//	{	
//		cin >> a[i];
//		if (i - k + 1 > q[hh])
//		{
//			hh++;
//		}
//		while(hh <= tt && a[q[tt]] >= a[i])
//		{
//			tt--;
//		}
//		q[++tt] =i;
//		if (i +1>= k)
//		{
//			cout << a[q[hh]]<<' ';
//		}
//	}
//	cout << endl;
//	tt = -1;
//	hh = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (hh<=tt && i - k + 1 > q[hh])
//		{
//			hh++;
//		}
//		while (hh <= tt && a[q[tt]] <= a[i])
//		{
//			tt--;
//		}
//		q[++tt] =i;
//
//		if (i+1 >= k)
//		{
//			cout << a[q[hh]] << ' ';
//		}
//	}
//}