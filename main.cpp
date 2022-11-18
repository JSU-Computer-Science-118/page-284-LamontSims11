// Lamont Sims                  J00968337
// Program 5-6                  Page #284
#include <iostream>
#include <cstdlib>
using namespace std;

int main ()
{
  int n, t, c;

  cin >> n;


  for (c = 1; c <= n; c++)
  {
    t = rand() % 100;
    cout << t << " ";
  }

  return 0;
}
