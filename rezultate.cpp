#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream in ("date.in");
  ofstream out("date.out");
  
  int n;
  int v[30];
  
  in >> n;
  
  for (int i = 0; i < n; ++i)
  {
    in >> v[i];
  }
  
  for (int i = 0; i < n; ++i)
  {
    int c;
    int s;
    
    while (v[i] != 0)
    {
      c = v[i] % 10;
      v[i] = v[i] / 10;
      
      s += c;
    }
    
    out << s << " ";
  }
  
  return 0;
}
