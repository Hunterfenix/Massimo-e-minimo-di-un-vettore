//Librerie
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int ARRAY[20];
int MAX; //Variabili globali
int MIN;

void randm() //Inizializo una funzione
{

srand(time(NULL)); //Inizializzo il seme

int rand; //Inizializo una variabile d'appoggio 

for(int i = 0; i < 20; i++)
{
    rand = std::rand() % 100 + 1; //randomizzo i numeri
    ARRAY[i] = rand; //Copio uno ad uno i numeri nel array usando i per dire dove inserire il numero nel array
}

}

void minmax() //Inizializzo la funzione per trovare il valore minimo ed il massimo in un array
{
    
    auto result = std::minmax_element(ARRAY, ARRAY + 20); //Utilizzo questa funzione per avere il valore minimo e il valore massimo 

    MIN = *result.first;
    MAX = *result.second; //Salvo i valori nelle variabili globali


}

int main() //Inizializo la funzione main
{
randm(); //Chiamo la funzine di randomizazione ed inserimento dei nuemri nell array 
minmax(); //Chiamo la funzione per trovare il valore minimo e il valore massimo nel array

std::cout << "L'array e' composta da questi numeri: "; //Dalla riga 42 alla 48 faccio stamapare l'array 

for(int i = 0; i < 20; i++)
 {
    std::cout << ARRAY[i] << "," ;
 }
std::cout << "" << std::endl;

std::cout << "Il valore massimo e': " << MAX << std::endl; //Stampo a schermo il valore massimo
std::cout << "Il valore minimo e': " << MIN << std::endl; //Stampo a schermo il valore minimo 


return 0;
}