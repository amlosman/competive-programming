/*
لا تقهر عبدا حتى لا يؤذيك دعاءه
*/
#include<bits/stdc++.h>
#include <stdlib.h>
#include<assert.h>
using namespace std;
#define PI 3.14159265359
#define OO 1e9
#define S second
#define F first
#define MP                  make_pair
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { -1, 1, 0, 0, 1, -1, 1, -1 };
#define sz(v) ( (int) (v.size()) )
#define all(v) v.begin(),v.end()
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
int n, m, c = 0;
int cnt;
bool valid(int i, int j)
{
	return i >= 0 && i < n&&j >= 0 && j<m;
}
int fix(int y) {
	if (y < 0) return m - 1;
	if (y >= m) return 0;
	return y;
}
void fast()
{
	std::ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
}
/*void itfunction_to_Calc_diver_from_1to_1000000()
{
long long div[1000001];
for (long long i = 1; i <= 1000000; i++)
{
for (int j = i; j <= 1000000; j += i)
div[j
}
}*/
int sumDigit(long long  x)
{
	int c = 0;
	while (x)
	{
		c += x % 10;
		x /= 10;
	}
	return c;
}
long long prod(long long  n)
{
	while (n >= 10)
	{
		long long  tp = 1;
		while (n)
		{
			int y = n % 10;
			if (y)
				tp *= y;
			n /= 10;
		}
		n = tp;
	}
	return n;
}
bool pr(long long x)
{
	for (long long i = 2; i*i <= x; i++)
	{
		if (x%i == 0)
			return 0;
	}
	return 1;
}
unsigned long long  x[100001], arr[1000001], a[100001];

int main(){
	fast();
	int n;
	cin >> n;
	arr[0] = 0; x[0] = 0; a[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		x[i] = arr[i];

	}
	sort(arr, arr + n + 1);
	for (int i = 1; i <= n; i++)
	{
		x[i] = x[i] + x[i - 1];
		a[i] = arr[i] + a[i - 1];
	}
	int m;
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		int s, w, z;
		cin >> s >> w >> z;
		if (s == 1)
			cout << x[z] - x[w - 1] << endl;
		else
			cout << a[z] - a[w - 1] << endl;
	}

}
