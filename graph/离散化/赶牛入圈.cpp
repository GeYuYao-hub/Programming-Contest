#include<iostream>
#include<cstring>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
const int N = 1e3  + 10;
int pre[N][N];
typedef pair<int, int>PII;
vector<int>num;
vector<PII>points;
int find(int x)
{
	return lower_bound(num.begin(), num.end(), x) - num.begin();
}
int c, n;
bool check(int len)
{
	for (int x1 = 1, x2 = 1; x2 < num.size(); x2++) {
		while (num[x2] - num[x1] + 1 > len) x1++;
		for (int y1 = 1, y2 = 1; y2 < num.size(); y2++) {
			while (num[y2] - num[y1] + 1 > len) y1++;
			if (pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] >= c) return true;
			//因为包括边界，所以左上角坐标需要-1
		}
	}
	return false;
}

int main()
{
	cin >> c >> n;
	num.push_back(0);
	for (int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		num.push_back(x);
		num.push_back(y);
		points.push_back({ x,y });
	}
	sort(num.begin(), num.end());
	num.erase(unique(num.begin(), num.end()),num.end());
	for (auto p : points)
	{
		int x = find(p.first);
		int y = find(p.second);
		pre[x][y]++;
	}
	for (int i = 1; i < num.size(); i++)
	{
		for (int j = 1; j < num.size(); j++)
		{
			pre[i][j] += pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1];
		}
	}

	int l = 1;
	int r = 1e5;
	while (l < r)
	{
		int mid = (l + r) >> 1;
		if (check(mid))
		{
			r = mid;
		}
		else
		{
			l = mid + 1;
		}
	}
	cout << l << endl;
}