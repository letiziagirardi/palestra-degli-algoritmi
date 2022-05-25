#include <stdio.h>
#include <fstream>
#include <iostream>
using namespace std;

int min(int x, int y) {
    if (x < y)
        return x;
    else
        return y;
}

int compra_biglietti(int N, int M, int A, int B) {
    int ans = B * (N / M) + (N % M) * A;
    ans = min(ans, A * N);
    ans = min(ans, B * (N/M + 1));

    return ans;
}

int main() {

  ifstream in ("input.txt");
  ofstream out ("output.txt");


  int N, M, A, B;
  in >> N;
  in >> M;
  in >> A;
  in >> B;

  out <<  compra_biglietti(N, M, A, B);

    in.close();
  	out.close();
    return 0;
}
