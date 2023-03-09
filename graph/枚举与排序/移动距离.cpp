//#include <iostream>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int w, m, n;
//
//int main()
//{
//    cin >> w >> m >> n;
//    m--, n--; // 自减、方便操作
//
//    int x1 = n / w, x2 = m / w;     // 行号
//    int y1 = n % w, y2 = m % w;     // 列号
//    if (x1 % 2) y1 = w - 1 - y1;     // 判断奇数行
//    if (x2 % 2) y2 = w - 1 - y2;
//
//    cout << abs(x1 - x2) + abs(y1 - y2) << endl;    // 输出曼哈顿距离
//
//    return 0;
//}
