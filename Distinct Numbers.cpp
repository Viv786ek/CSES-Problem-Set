
#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int n;cin>>n;
	long long int a[n];
	set<int> s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s.insert(a[i]);
	}
	cout<<s.size();
	
	
	return 0;
}
