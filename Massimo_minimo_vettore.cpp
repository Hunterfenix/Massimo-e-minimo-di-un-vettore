//Librerie
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<algorithm>

int ARRAY[20], MAX, MIN,POSX, POSN;//Variabili globali

void randm() //Inizializo la funzione per la randomizazione dei numeri nel array
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

void posizione() //Inizializzo la funzione per Trovare la posizione
{
    for(int i = 0; i < 20; i++)
    {

        if(ARRAY[i] == MIN) //Trovo la posizione del numero piu' piccolo
        {
        POSN = i;
        break;
        }

    }
    for(int i = 0; i < 20; i++) //Trovo la posizione del numero piu' grande
    {
        if(ARRAY[i] == MAX)
        {
        POSX = i;
        break;
        }
    }

}

int main() //Inizializo la funzione main
{
randm(); //Chiamo la funzine di randomizazione ed inserimento dei nuemri nell array 
minmax(); //Chiamo la funzione per trovare il valore minimo e il valore massimo nel array
posizione(); //Chiamo la funzione che mi da la posizione
std::cout << "L'array e' composta da questi numeri: "; //Dalla riga 42 alla 48 faccio stamapare l'array 

for(int i = 0; i < 20; i++)
 {
    std::cout << ARRAY[i] << "," ;
 }
std::cout << "" << std::endl;

std::cout << "Il valore massimo e': " << MAX<< " " << "con posizione: " << POSX <<std::endl; //Stampo a schermo il valore massimo e la sua posizione
std::cout << "Il valore minimo e': " << MIN<< " " << "con posizione: " << POSN <<std::endl; //Stampo a schermo il valore minimo e la sua posizione


return 0;
}