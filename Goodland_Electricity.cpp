/*
* AUTHOR: Ganesh S Kudva
* Test
*
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <set>
#include <map>

typedef long long int ull;

#define MEM(a, b, c, d) memset(a, (b), c * sizeof(d))
#define CLR(a) memset(a, 0, sizeof(a))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define ABS(X) ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X) ( (X) * (X) )
#define SZ(V) (int )V.size()
#define FORN(i, n) for(i = 0; i < n; i++)
#define FORAB(i, a, b) for(i = a; i <= b; i++)
#define ALL(V) V.begin(), V.end()

#if 0
typedef pair<int,int> PII;
typedef pair<double, double> PDD;
typedef vector<int> VI;
#endif

#define IN(A, B, C) assert( B <= A && A <= C)

using namespace std;

#define DEBUG 0

int main()
{
	ull t = 0,i,j, n, k, p, last, ans, take;
#if DEBUG 
	srand((unsigned)time(0));
	t = (rand()%10)+1; 
	cout <<t<<endl;
#else 
	cin >> n >> k;
#endif 

	ull prv[n];
	MEM(prv, 0, n, ull);
	last = -1;
	ans = 0;

	FORN(i, n)
	{
		cin >> p;
		if (p)
		{
			last = i;
		}

		prv[i] = last;
	}

	for(i = 0; i < n; )
	{	
		take = prv[min(i + k - 1, n - 1)];
		if ((take == -1) || (take + k <= i))
		{
			cout << "-1" << endl;
			return 0;
		}
		i = take + k;
		ans++;
	}
	cout << ans << endl;

	return 0;
		
}
