//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//vector<int>a;
//vector<int>b;
//int main()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		char c;
//		cin >> c;
//		int t;
//		cin >> t;
//		if (c == 'T')
//		{
//			a.push_back(t);
//		}
//		else
//		{
//			b.push_back(t);
//		}
//	}
//
//	b.push_back(1000);
//	sort(a.begin(), a.end());
//	sort(b.begin(), b.end());
//
//	int i = 0;
//	int j = 0;
//	double t = 0;
//	double s = 0;
//	double v = 1;
//	while (i < a.size() || j < b.size())
//	{
//		if (j == b.size() || i < a.size() && (a[i] - t) < (b[j] - s) * v)
//		{
//			s += (a[i] - t) / v;
//			t = a[i];
//			v++;
//			i++;
//		}
//		else
//		{
//			t += (b[j] - s) * v;
//			s = b[j];
//			v++;
//			j++;
//		}
//	}
//	printf("%.0lf\n", t);
//	return 0;
//}