//Exemplo de leitura do conteúdo de arquivo texto
//Uso de get na leitura: lê um caractere por vez
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nomeDoArquivo;
	cin>>nomeDoArquivo; //usuário informa o nome do arquivo
	
	ifstream leitura(nomeDoArquivo); 
	if (leitura ) { //se o arquivo existe, faça...
		char caractere;
		while (leitura.get (caractere)) {	//Lê um caratere [char] por vez
			cout<<caractere<<endl;			
			
		}
		leitura.close();
	} else
		cout<<"Arquivo nao encontrado";
	
	return 0;
}

