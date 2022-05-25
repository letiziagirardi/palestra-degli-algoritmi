#include <fstream>
#include <iostream>
using namespace std;
int A;
int B;


int collatz(int num) {
  int steps=1;
  while (num != 1) {
    if (num%2==0) {
      num/=2;
    } else {
      num=3*num+1;
    }
    steps++;
  }
  return steps;
}

int pollatz(int num) {
  int steps=1;
  int upperbound=collatz(num);
  while (num != 1) {
    if  (steps<upperbound) {
      if (num%2==0) {
      num/=2;
    } else {
      num=5*num+1;
    }
    steps++;
  } else {
    return upperbound+1;
  }
  }
  return steps;
}


int main() {

  ifstream in ("input.txt");
  ofstream out ("output.txt");

  int res=0;
  in >> A;
  in >> B;

for(int i = A; i <= B; i++)
  {
    if (collatz(i) > pollatz(i))
      res++;
    }

  out << res;
  in.close();
  out.close();
  return 0;
}
