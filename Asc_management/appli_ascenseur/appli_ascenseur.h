
// appli_ascenseur.h : fichier d'en-tête principal de l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CappliascenseurApp :
// Consultez appli_ascenseur.cpp pour l'implémentation de cette classe
//

class CappliascenseurApp : public CWinApp
{
public:
	CappliascenseurApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation

	DECLARE_MESSAGE_MAP()
};

extern CappliascenseurApp theApp;
