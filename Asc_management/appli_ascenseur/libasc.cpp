#include "pch.h"
#include "framework.h"
//#include "console_asc.h"
#include "libasc.h"
using namespace std;

void CAscenseur::monter(int eta_dem)
{
	CString msg1 = _T("L Ascenseur monte à l'étage ");
	CString msg2;
	msg2.Format(_T("%d"), eta_dem);
	CString message = msg1 + msg2;
	MessageBox(NULL, (LPCTSTR) message, L"Ascenseur", MB_OK);
}
void CAscenseur::descendre(int eta_dem)
{
	CString msg1 = _T("L Ascenseur descend à l'étage ");
	CString msg2;
	msg2.Format(_T("%d"), eta_dem);
	CString message = msg1 + msg2;
	MessageBox(NULL, (LPCTSTR)message, L"Ascenseur", MB_OK);
}

CAscenseur::CAscenseur()
{
	ETAGES = 4;
	netage = 0;
	enfonction = true;
	MessageBox(NULL, L"Construction de l ascenseur", L"Ascenseur", MB_OK);
}
CAscenseur::CAscenseur(int nbr_eta)
{
	ETAGES = nbr_eta;
	netage = 0;
	enfonction = true;
	MessageBox(NULL, L"Construction de l ascenseur", L"Ascenseur", MB_OK);
}

bool CAscenseur::appel(int eta_dem)
{
	if (enfonction == true)
	{
		if (eta_dem < 0 || eta_dem > 4)
		{
			MessageBox(NULL, L"L'étage demandé n'éxiste pas !", L"Ascenseur", MB_OK);
			enfonction = false;

		}
		else if (eta_dem == netage)
		{
			MessageBox(NULL, L"Vous êtes déja à l'étage demandé", L"Ascenseur", MB_OK);

		}
		else if(eta_dem < netage)
		{
			monter(eta_dem);
			netage = eta_dem;
		}
		else if (eta_dem > netage)
		{
			descendre(eta_dem);
			netage = eta_dem;
		}
	}
	else
	{
		MessageBox(NULL, L"Ascenseur en panne", L"Ascenseur", MB_OK);
	}
	return enfonction;
}

void interventionreparateur(CAscenseur* asc, bool etat_service)
{
	if (etat_service)
	{

		asc->enfonction = true;

	}
	else
	{
		asc->enfonction = false;

	}
}