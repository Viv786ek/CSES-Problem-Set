#include <iostream>
using namespace std;

int main() {
 
int n;
cin>>n;
int arr[n];
int xr=0;
// calculate the the own set of 1 to N
for(int i=1;i<=n;i++)
xr =xr^i;
// now insert value and xor them
for(int i=0;i<n-1;i++) 
{
cin>>arr[i];
xr=xr^arr[i];
}

cout<<xr<<"\n"; 
return 0;
}
