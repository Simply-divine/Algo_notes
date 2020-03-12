#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define F first
#define S second
#define PB push_back
#define MAXN 100005
#define MP make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define SQ(a) (a)*(a)
#define nl "\n"
#define INF std::numeric_limits<int>::max()
using namespace std;
using namespace __gnu_pbds;
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update> indexed_set;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
ll mod=1000000007;
const MAXN = 100000;
int n,t[4*MAXN];
void build(int a[],int v,int tl,int tr){
	if(tl == tr)
		t[v] = a[tl];
	else {
		int tm = tl + ( tr - tl )/2;
		build( a, 2*v , tl , tm);
		build( a, 2*v + 1, tm + 1, tr);
		t[v] = t[2*v] + t[2*v + 1];
	}
}
int sum(int v,int l,int r,int tl,int tr){
	if( l > r) return 0;
	if( l == tl && r == tr) return t[v];
	int tm = l + ( r - l)/2;
	
	return sum(2*v,l,r,tl,min(r,tm)) + sum(2*v+1,l,r,max(tl,tm+1),tr);
}
void update(int v,int tl,int tr,int pos,int new_val){
	if( tl == tr) t[v] = new_val;
	else {
		tm = tl + ( tr - tl )/2;
		if( pos <= tm) update(2*v,tl,tm,pos,new_val);
		else update(2*v+1,tm+1,tr,pos,new_val);
		t[v] = t[2*v] + t[2*v+1];
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//use of precomputed sum values of the segment of tree
	//we precompute the sum of segments which are having length equal to power of two.
       //And using these values we can form the segments of any length we want.

	return 0;
}




