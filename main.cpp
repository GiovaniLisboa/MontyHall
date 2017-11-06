#include <stdlib.h>
#include <iostream>
using std:: cout;
using std:: cin;

void premio(int &);
void selecao(int &);
void troca(int &, int &);
int testar_acerto(void); 

int main(int argc, char **argv)
{
	int prem = 0, sel = 0, acerto;
    double percentual;
    const int NITER = 10;
    
    for(int i = 0; i < NITER; i++)
    {
        premio(prem);
    
        selecao(sel);
        
        if (sel == 0) 
            cout << "Voce escolheu a porta A\n";
            else if (sel == 1) 
                cout << "Voce escolheu a porta B\n";
                else if (sel == 2) 
                    cout << "Voce escolheu a porta C\n";
    
        troca(sel, prem);
    
        if (sel == prem)
            testar_acerto;
    
        cout << "\n";
    }
    
    percentual = acerto / NITER;
    cout << "Percentual de acertos: " << percentual;
    
	return 0;
}

//Funções

void premio (int &prem)
{
    prem = (rand() % 2);
}

void selecao (int &sel)
{
    sel = (rand() % 2);
}

void troca (int &a, int &b)
{
    if ((a != 0) && (b != 0))
    {
        cout << "A porta 1 foi aberta e nao contem nada.\n\n";
        if (a == 1)
            a = 2;
            else a = 1;
    }
    else if ((a != 1) && (b !=1))
        {
            cout << "A porta 2 foi aberta e nao contem nada.\n\n";
            if (a == 0)
                a = 2;
                else a = 0;
        }
        else if ((a != 2) && (b !=2))
            {
                cout << "A porta 3 foi aberta e nao contem nada.\n\n";
                if (a == 0)
                    a = 1;
                    else a = 0;
            }
}

int testar_acerto (void)
{
    static int acerto = 0;
        
    acerto++;
    
    return acerto;
}