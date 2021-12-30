
// mon_appli.h : fichier d'en-tête principal de l'application PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluez 'pch.h' avant d'inclure ce fichier pour PCH"
#endif

#include "resource.h"		// symboles principaux


// CmonappliApp :
// Consultez mon_appli.cpp pour l'implémentation de cette classe
//

class CmonappliApp : public CWinApp
{
public:
	CmonappliApp();

// Substitutions
public:
	virtual BOOL InitInstance();

// Implémentation

	DECLARE_MESSAGE_MAP()
};

extern CmonappliApp theApp;
