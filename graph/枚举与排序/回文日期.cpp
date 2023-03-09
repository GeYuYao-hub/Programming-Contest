//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int m[13] = { 0 ,31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 , 30 ,31 };
//
////判断一个日期是不是回文日期
//bool check(int num)
//{
//    string date = to_string(num);
//    for (int i = 0, j = 7; i < j; i++, j--)
//        if (date[i] != date[j]) return false;
//    return true;
//}
//
////第i天的后一天
//int newdate(int i)
//{
//    int year = i / 10000;
//    int mon = (i % 10000) / 100;
//    int day = i % 100;
//
//    //四年一润,百年不润,千年润
//    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) m[2] = 29;
//    else m[2] = 28;
//
//    day++;
//    if (day > m[mon])
//    {
//        mon++;
//        day = 1;
//    }
//    if (mon == 13)
//    {
//        mon = 1;
//        year++;
//    }
//
//    int date = year * 10000 + mon * 100 + day;
//
//    return date;
//}
//
//int main()
//{
//    int date1, date2;
//    cin >> date1 >> date2;
//
//    int ans = 0;
//    for (int i = date1; i <= date2;)
//    {
//        if (check(i)) ans++;
//        i = newdate(i);
//    }
//
//    cout << ans;
//
//    return 0;
//}