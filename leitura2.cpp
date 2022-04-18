//Exemplo de leitura do conteúdo de arquivo texto
//Uso de getline na leitura
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeDoArquivo;
	cin>>nomeDoArquivo; //usuário informa o nome do arquivo
	
	ifstream leitura(nomeDoArquivo); 
	if (leitura ) { //se o arquivo existe, faça...
		string linha;
		while (getline (leitura, linha)) { //lê uma linha até o caractere de fim de linha
			cout<<linha<<endl;			
			
		}
		leitura.close();
	} else
		cout<<"Arquivo nao encontrado";
	
	return 0;
}

