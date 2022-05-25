// sort the vector, then check for duplicates

#include <algorithm>
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

// input data
int N;
vector<int> V;

int main() {
//  uncomment the following lines if you want to read/write from files
  ifstream cin("input.txt");
  ofstream cout("output.txt");

    cin >> N;
    V.resize(N);
    for (int i=0; i<N; i++)
        cin >> V[i];

    sort(V.begin(), V.end());
    int numdup = 0;
    for (int i=1; i<V.size(); ++i) {
        if (V[i] == V[i-1]) {
            numdup++;
            while (i+1 < V.size() and V[i+1] == V[i]) i++;
        }
    }

    cout << (numdup > 1 ? "YES" : "NO") << endl; // print the result
    return 0;
}
