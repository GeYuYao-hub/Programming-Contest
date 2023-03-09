# Hankson的趣味题

---

有意思的一道题:
a,b,c,d
问有多少个x满足这样的条件：
x 与 a 的最大公约数是b	gcd(x,a) == b
x 与 c 的最小公倍数是d	$\frac{x \times c}{gcd(x,c)} $ == d

由于x是d的约数，故求所有d的约数，然后套上述公式进行一个个判定

那么如果才用传统的约数判定策略是会超时的，代码如下：

```c++
// div 用于存储d的所有约数
for(int i=1;i<=d;i++)
{
	if(d%i==0)
	{
		div.push_back(i);
		if(d/i!=i)
		{
			div.push_back(d/i);
		}
	}
}
```

那么如何进一步缩小范围呢？
可以采取 $ d = {p_1}^{c_1} \times {p_2}^{c_2 }...$的策略，得到所有的质数约数对 {p,c}之后再dfs得到所有的div，就可以保证此时枚举的数一定是d的约数了
```c++
void get_primes()
{
	for(int i=2;i<n;i++)
	{
		if(!st[i])
		{
			primes[cnt++]=i;
		}
		for(int j=0;primes[j] * i < n;j++)
		{
			st[primes[j] * i] = true;
			if(i%primes[j]==0)
			{
				break;
			}
		}
	}
}

void get_factor()
{
    for(int i=0;primes[i]<=d/primes[i];i++)
    {
        if(d%primes[i]==0)
        {
            int t=0;
            while(d%primes[i]==0)
            {
                t++;
                d/=primes[i];
            }
            factor[fcnt++]={primes[i],t};
        }
    }
    if(d!=0)
    {
    	factor[fcnt++]={d,1};
	}
}

// u 为遍历到哪一个factor，p为当前的约数为多大了
void dfs(int u,int p)
{
	if(u>fcnt)
	{
		divide[dcnt++]=p;
		return;
	}
	dfs(u+1,p);
	for(int i=1;i<factor[u].second;i++)
	{
		p*=factor[u].first;
		dfs(u+1,p);
	}
}
```