/*
#include <iostream>
using namespace std;
int main() { int n; cin >> n; while (true){ cout << n << " "; if (n == 1) break; if (n%2 == 0) n /= 2; else n = n*3+1; } cout << "\n"; }
*/


#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,sum1,sum2;cin>>n;
	cout<<n<<" ";
	while(n!=1)
	{
		if(n%2==0)
		{
		
			sum1=n/2;
			cout<<sum1<<" ";
			n = sum1;
		}
		else
		{

			sum2 = n*3 +1;
			cout<<sum2<<" ";
			n =sum2;
		}
	}
	return 0;
}
