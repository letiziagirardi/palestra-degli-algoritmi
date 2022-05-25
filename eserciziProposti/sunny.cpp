#include <fstream>
using namespace std;

struct svincolo{
 int svincoloCollegato;
 int luce;
 svincolo():luce(100000){}
 };
 svincolo svincoli[50001];
 bool visitato[50001];

 int main()
 {
  fstream in,out;
  in.open("input.txt",ios::in);
  out.open("output.txt",ios::out);

  int N,M,H,S;
  in >> N >> M >> H >> S;
  for (int i=1;i<=N;i++) visitato[i] = false;
  for (int i=1;i<=M;i++) {
      int A,B,L; in>>A>>B>>L;
      if (svincoli[A].luce > L) {
        svincoli[A].luce = L;
        svincoli[A].svincoloCollegato = B; }
      if (svincoli[B].luce > L) {
        svincoli[B].luce = L;
        svincoli[B].svincoloCollegato = A; }
      }

int corrente = H;
int gallerie = 0;

  while(corrente != S && !visitato[corrente]) {
    visitato[corrente] = true;
    gallerie++;
    corrente = svincoli[corrente].svincoloCollegato;
}
  if (corrente == S)
          out << gallerie << endl;
  else
  out << "-1" << endl; return 0;
}
