//#include<iostream>
//#include<cstring>
//#include<string>
//#include<algorithm>
//using namespace std;
//char get(int t )
//{
//	if (t >= 0 && t <= 9)
//	{
//		return t + '0';
//	}
//	else
//	{
//		return t - 10 + 'A';
//	}
//}
//string base(int x, int B)
//{
//	string num = "";
//	while (x)
//	{
//		num += get(x % B);
//		x /= B;
//	}
//	reverse(num.begin(), num.end());
//	return num;
//}
////bool check(string t)
////{
////	int i = 0;
////	int j = t.size() - 1;
////	while (i != j)
////	{
////		if (t[i] == t[j])
////		{
////			continue;
////		}
////		else
////		{
////			return false;
////		}
////		i++;
////		j--;
////	}
////	return true;
////}
//bool check(string s)//检查s是否是回文
//{
//	for (int i = 0, j = s.size() - 1; i < j; i++, j--)
//		if (s[i] != s[j])
//			return false;
//	return true;
//}
//int main()
//{
//	int B;
//	cin >> B;
//	for (int i = 1; i <= 300; i++)
//	{
//		string num = base(i * i, B);
//		if (check(num))
//		{
//			cout << base(i,B) << ' ' << num << endl;
//		}
//	}
//}