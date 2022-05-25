#include <stdio.h>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


void aggiusta(int N, char s[]) {
	for (int i = 0; i < N; i++) {
        char c = s[i];
		if (c >= 'a' && c <= 'z')
				s[i] = c - 'a' + 'A';
        else if (c >= 'A' && c <= 'Z')
            s[i] = c - 'A' + 'a';
    }
}



int main() {
	  ifstream in ("input.txt");
	  ofstream out ("output.txt");

    int N, x = 0;
		in >> N;
		char s[N];

		while (in>>s){
			aggiusta(N, s);
			out<<s;
			out<<" ";
		}
		
	in.close();
  	out.close();
    return 0;
}
