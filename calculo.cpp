
#include <iostream>

using namespace std;
int main()
{
   //Aqui sera inserido a primeira nota
(entrada de informações) através da variável nota1.
   double nota1;
   cout <<"Insira a primeira nota do aluno: ";
   cin >> nota1;

    //Aqui sera inserido a segunda nota
(entrada de informações) através da variável nota 2.
   double nota2;
   cout <<"Insira a segunda nota do aluno: ";
   cin>>nota2;

   //Aqui através da variável media as duas notas serão processadas
junto a função (Processamento de informações).
   double media;
   media = (nota1+nota2)/2;
   
   //Após o cálculo das notas elas serão exibidas (Saída de informações).
   cout << "A média do aluno foi: " << media;
}
