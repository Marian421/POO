#include "pch.h"
#include <iostream>
#include <string>
#include <stack>

using namespace System;


class librarie {
private:
    std::string carte;
    std::string autor;
    int stock;
    double pret;
    std::stack<std::string> cos;
    std::stack<std::string> copie;
    librarie* next;
    
public:
    librarie(std::string Carte,std::string Autor, int Stock,double Pret,librarie* Next = nullptr)
    {
        this->carte = Carte;
        this->autor = Autor;
        this->stock = Stock;
        this->pret = Pret;
        this->next = Next;
        
    }
    
    void chitanta();
    void adauga();
    void remove();
    void mod();
    void menu();
    void display();
    void administrator();
    void client();
    double Pret(std::string carte);
    bool verificare(std::string carte);
    void scaderecarte(std::string carte);
    
};

void librarie::menu()                         ///menu principal
{
    int alegere;
    std::string email;
    std::string parola;

    do {
        system("cls");
        std::cout << "---------------\n";
        std::cout << "MENIU PRINCIPAL\n";
        std::cout << "---------------\n\n";
        std::cout << "1) Administrator;\n";
        std::cout << "2) Client;\n";
        std::cout << "3) Iesire;\n";

    m:
        while (!(std::cin >> alegere)) {
            std::cout << "un numar!: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin.ignore();

        if (alegere > 3 || alegere < 0)
        {
            std::cout << "Un numar intre 1 si 3!\n";
            goto m;
        }

        switch (alegere)
        {
        case 1:
        {
            system("cls");
            std::cout << "Email :";
            std::cin >> email;
            std::cout << "Parola :";
            std::cin >> parola;
            if (email == "1" && parola == "2")
            {
                administrator();
            }
            else
            {
                std::cout << "Date incorecte\n";
                system("pause");
            }

            break;
        }
        case 2:
        {
            client();
            break;
        }
        case 3:
        {
            exit(0);
        }
        
        }
    } while (true);

}

void librarie::administrator()                 ///meniu administrator
{
    int alegere;

    do {
        system("cls");
        std::cout << "-------------------\n";
        std::cout << "MENIU ADMINISTRATOR\n";
        std::cout << "-------------------\n";
        std::cout << "1) Adaugati o carte\n";
        std::cout << "2) Sterge o carte\n";
        std::cout << "3) Modificare\n";
        std::cout << "4) Afisati cartile\n";
        std::cout << "5) Inapoi la meniul principal\n";

    m:
        while (!(std::cin >> alegere)) {
            std::cout << "un numar!: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin.ignore();

        if (alegere > 5 || alegere < 1)
        {
            std::cout << "Un numar intre 1 si 5!\n";
            goto m;
        }

        switch (alegere)
        {
        case 1:
            adauga();
            break;
        case 2:
            remove();
            break;
        case 3:
            mod();
            break;
        case 4:
            display();
            break;
        case 5:
            menu();
        }

    } while (true);
}

void librarie::client()
{
    int alegere;
    std::string ccarte;

    do
    {
        system("cls");
        std::cout << "------------\n";
        std::cout << "MENIU CLIENT\n";
        std::cout << "------------\n";
        std::cout << "1) Afisati cartile\n";
        std::cout << "2) Adaugati o carte in cos\n";
        std::cout << "3) Afisati cosul\n";
        std::cout << "4) Cumparati\n";
        std::cout << "5) Meniu principal\n";

    m:
        while (!(std::cin >> alegere)) {
            std::cout << "un numar!: ";                       ///eroare
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        std::cin.ignore();

        if (alegere > 5 || alegere < 0)
        {
            std::cout << "Un numar intre 1 si 5!\n";
            goto m;
        }

        switch (alegere)
        {
        case 1:
            display();                                       ///afisez libraria
            break;
        case 2:
        c:
            system("cls");
            std::cout << "Ce carte doriti sa adaugati in cos :";
            getline(std::cin, ccarte);

            if (verificare(ccarte) == 1)                    ///daca cartea exista o adaug in cos
            {
                cos.push(ccarte);
                copie.push(ccarte);
            }
            else
            {
                std::cout << "Cartea nu exista!\n";
                std::cin.clear();
                goto c;
            }
            break;
        case 3:
            system("cls");
            std::cout << "Lista :\n";

            if (cos.empty())
                std::cout << "Lista este goala!\n";
            while (!cos.empty())
            {
                std::cout << cos.top() << std::endl;
                cos.pop();
            }
            system("pause");
            break;
        case 4:
            chitanta();
            break;
        case 5:
            menu();
        }

    } while (true);
}

bool librarie::verificare(std::string carte)    ///verifica daca cartea apartine librariei
{
    librarie* pointer = this;
    while (pointer != nullptr)
    {
        if (pointer->carte == carte)
        {
            if (pointer->stock > 0)             ///verific daca exista exemplare
                return 1;
        }
        pointer = pointer->next;                /// trecerea la urmtorul item
    }
    return 0;
}

double librarie::Pret(std::string carte)        ///returneaza pretul unei carti
{
    librarie* pointer = this;
    while (pointer != nullptr)
    {
        if (pointer->carte == carte)
            return pointer->pret;
        pointer = pointer->next;
    }
}

void librarie::scaderecarte(std::string carte) ///eliminarea cartii din stoc
{
    librarie* pointer = this;
    while (pointer != nullptr)
    {
        if (pointer->carte == carte)
        {
            pointer->stock--;
            return;
        }
        pointer = pointer->next;
    }
}

void librarie::chitanta()                      ///returneaza pretul total a cosului
{
    system("cls");
    double total=0;
    librarie* pointer = this;
    while (!copie.empty())
    {
        total = total + Pret(copie.top());     ///apelez Pret(), care imi returneaza o valoare de tip double
        scaderecarte(copie.top());             ///scad cartea din stoc
        copie.pop();
    }
    std::cout <<"Total : " << total << " RON\n";
    system("pause");

}


void librarie::display()                         ///afiseaza cartile din librarie
{
    system("cls");

    librarie* pointer = this;
    int i = 1;
    while (pointer != nullptr)
    {
        std::cout << i << ") \n";
        std::cout << "Titlu :" << pointer->carte << std::endl;
        std::cout << "Autor :" << pointer->autor << std::endl;
        std::cout << "Carti pe stoc :" << pointer->stock << " de bucati" << std::endl;
        std::cout << "Pret :" << pointer->pret << " RON\n\n" ;
        i++;
        pointer = pointer->next;
    }

    system("pause");
}

void librarie::adauga()                          ///adauga o carte in librarie, una din optiunile administratorului
{
    system("cls");
    std::string carte;
    std::string autor;
    int stock;
    double pret;

    std::cout << "Introduceti titlul cartii: ";
    //std::cin.ignore();
    getline(std::cin, carte);                    ///titlul cartii
                              

    std::cout << "Introduceti autorul: ";
    getline(std::cin, autor); 
    ///introducem autorul
    a:
    std::cout << "Cate carti sunt pe stock: ";   ///stocul
    while (!(std::cin >> stock)) {               
        std::cout << "un numar!: ";
        std::cin.clear();                        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    if (stock < 1 || stock>100)
    {
        std::cout << "Intre 1 si 100\n";        ///pot avea maxim 100 de exemplare
        goto a;
    }
    std::cin.ignore();                           

    b:
    std::cout << "Pretul: ";                    ///pretul
    while (!(std::cin >> pret)) {                
        std::cout << "un numar!: ";
        std::cin.clear();                        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
    }
    if (pret < 1 || pret > 200)
    {
        std::cout << "Intre 1 si 200!\n";      ///pretul maxim este 200
        goto b;
    }
    std::cin.ignore();                          

    librarie* newcarte = new librarie(carte, autor, stock, pret);

    librarie* pointer = this;
    while (pointer->next != nullptr)
    {
        pointer = pointer->next;
    }
    pointer->next = newcarte;

    std::cout << "Carte adaugata cu succes. Apasati orice tasta";
    std::cin.ignore();                           
    std::cin.get();
}

void librarie::remove() {                      ///stergerea unei carti din librarie
    system("cls");

    std::string titlu;
    std::cout << "Introduceti titlul cartii pe care doriti sa o stergeti: ";  ///titlul cartii sterse
    std::getline(std::cin, titlu);

    librarie* pointer = this;
    librarie* previous = nullptr;

    while (pointer != nullptr) {              ///stergerea din lista
        if (pointer->carte == titlu) {
            if (previous != nullptr) {         
                previous->next = pointer->next;
                delete pointer;
            }
            else {
                librarie* temp = pointer;
                pointer = pointer->next;
                delete temp;
                this->carte = pointer->carte;
                this->autor = pointer->autor;
                this->stock = pointer->stock;
                this->pret = pointer->pret;
                this->next = pointer->next;
            }
            std::cout << "Cartea a fost stearsa cu succes!\n";
            system("pause");
            return;
        }
        previous = pointer;     
        pointer = pointer->next;
    }

    std::cout << "Cartea nu a fost gasita!\n";
    system("pause");
}

void librarie::mod()             ///modificarea pretului sau a stocului
{
    m:
    system("cls");
    int alegere;
    int stock_nou;
    double pret_nou;
    std::string titlu;
    std::cout << "Carte :" ;
    getline(std::cin, titlu);
    

    std::cout << "Ce doriti sa modificati?\n";
    std::cout << "1) Pretul\n";
    std::cout << "2) Stocul\n";
    n:
    while (!(std::cin >> alegere)) {
        std::cout << "un numar!: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore();

    if (alegere > 2 || alegere < 0)
    {
        std::cout << "Un numar intre 1 si 2!\n";
        goto n;
    }
    librarie* pointer = this;

    switch (alegere)
    {
    case 1:
        a:
        std::cout << "Pret nou :";
        while (!(std::cin >> pret_nou)) {
            std::cout << "un numar!: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (pret_nou < 1 || pret_nou >200)
        {
        std::cout << "Intre 1 si 200!\n";
        goto a;
        }
        
        std::cin.ignore();
        while (pointer != nullptr)
        {
            if (pointer->carte == titlu)
            {
                pointer->pret = pret_nou;
                std::cout << "pret modificat cu succes\n";
                return;
            }
            pointer = pointer->next;           
        }
        if (pointer == nullptr)
        {
            std::cout << "Titlu incorect\n";
            system("pause");
            goto m;
        }
    case 2:
        b:
        std::cout << "Numar exemplare :";
        while (!(std::cin >> stock_nou)) {
            std::cout << "un numar!: ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if (stock_nou < 1 || stock_nou > 100)
        {
            std::cout << "Intre 1 si 100!\n";
            goto b;
        }
        
        std::cin.ignore();
        while (pointer != nullptr)
        {
            if (pointer->carte == titlu)
            {
                pointer->stock = stock_nou;
                std::cout << "stock modificat cu succes\n";
                return;
            }
            pointer = pointer->next;
        }
        if (pointer == nullptr)
        {
            std::cout << "Titlu incorect!\n";
            system("pause");
            goto m;
        }
    }
  
}

int main(array<System::String ^> ^args)
{
    
    librarie* head = new librarie("Atomic Habits", "James Clear", 20, 40);
    head->menu();
}
