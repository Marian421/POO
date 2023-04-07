// CNP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cnp;
    cout << "Introduceti cnp-ul: ";                                     ///citirea cnp-ului
    cin >> cnp;

    ///VERIFICAREA ERORILOR

    ///Verific daca s au introdus 13 cifre

    int lungime = size(cnp);
    if (lungime != 13)
    {
        cout << "CNP-ul introdus are un numar nerecorespunzator de cifre";
        return 0;
    }

    ///citirea sexului

    int cifra_sexului = cnp[0] - '0';

    if (cifra_sexului < 1 || cifra_sexului>6)
    {
        cout << "CNP-ul introdus nu este corect";
        return 0;
    }

    string sexul = (cifra_sexului % 2 == 0) ? "Feminin" : "Masculin";   ///daca cifra este impara rezulta ce sexul este feminin, altfel e masculin
        
    ///citirea anului

    string anul = cnp.substr(1, 2);                                     ///extrag ultimele doua cifre din anul nasterii sub forma de caractere
    int ANUL = (anul[0] - '0') * 10 + anul[1] - '0';                    ///le convertesc in numere
    switch (cifra_sexului) {                                            ///folosesc un switch pentru a determina anul nasterii
    case 1:
        ANUL = ANUL + 1900;
        break;                                                          ///1,2 corespunde perioadei 1900 - 1999
    case 2:                                                             ///3,4 corespund 1800 - 1899, iar 5,6 perioadei 2000 - 2099
        ANUL = ANUL + 1900;
        break;
    case 3:
        ANUL = ANUL + 1800;
        break;
    case 4:
        ANUL = ANUL + 1800;
        break;
    case 5:
        ANUL = ANUL + 2000;
        break;
    case 6:
        ANUL = ANUL + 2000;
        break;
    }

    ///Calculam varsta

    int varsta = 2023 - ANUL;


    ///aflam luna nasterii

    string luna = cnp.substr(3, 2);
    int iluna = stoi(luna);                                 ///convertirea din string in numar(int) pentru a putea verifica pentru erori
                                                            ///exista si stol pentru returnarea uni velori de tip long, si stoll pentru long long
    if (iluna > 12)
    {
        cout << "CNP-ul introdus nu este corect";
        return 0;
    }

    ///aflam ziua nasterii

    string ziua = cnp.substr(5, 2);
    int iziua = stoi(ziua);

    if (iziua > 31)
    {
        cout << "CNP-ul introdus nu este corect";
        return 0;
    }
 

    ///aflam si judetul

    string judet = cnp.substr(7, 2);


    ///afisarea valorilor, ca sa nu se intersecteze cu erorile

    cout << "Varsta: " << varsta << endl;
    cout << "Sexul: " << sexul << endl;
    cout << "Anul nasterii: " << ANUL << endl;
    cout << "Luna nasterii: " << luna << endl;
    cout << "Ziua nasterii: " << ziua << endl;
    cout << "Judet: " << judet << endl;



    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
