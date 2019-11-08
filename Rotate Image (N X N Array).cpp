#include<iostream>
using namespace std;
int main() {
  int n,i,j;cin>>n;
  int a[n][n];
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  cin>>a[i][j];
  cout<<endl;
  for(i=0;i<n;i++)
  for(j=0;j<n/2;j++)
  swap(a[i][j],a[i][n-j-1]);
  for(j=0;j<n;j++)
  {for(i=0;i<n;i++)
  {cout<<a[i][j]<<" ";}
  cout<<endl;
  }
	return 0;
}
