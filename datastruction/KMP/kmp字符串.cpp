//#include<iostream>
//#include<string>
//using namespace std;
//const int N = 1e6;
//int ne[N];
//string p;
//string s;
//int n;
//int m;
//void get_ne()
//{
//	cin >> n;
//	cin >> p;
//	int i = 0;
//	int j = -1;
//	ne[0] = -1;
//	while (i < p.size()) {
//		if (j == -1 || p[i] == p[j]) {
//			i++;
//			j++;
//			ne[i] = j;
//		}
//		else {
//			j = ne[j];
//		}
//	}
//}
//void kmp()
//{
//	cin >> m;
//	cin >> s;
//	int i = 0;
//	int j = 0;
//	while (i < m && j < n) {
//		if (j == -1 || s[i]==p[j]) {
//			i++;
//			j++;
//			if (j == n) {
//				cout << i - j << ' ';//�������ÿ����ͬ������ַ��Ľű꣬���Ҽ������
//				j = ne[j];
//			}
//		}
//		else {
//			j = ne[j];
//		}
//	}
//}
//int main()
//{
//	get_ne();
//	kmp();
//}