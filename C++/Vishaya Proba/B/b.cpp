#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() 
{
  int n;
  int m;
  char f;
  bool flag;
  double s;
  flag = false;
  cin >> n >> m;
  for (int i = 0; i < n; ++i)
    for (int j = 0; j < m; ++j) 
      {
        cin >> f;
        if ((f == '/') or (f == 92)) {
          s += 0.5;
          flag = !flag;
          continue;
        }
        if (flag && (f == '.')) {
          s += 1;
          continue;
        } 
      }
  cout << s;
  return 0;
}