#include <iostream>
#include <fstream>

using namespace std;

int viaggia(int N, int C[]){
  int totalmin = C[0];
  int cont = 1;
  int cittabase = C[0];

  for (int x=1; x<N; x++){
    if (cittabase+cont <= C[x]){
      totalmin += cittabase+cont;
      cont++;
    }
    else{
      totalmin += C[x];
      cont = 1;
      cittabase = C[x];
    }
  }
    return totalmin;
}

int main() {
  std:: ifstream in ("input.txt");
  std:: ofstream out ("output.txt");

  int N;
  in >> N;

  int prezzi[N];

  for (int i=0; i<N; i++) {
    in >> prezzi[i];
  }

  int resultato = viaggia (N, prezzi);

  out << resultato;

  in.close();
  out.close();
} 
