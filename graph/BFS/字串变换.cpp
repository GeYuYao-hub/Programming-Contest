//#include<string>
//#include<cstring>
//#include<queue>
//#include<unordered_map>
//#include<iostream>
//using namespace std;
//const int N = 6;
//string A, B;
//string a[N], b[N];
//int n = 0;
//unordered_map<string, int>da,db;
//queue<string>qa, qb;
//int find(queue<string>& qa, string a[], string b[], unordered_map<string, int>& da, unordered_map<string, int>& db)
//{
//	int d = da[qa.front()];
//	while (!qa.empty() && d == da[qa.front()])
//	{
//		string t = qa.front();
//		qa.pop();
//
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < t.size(); j++)
//			{
//				if (t.substr(j, a[i].size() )== a[i])
//				{
//					string str = t.substr(0, j) + b[i] + t.substr(j+a[i].size());
//					if (db.count(str))
//					{
//						return db[str] + da[t] + 1;
//					}	
//					if (da.count(str))
//					{
//						continue;
//					}
//					da[str] = da[t] + 1;
//					qa.push(str);
//				}
//			}
//		}
//	}
//	return 11;
//}
//int bfs()
//{
//	if (A == B)
//	{
//		return 0;
//	}
//
//	qa.push(A);
//	qb.push(B);
//
//	da[A] = 0;
//	db[B] = 0;
//
//	int t = 0;
//	int step = 0;
//	while (!qa.empty() && !qb.empty())
//	{
//		if (qa.size() < qb.size())
//		{
//			t = find(qa, a, b, da, db);
//		}
//		else
//		{
//			t = find(qb, b, a, db, da);
//		}
//
//		if (t <= 10)
//		{
//			return t;
//		}
//
//		if (++step == 10)
//		{
//			return -1;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	cin >> A >> B;
//	while (cin >> a[n] >> b[n])
//	{
//		n++;
//	}
//	int t=bfs();
//	if (t == -1)
//	{
//		cout << "NO ANSWER!" << endl;
//	}
//	else
//	{
//		cout << t << endl;
//	}
//}