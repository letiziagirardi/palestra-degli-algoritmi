#include <fstream>
#include <vector>
#include <math.h>

using namespace std;

int main(void) {

    ifstream in("input.txt");
    ofstream out("output.txt");

    vector<int> arr; // numero di occorrenze della moneta i
    vector<double> tagli; //tipi di moneta
    vector<int> r; //numero di volte che devo prendere la moneta
    arr.resize(15);
    tagli.resize(15);
    r.resize(15);

    tagli[0] = 0.01;
    tagli[1] = 0.02;
    tagli[2] = 0.05;
    tagli[3] = 0.10;
    tagli[4] = 0.20;
    tagli[5] = 0.50;
    tagli[6] = 1.00;
    tagli[7] = 2.00;
    tagli[8] = 5.00;
    tagli[9] = 10.00;
    tagli[10] = 20.00;
    tagli[11] = 50.00;
    tagli[12] = 100.00;
    tagli[13] = 200.00;
    tagli[14] = 500.00;

    for(int i = 0; i < 15; i++) {
        in >> arr[i];
    }

    double R = 0.0; //resto totale

    //taking from input R
    //R is obtained from the sums of all time of occorrences of a coin
    // moltipled by the respectively number of taglio[]
    for(int i = 0; i < 15; i++) {
        R += arr[i] * tagli[i];
    }

    int i = 14;
//---------------------------------------- VERSIONE DA 40 PUNTI

  /*  for(int i = 15; i > 0; i--){
      //res is the array in which we put the number of occorrences of taglio[i]
      // it's imporant the precision so we define a double and the we do the cast of int

      double res;
      res = R/tagli[i];
      int resInt = int(res);
      r[i] = resInt;

      R = R - (resInt * tagli[i]);
    }*/

    //-----------------------------------

 
      for(int i = 14; i >= 0; i--){
      //res is the array in which we put the number of occorrences of taglio[i]
      // it's imporant the precision so we define a double and the we do the cast of int
        double res = ceil((R/tagli[i])*100000000.0)/100000000.0;

        r[i] = floor(res);
        //cout<<ceil(r[i]*tagli[i]*1000000.0)/1000000.0<<" -- ";
       
        double d = res - (int)res;
        d = ceil(d*1000000.0)/1000000.0; //Precisione senza senso
          R = d*tagli[i];
          
    }
    
    for(auto iter: r) {
       out << iter << " ";
    }

    return 0;
}
