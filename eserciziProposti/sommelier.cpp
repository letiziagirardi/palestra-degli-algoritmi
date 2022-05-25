#include <vector>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

#define MAXN 10000

int N;
int din[MAXN];
int vals[MAXN];
int main() {
	  ifstream in ("input.txt");
	  ofstream out ("output.txt");

    int i, j;
    in>>N;
    for(i=0; i<N; i++) in>>vals[i];
    for(i=N-1; i>=0; i--) {
        int max = 0;
        for(j=i+2; j<N; j++)
            if(vals[j] >= vals[i] && din[j] > max)
                max = din[j];
        din[i] = max + 1;
    }
    int max = din[0];
    for(i=1; i<N; i++)
        if(din[i] > max)
            max = din[i];
    out<<max;
    
    
		in.close();
  	out.close();
    return 0;
}
