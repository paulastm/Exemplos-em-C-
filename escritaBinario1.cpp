//Exemplo de gravação no formato binário
#include <fstream>
#include <iostream>
using namespace std;
int main(){
  int n=1234;
  ofstream arquivo ("binario.bin");
  if (arquivo) {
	arquivo.write((const char *)(&n), sizeof(int));
	arquivo.close();
  } else
	cout<<"Não deu certo";
  return 0;
}


