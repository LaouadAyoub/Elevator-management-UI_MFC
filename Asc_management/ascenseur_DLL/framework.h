#pragma once

#include "targetver.h"
#define WIN32_LEAN_AND_MEAN             // Exclure les en-têtes Windows rarement utilisés
#define _ATL_CSTRING_EXPLICIT_CONSTRUCTORS      // certains constructeurs CString seront explicites
#define _AFX_NO_MFC_CONTROLS_IN_DIALOGS         // supprimer la prise en charge des contrôles MFC dans les boîtes de dialogue

#ifndef VC_EXTRALEAN
#define VC_EXTRALEAN            // Exclure les en-têtes Windows rarement utilisés
#endif

#include <afx.h>
#include <afxwin.h>         // composants MFC principaux et standard
