//Exemplo de leitura de arquivo binário
#include <fstream>
#include <iostream>
using namespace std;
int main(){
  int n;
  ifstream arquivo ("binario.bin");
  if (arquivo) {
	arquivo.read((char *)(&n), sizeof(int));
	cout<<"Valor de n é "<<n<<endl;
	arquivo.close();
  } else
	cout<<"Não deu certo";
  return 0;
}


