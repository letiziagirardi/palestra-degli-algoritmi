#include<fstream>
#include<iostream>
#include <vector>
using namespace std;
int N, M;
int main() {
	ifstream in("input.txt");
	ofstream out("output.txt");
	in>>N;
	in>>M;
	vector<int> v;
	v.resize(N+2);
	vector<int> sum;
	sum.resize(N+2);
	v[0]=((-1 % M) + M) % M;
    sum[0]=((-1 % M) + M) % M;

	for(int i = 1 ; i<=N; i++){
		v[i+1] = ((((i % M)*(v[i]%M)) % M)  - (sum[i-1] %M)) % M;
		sum[i] = ((sum[i-1] % M) + (v[i] % M)) %M;

	}
	out<<((v[N] % M) + M) %M<<endl;
	in.close();
	out.close();
}
