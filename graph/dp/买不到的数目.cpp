
// 数学方法

//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//    int p, q;
//    cin >> p >> q;
//    cout << (p - 1) * (q - 1) - 1 << endl;
//
//    return 0;
//}

//#include<iostream>
//using namespace std;
//const int N = 1e6 + 10;
//bool r[N];
//int main()
//{
//	int a, b;
//	cin >> a >> b;
//	if (b < a)
//	{
//		swap(a, b);
//	}
//	r[0] = true;
//	int res = 0;
//	for (int i = a; i < N; i++)
//	{
//		r[i] = 1 & r[i - a];
//		if (i >= b)
//		{
//			r[i] = (r[i - b] & 1) || r[i];
//		}
//		if (!r[i])
//		{
//			res = i;
//		}
//	}
//	cout << res;
//}