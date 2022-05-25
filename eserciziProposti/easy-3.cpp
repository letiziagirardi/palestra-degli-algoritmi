#include<fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(){

  int N;
  int index1P,index1D;
  long int max1P = 0;
  long int max1D = 0;
  long int max2P = 0;
  long int max2D = 0;
  long int sumP = 0,sumD = 0;
	ifstream in ("input.txt");
	ofstream out ("output.txt");

  in >> N;
  vector<long int> v;
  v.resize(N);

  int numP=0;
  int numD=0;

  for (int i = 0 ; i < N ; i++){
    in >> v[i];

    if ((v[i] % 2 == 0) && (v[i] > max1P)){
      max1P = v[i];
      index1P =i;
    }else{
      if ((v[i] % 2 != 0) && (v[i] > max1D)){
        max1D = v[i];
          index1D =i;
      }}
    }
    if (max1P!=0){numP++;}
    if (max1D!=0){numD++;}

  for (int i = 0 ; i < N ; i++){
    if ((v[i] % 2 == 0) && (v[i] > max2P) && (v[i] <= max1P) && (i != index1P) ){
      max2P = v[i];
    }else {
      if ((v[i] % 2 != 0) && (v[i] > max2D) && (v[i] <= max1D) && (i != index1D)){
          max2D = v[i];
        }
      }
    }

    if (max2P!=0){numP++;}
    if (max2D!=0){numD++;}

    if (numD==2 || numP==2)
      {
        sumP = max1P+max2P;
        sumD = max1D+max2D;
      }

    if ( max(sumP,sumD) == 0)
      {
        out<<"-1";
      } else {out<<max(sumP,sumD);}

	in.close();
	out.close();

	return 0;
}
