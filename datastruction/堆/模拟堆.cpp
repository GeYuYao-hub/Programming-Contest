//#include<iostream>
//#include<set>
//#define N 500010
//#define NN 5010
//#define NNN 510
//#define INF 0x3f3f3f3f
//#define pi 3.1415926535897932384626433
//typedef long long ll;
//const int mod = 1e9 + 7;
//
//using namespace std;
//
//int a[N], cnt = 0;
//
//int main()
//{
//    int n;
//    multiset<int> s;
//    cin >> n;
//    for (int i = 1; i <= n; i++)
//    {
//        string t;
//        int x, y;
//        cin >> t;
//        if (t == "I")
//        {
//            cin >> x;
//            s.insert(x);
//            a[++cnt] = x;
//        }
//        if (t == "PM") cout << *s.begin() << endl;
//        if (t == "DM") s.erase(s.find(*s.begin()));
//        if (t == "D")
//        {
//            cin >> x;
//            if (s.find(a[x]) != s.end()) s.erase(s.find(a[x]));
//        }
//        if (t == "C")
//        {
//            cin >> x >> y;
//            if (s.find(a[x]) != s.end()) s.erase(s.find(a[x]));
//            a[x] = y;
//            s.insert(y);
//        }
//    }
//    return 0;
//}
