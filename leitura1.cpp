//Exemplo de leitura do conteúdo de arquivo texto
#include <fstream>
#include <iostream>
using namespace std;
int main(){
  ifstream arquivo("numeros.txt");
  int dados;
  if (arquivo) {	//se o arquivo existe, faça...
    while ( arquivo >> dados )	
      cout << dados << endl; 
    arquivo.close();
  }
  return 0;
}
