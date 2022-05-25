#include <fstream>
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// input data
int N, i;
vector<int> V;

int main() {
    //  uncomment the following lines if you want to read/write from files
      ifstream cin("input.txt");
      ofstream out("output.txt");

    cin >> N;
    V.resize(N);
    for (int i = 0; i < N; i++)
        cin >> V[i];

    unordered_set<int> distinct(V.begin(), V.end());

    if (N == (int) distinct.size()) {
        out << "Ok" << endl;
    } else {
        out << "Impossible" << endl;
    }

    return 0;
}
