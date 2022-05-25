#include <fstream>
#include <iostream>
using namespace std;

int main() {

  ifstream in ("input.txt");
  ofstream out ("output.txt");

  int N=0;
  int  count = 1 ;
  in >> N;

  while(N != 1){

    if ( N%2 ==0)
      N = N / 2;
      else N=(3*N)+1;

    count++;
  }

  out << count;
  in.close();
	out.close();
  return 0;
}
