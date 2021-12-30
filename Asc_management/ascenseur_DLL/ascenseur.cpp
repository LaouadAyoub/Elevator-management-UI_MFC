// ascenseur.cpp : Définit les fonctions de la bibliothèque statique.
//

#include "pch.h"
#include "framework.h"
#include "ascenseur.h"

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

    return nRetCode;
}
// TODO: Il s'agit d'un exemple de fonction de bibliothèque
void fnascenseur()
{
}
