//Exemplo de gravação em arquivo texto
//Será criado um arquivo txt no diretório corrente
//Cada linha do arquivo terá um número inteiro
#include <iostream>
#include <fstream>
using namespace std;
int main () {
    ofstream a ("numeros.txt");
    int i;
    if (a) {	//se o arquivo existe, faça...
        for (i=1; i<10; i++)
            a<<i<<endl;  // escrevendo cada i no arquivo
        
    } else {
        cout<<"nao existe"<<endl;
    }
    a.close(); //fecha o arquivo
    return 0;
}
