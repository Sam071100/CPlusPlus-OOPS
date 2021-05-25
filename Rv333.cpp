#include <bits/stdc++.h>
using namespace std;
#define int         long long int
#define rep(i,a,b)  for (int i = a; i < b; ++i)
#define rrep(i,z,a) for (int i = z; i >= a; --i)
#define rep0(n)     for(int i = 0 ; i < n; ++i )
#define rep1(n)     for(int i = 1 ; i <= n; ++i )
#define tc          int test;cin>>test; while(test--)
#define all(v)      v.begin(),v.end()
#define pb          push_back
#define ff          first
#define ss          second
#define mp          make_pair
#define endl        "\n"
#define maxn        998244353
#define mod         1000000007
#define spc         " "
#define kill(x)     return cout<<x<<endl,0
//#define ll          long long int
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
int cases = 1;
vi v[200005], par(200005), players(200005), ans, anstree[200005], ht(200005);
void dfs1(int node, int parent, set<pii> &still_left)
{
	for (auto ch : v[node])
		if (ch != parent)dfs1(ch, node, still_left);
	par[node] = parent;
	ht[node] = ht[parent] + 1;
	if (v[node].size() == 1 && node != 1)
		players[node] = node, still_left.insert({ht[node], node});
	return;
}
void play(int node, int parent, int toppest, int pre)
{
	if (players[node] != -1)
	{
		if (toppest == -1)
			toppest = node, pre = node;
		else
		{
			par[node] = toppest;
			players[pre] = -1;
			players[toppest] = -1;
			pre = node;
		}
	}
	for (auto ch : v[node])
		if (ch != parent)play(ch, node, toppest, pre);
	v[node].clear();
	return;
}
void goup(set<pii> &still_left)
{
	set<pii>newlist;
	for (auto nd : still_left)
	{
		int node = nd.ss;
		if (players[node] == -1) continue;
		if (players[par[node]] == -1)
			players[par[node]] = players[node], newlist.insert({ht[par[node]], par[node]});
		else
			anstree[players[par[node]]].pb(players[node]), anstree[players[node]].pb(players[par[node]]);
		players[node] = -1;
	}
	still_left = newlist;
	return;
}
void ansdfs(int node , int parent)
{
	ans.pb(node);
	for (auto ch : anstree[node])
		if (ch != parent)ansdfs(ch, node);
	return;
}
int solve()
{
	//    1
	//    2
	// 3      4
	// 		5	6
	// 		7
	int n, x, y;
	cin >> n;
	set<pii> still_left;
	ans.clear();
	rep1(n)ht[i] = 0, v[i].clear(), par[i] = 0, players[i] = -1, anstree[i].clear();
	rep1(n - 1)cin >> x >> y, v[x].pb(y), v[y].pb(x);
	int days = 0;
	ht[0] = 0;
	dfs1(1, 0, still_left);
	while (players[1] == -1)
	{
		for (auto inf : still_left)play(inf.ss, par[inf.ss], -1, -1);
		goup(still_left);
		days++;
		// cout << days << spc << still_left.size() << spc << "...." << endl;
		// for (auto ch : still_left)cout << ch.ss << spc << players[ch.ss] << endl;
	}
	ansdfs(players[1], 0);
	cout << ans.size() << spc << days << endl;
	sort(all(ans));
	for (auto w : ans)cout << w << spc;
	cout << endl;
	return 0;
}
signed main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	tc
	// cout << "Case #" << cases++ << ": ",
	solve();
	return 0;
}