#include <iostream>
#include <fstream>
using namespace std;
//exemplo de gravação de arquivo binário
//usando um registro
struct aluno {
	char nome[50];
	int idade;
	float media;
};
int main(){
	aluno jose;
	cin>>jose.nome;
	cin>>jose.idade;
	cin>>jose.media;
	
	//grava em arquivo binario;
	ofstream saida ("aluno");
	if (saida){
		saida.write((const char *) (&jose), sizeof(aluno));
		saida.close();
		cout<<"Sucesso na gravação"<<endl;
	}
	else
		cout<<"Não deu certo"<<endl;
	return 0;
}




//trecho de leitura de arquivo binário
/*

int main () {
	aluno novo;
	ifstream entrada ("aluno");
	if (entrada) {
		entrada.read((char *)(&novo), sizeof(aluno));
		cout<<"Aluno "<<novo.nome<<"\t"<<"Media "<<novo.media<<endl;
		entrada.close();
	} else
		cout<<"Nao deu certo"<<endl;
	return 0;
}

*/
	
