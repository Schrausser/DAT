//------------------------------------------------------------------------| dat_aij.cpp                                  //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#include "stdafx.h"
#include "dat.h"
#include "datDlg.h"
#include "dat_aij.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


dat_aij::dat_aij(CWnd* pParent /*=NULL*/)
	: CDialog(dat_aij::IDD, pParent)
{
	//{{AFX_DATA_INIT(dat_aij)
	m_i = 0;
	m_j = 0;
	m_dat = "";
	//}}AFX_DATA_INIT
}


void dat_aij::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dat_aij)
	DDX_Text(pDX, IDC_i, m_i);
	DDX_Text(pDX, IDC_j, m_j);
	DDX_Text(pDX, IDC_DAT, m_dat);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dat_aij, CDialog)
	//{{AFX_MSG_MAP(dat_aij)
	ON_EN_CHANGE(IDC_i, OnChangei)
	ON_EN_CHANGE(IDC_j, OnChangej)
	ON_EN_CHANGE(IDC_DAT, OnChangeDat)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

BOOL dat_aij::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	UpdateData(1);

	CdatDlg o;
	   m_i= o.aij_ir()+1;
	   m_j= o.aij_jr()+1;
	 m_dat= o.aij_x();

	 UpdateData(0);
	
	return 1;  
}

void dat_aij::OnChangei() 
{
	UpdateData(1); 
		
    CdatDlg o;
	        o.aij_i(m_i-1);	
	 m_dat= o.aij_x();	
					
	UpdateData(0);
}

void dat_aij::OnChangej() 
{
	UpdateData(1); 
		
	CdatDlg o;
	        o.aij_j(m_j-1);
     m_dat= o.aij_x();
					
	UpdateData(0);	
}

void dat_aij::OnChangeDat() 
{
	UpdateData(1); 
		
	CdatDlg o;
	        o.aij_xs(m_dat);
    			
	UpdateData(0);
}
