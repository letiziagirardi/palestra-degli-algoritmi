#include<fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){

  int N;
	ifstream in ("input.txt");
	ofstream out ("output.txt");

  in >> N;
  vector<int> v;
  v.resize(N);
  in >> v[1];
  int max = v[1];

  for(int i = 1 ; i < N ; i++){
    in >> v[i];
    if (v[i]> max){ max = v[i];}

  }

  out<<max;
	in.close();
	out.close();

	return 0;
}
