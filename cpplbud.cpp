#include <iostream>
using namespace std;
#include <math.h>
int main() {
int n;
cout<<"Enter the valye of n"<<endl;
cin>>n;
int ans=0;
int i=0;
while (n!=0)
{
  int bit = n & 1;
  ans= (bit * pow(10,i)) + ans;
  n = n>>i;
  i++;
}
cout<<ans<<endl;
    return 0;
}
