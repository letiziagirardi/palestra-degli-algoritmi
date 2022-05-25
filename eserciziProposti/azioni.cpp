#include <stdio.h>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {

  ifstream in ("input.txt");
  ofstream out ("output.txt");

  int n, firstN=0, secondN=0;
  int diff=0;
  in >> n;
  in >>firstN;
  in >> secondN;

  diff = abs(secondN-firstN);
  vector<int> v;
  v.resize(n);
  v[0]=secondN;
  for (int i = 1 ; i < n - 1; i++){
    in >> v[i];
    if (abs(v[i]-v[i-1]) > diff)
    diff = abs(v[i]-v[i-1]);
  }
  out<< diff;

  in.close();
	out.close();
  return 0;
}
