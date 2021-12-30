
// appli_ascenseurDlg.cpp : fichier d'implémentation
//

#include "pch.h"
#include "framework.h"
#include "appli_ascenseur.h"
#include "appli_ascenseurDlg.h"
#include "afxdialogex.h"
#include "libasc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// boîte de dialogue de CappliascenseurDlg

int a;
int eta;
CString eta_act;
CAscenseur asc;

CappliascenseurDlg::CappliascenseurDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_APPLI_ASCENSEUR_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	
}

void CappliascenseurDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_CHECK1, check_ctrl);
	DDX_Control(pDX, IDC_LIST1, list_ctrl);
}

BEGIN_MESSAGE_MAP(CappliascenseurDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON6, &CappliascenseurDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON4, &CappliascenseurDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON1, &CappliascenseurDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON3, &CappliascenseurDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON5, &CappliascenseurDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON2, &CappliascenseurDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_CHECK1, &CappliascenseurDlg::OnBnClickedCheck1)
END_MESSAGE_MAP()


// gestionnaires de messages de CappliascenseurDlg

BOOL CappliascenseurDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Définir l'icône de cette boîte de dialogue.  L'infrastructure effectue cela automatiquement
	//  lorsque la fenêtre principale de l'application n'est pas une boîte de dialogue
	SetIcon(m_hIcon, TRUE);			// Définir une grande icône
	SetIcon(m_hIcon, FALSE);		// Définir une petite icône

	// TODO: ajoutez ici une initialisation supplémentaire

	return TRUE;  // retourne TRUE, sauf si vous avez défini le focus sur un contrôle
}

// Si vous ajoutez un bouton Réduire à votre boîte de dialogue, vous devez utiliser le code ci-dessous
//  pour dessiner l'icône.  Pour les applications MFC utilisant le modèle Document/Vue,
//  cela est fait automatiquement par l'infrastructure.

void CappliascenseurDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // contexte de périphérique pour la peinture

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Centrer l'icône dans le rectangle client
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Dessiner l'icône
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// Le système appelle cette fonction pour obtenir le curseur à afficher lorsque l'utilisateur fait glisser
//  la fenêtre réduite.
HCURSOR CappliascenseurDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CappliascenseurDlg::OnBnClickedButton6()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(0);
	if (a)
	{
		list_ctrl.InsertString(0, L"0");
	}
}


void CappliascenseurDlg::OnBnClickedButton4()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(1);
	if (a)
	{
		list_ctrl.InsertString(0, L"1");
	}
}


void CappliascenseurDlg::OnBnClickedButton1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(2);
	if (a)
	{
		list_ctrl.InsertString(0, L"2");
	}
}


void CappliascenseurDlg::OnBnClickedButton3()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(3);

	if (a)
	{
		list_ctrl.InsertString(0, L"3");
	}
}


void CappliascenseurDlg::OnBnClickedButton5()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(4);
	if (a)
	{
		list_ctrl.InsertString(0, L"4");
	}
}


void CappliascenseurDlg::OnBnClickedButton2()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	a = asc.appel(5);

	check_ctrl.EnableWindow(true);
	check_ctrl.SetCheck(BST_CHECKED);
	eta_act.Format(L"%d", eta);
	if (!a)
	{
		list_ctrl.InsertString(0, L"Hors service [" + eta_act + "]");
	}


}


void CappliascenseurDlg::OnBnClickedCheck1()
{
	// TODO: ajoutez ici le code de votre gestionnaire de notification de contrôle
	check_ctrl.EnableWindow(false);
	interventionreparateur(&asc, true);
	list_ctrl.InsertString(0, eta_act);
	
}
