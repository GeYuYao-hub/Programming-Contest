//#include<iostream>
//#include<queue>
//#include<cstring>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//string target;
//
//void bfs()
//{
//    string s = "12345678";
//    unordered_map<string, int> st1; // 记录每个状态需要的步数
//    unordered_map<string, string> st2; // 记录到达每个状态需要的操作
//    st1[s] = 1, st2[s] = ""; // 初始状态的步数为1，结果要减一
//    queue<string> q;
//    q.push(s);
//    while (q.size())
//    {
//        string t = q.front();
//        q.pop();
//        if (t == target)
//        {
//            cout << st1[t] - 1 << endl << st2[t] << endl;
//        }
//        // A
//        string _t = t;
//        reverse(_t.begin(), _t.end());
//        // cout << 'A' << endl << _t << endl;
//        if (!st1[_t])
//        {
//            st1[_t] = st1[t] + 1;
//            st2[_t] = st2[t] + 'A';
//            q.push(_t);
//        }
//        // B
//        _t = "";
//        _t += t[3], _t += t[0], _t += t[1], _t += t[2], _t += t[5], _t += t[6], _t += t[7], _t += t[4];
//        // cout << 'B' << endl << _t << endl;
//        if (!st1[_t])
//        {
//            st1[_t] = st1[t] + 1;
//            st2[_t] = st2[t] + 'B';
//            q.push(_t);
//        }
//        // C
//        _t = "";
//        _t += t[0], _t += t[6], _t += t[1], _t += t[3], _t += t[4], _t += t[2], _t += t[5], _t += t[7];
//        // cout << 'C' << endl << _t << endl;
//        if (!st1[_t])
//        {
//            st1[_t] = st1[t] + 1;
//            st2[_t] = st2[t] + 'C';
//            q.push(_t);
//        }
//    }
//}
//
//int main()
//{
//    ios::sync_with_stdio(false);
//    cout.tie(NULL);
//
//    for (int i = 0; i < 8; i++)
//    {
//        char c;
//        cin >> c;
//        target.push_back(c);
//    }
//
//    if (target == "12345678") cout << "0\n";
//    else bfs();
//
//    return 0;
//}
