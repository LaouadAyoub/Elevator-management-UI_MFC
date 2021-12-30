// console_asc.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include "framework.h"
#include "console_asc.h"
#include "libasc.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// Seul et unique objet application

CWinApp theApp;

using namespace std;

int main()
{
    int nRetCode = 0;

    HMODULE hModule = ::GetModuleHandle(nullptr);

    if (hModule != nullptr)
    {
        // initialise MFC et affiche un message d'erreur en cas d'échec
        if (!AfxWinInit(hModule, nullptr, ::GetCommandLine(), 0))
        {
            // TODO: codez le comportement de l'application à cet emplacement.
            wprintf(L"Erreur irrécupérable : échec de l'initialisation de MFC\n");
            nRetCode = 1;
        }
        else
        {
            // TODO: codez le comportement de l'application à cet emplacement.
        }
    }
    else
    {
        // TODO: changez le code d'erreur selon les besoins
        wprintf(L"Erreur irrécupérable : échec de GetModuleHandle\n");
        nRetCode = 1;
    }
    cout << "marhaba";
    CAscenseur asc(4);
    asc.appel(3);
    asc.appel(1);
    asc.appel(2);
    asc.appel(4);
    asc.appel(4);
    asc.appel(0);
    asc.appel(5);
    asc.appel(2);
    interventionreparateur(&asc, true);
    asc.appel(2);
    return nRetCode;
}
