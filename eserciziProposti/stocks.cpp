#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main() { 
 ifstream in ("input.txt"); 
 ofstream out ("output.txt");

  int N;
  in >> N;

  vector <int> V;
  V.resize(N);

  for (int i = 0; i<N; i++){
    in >> V[i];
  }

  vector <int> S;
  S.resize(N);

  for (int i = 0; i<N; i++){
    in >> S[i];
  }

    int i = 0;
    int sum = 0;
    
   while(i < N){
       if (S[i] == 1){
          int currs = V[i];
          i++;
           while(i < N && S[i]==1 && V[i]>=V[i-1])
           {
             currs=currs+V[i];
             i++;}
              if (currs > sum)
                sum = currs;
            
       }else{
            i++;
       }
   }
  out<<sum;

  in.close(); 
  out.close(); 
  }
