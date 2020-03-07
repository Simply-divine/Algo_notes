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
ll mod=1000000009;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,x;
	cin>>n>>x;
	int a[n];
	rep(i,0,n-1) cin>>a[i];
	sort(a,a+n);
	int i = 0, j = n-1 ;
	bool f;
	while ( i <j){
		int sum = a[i] + a[j];
		if (sum==x){
			f = 1;
			break;
		}
		if( sum > x){
			j--;	
		}
		else{
			i++;
		}
	}
	if(f){
		cout<<"found"<<nl;
	}
	else cout<<"not found"<<nl;
	return 0;
}




