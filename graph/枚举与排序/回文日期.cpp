//#include<iostream>
//#include<cstring>
//using namespace std;
//
//int m[13] = { 0 ,31 ,28 ,31 ,30 ,31 ,30 ,31 ,31 ,30 ,31 , 30 ,31 };
//
////�ж�һ�������ǲ��ǻ�������
//bool check(int num)
//{
//    string date = to_string(num);
//    for (int i = 0, j = 7; i < j; i++, j--)
//        if (date[i] != date[j]) return false;
//    return true;
//}
//
////��i��ĺ�һ��
//int newdate(int i)
//{
//    int year = i / 10000;
//    int mon = (i % 10000) / 100;
//    int day = i % 100;
//
//    //����һ��,���겻��,ǧ����
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