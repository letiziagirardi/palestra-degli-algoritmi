#include <fstream>
#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

// constraints
#define MAXN 100000

int N;
int P[MAXN];

int main() {

    ifstream in("input.txt");
    ofstream out("output.txt");

    in>>N;

    for(int i=0; i<N; i++) {
      in >> P[i];
    }

		vector<int> v;
		v.resize(N);
    int inizio = P[0];
    int fine = P[N-1];
    int dif = fine;

		for (int j=0; j<N; j++) {
      int currd = max(abs(P[j]-inizio), abs(P[j]-fine));
      if (currd<dif){
        dif=currd;
       }
		}
     out<< dif<<endl;

    return 0;
}
