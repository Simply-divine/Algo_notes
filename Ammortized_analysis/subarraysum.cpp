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
	int a[n+1];
	rep(i,1,n){
	  cin>>a[i];
	}
	int lptr = 1,rptr = 1;
	int sum = a[1];
	bool found = false;
	while( lptr <= n && rptr <= n){
		while(rptr <= n && sum + a[rptr]<=x){
			sum+=a[rptr];
			rptr++;
		} 
		if( sum == x){
			found = true;
			break;
		}
		sum -= a[lptr];
		lptr++;
	}
	if(found){
		cout<<"Subarray with given sum exists"<<nl;
	}
	else cout<<"Subarray with given sum doesnot exist"<<nl;
	return 0;
}




