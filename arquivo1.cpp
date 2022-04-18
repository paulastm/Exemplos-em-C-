//Exemplo de gravação em arquivo texto
//Será criado um arquivo txt no diretório corrente
#include <fstream>
using namespace std;
int main(){
  ofstream arquivo("meus_dados.txt");
  arquivo << "Escrevendo no arquivo..." 
          << endl;
  arquivo.close();
  return 0;
}
