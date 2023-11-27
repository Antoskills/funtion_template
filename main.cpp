#include <iostream>
using namespace std;
template <class t>
t add(t a,t b)
{
  return a+b;
}
int main()
{
  int a,b;
  cout <<"enter 2 numbers" <<endl;
  cin>>a>>b;
  cout<<add<int>(a,b)<<endl;
  return 0;
}

