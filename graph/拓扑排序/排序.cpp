#include<iostream>
#include<cstring>
#include<string>	
#include<queue>
using namespace std;
const int N = 1e2;
int g[N][N];
int f[N][N];
int din[N];
int res[N];
int n, m;
bool st[N];
int cnt = 0;

int check()
{
	// 0表示尚未完成，1表示已完成，2表示有冲突
	for (int i = 0; i < n; i++)
	{
		if (f[i][i])
		{
			return 2;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (f[i][j] || f[j][i])
			{
				continue;
			}
			else
			{
				return 0;
			}
		}
	}

	return 1;
}

void floyd()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < n; k++)
			{
				if (f[j][i] && f[i][k]) f[j][k] = 1;
			}
		}
	}
}

void topsort()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}

			if (f[i][j])
			{
				din[j]++;
			}
		}
	}

	queue<int>q;

	for (int i = 0; i < n; i++)
	{
		if (din[i] == 0)
		{
			q.push(i);	
			st[i] = true;
		}
	}

	while (!q.empty())
	{
		int t = q.front();
		q.pop();

		res[cnt++] = t;

		for (int i = 0; i < n; i++)
		{
			if (f[t][i] && !st[i])
			{
				din[i]--;
				if (din[i] == 0 )
				{
					q.push(i);
					st[i] = true;
				}
			}
		}
	}
}

int main()
{
	while (cin >> n >> m && (n != 0 && m != 0))
	{
		int T = 0;
		int t = 0;
		bool find = false;
		bool shit = false;
		cnt = 0;

		memset(g, 0, sizeof g);
		memset(f, 0, sizeof f);
		memset(din, 0, sizeof din);
		memset(st, false, sizeof st);


		for (int i = 0; i < m; i++)
		{
			string c;
			cin >> c;
			int a = c[0] - 'A';
			int b = c[2] - 'A';

			if (find || shit)
			{
				continue;
			}

			g[a][b] = 1;

			memcpy(f, g, sizeof f);
			floyd();

			t = check();

			if (t == 2 || t==1)
			{
				
				if (t == 1)
				{
					topsort();
					T = i + 1;
					find = true;
				}

				if (t == 2)
				{
					T = i + 1;
					shit = true;
				}
			}

		
		}

		if (find)
		{
			cout << "Sorted sequence determined after " << T << " relations: ";
			for (int i =0; i <n; i++)
			{
				cout << char(res[i]+'A');
			}
			cout <<'.'<< endl;
			
		}
		else if (shit)
		{
			cout << "Inconsistency found after " << T << " relations." << endl;
		}
		else
		{
			cout << "Sorted sequence cannot be determined." << endl;
		}

	}
}