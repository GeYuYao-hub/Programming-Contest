//#include<iostream>
//#include<map>
//#include<unordered_map>
//#include<string>
//using namespace std;
//const int N = 1e6;
//int tt1 = 0;
//int tt2 = 0;
//int stk[N];
//char op[N];
//
//void eval() {
//	int b = stk[tt1]; tt1--;
//	int a = stk[tt1]; tt1--;
//	char c = op[tt2]; tt2--;
//	int x;
//
//	if (c == '+')x = a + b;
//	else if (c == '-')x = a - b;
//	else if (c == '*')x = a * b;
//	else x = a / b;
//
//	stk[++tt1] = x;
//}
//
//int	main()
//{
//	unordered_map<char, int>pr{ { '+', 1 }, { '-',1 }, { '*',2 }, { '/',2 }};
//	string str;
//	cin >> str;
//	for (int i = 0; i < str.size(); i++)
//	{
//		char t = str[i];
//		if (isdigit(t))
//		{
//			int j = 0;
//			int ans = 0;
//			for (j = i; j < str.size(); j++)
//			{
//				if (isdigit(str[j])) {
//					ans = ans * 10 + (str[j]-'0');
//				}
//				else
//				{
//					break;
//				}
//			}
//			stk[++tt1] = ans;
//			i = j - 1;
//			continue;
//		}
//		if (t == '(')
//		{
//			op[++tt2] = t;
//			continue;
//		}
//		if (t == ')')
//		{
//			while (op[tt2] != '(')
//			{
//				eval();
//			}
//			tt2--;
//			continue;
//		}
//
//		while (tt2 > 0 && op[tt2]!='(' && pr[op[tt2]] >= pr[t])
//		{
//			eval();
//		}
//		op[++tt2] = t;
//	}
//	while (tt2 > 0)
//	{
//		eval();
//	}
//	cout << stk[tt1] << endl;
//}