//------------------------------------------------------------------------| dat_zellen.cpp                               //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#include "stdafx.h"
#include "dat.h"
#include "datDlg.h"
#include "dat_zellen.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

dat_zellen::dat_zellen(CWnd* pParent )
	: CDialog(dat_zellen::IDD, pParent)
{
	//{{AFX_DATA_INIT(dat_zellen)
	m_sp = 80;
	m_zl = 12;
	//}}AFX_DATA_INIT
}

void dat_zellen::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dat_zellen)
	DDX_Text(pDX, IDC_SP, m_sp);
	DDX_Text(pDX, IDC_ZL, m_zl);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dat_zellen, CDialog)
	//{{AFX_MSG_MAP(dat_zellen)
	ON_BN_CLICKED(IDC_SP_MINUS, OnSpMinus)
	ON_BN_CLICKED(IDC_SP_PLUS, OnSpPlus)
	ON_BN_CLICKED(IDC_ZL_MINUS, OnZlMinus)
	ON_BN_CLICKED(IDC_ZL_PLUS, OnZlPlus)
	ON_EN_CHANGE(IDC_SP, OnChangeSp)
	ON_EN_CHANGE(IDC_ZL, OnChangeZl)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()



BOOL dat_zellen::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	UpdateData(1);
	
	CdatDlg o;
	  m_sp= o.sp_r();
	  m_zl= o.zl_r();

	UpdateData(0);
	
	return 1;  
}

void dat_zellen::OnSpMinus() 
{
	UpdateData(1); 
	               
	              m_sp --; 
	CdatDlg o;
	        o.sp_(m_sp);

    UpdateData(0);

}

void dat_zellen::OnSpPlus() 
{
   UpdateData(1); 
   
                 m_sp ++;
   CdatDlg o;
	       o.sp_(m_sp);
   
   UpdateData(0);
}



void dat_zellen::OnZlMinus() 
{
	UpdateData(1);
	
	              m_zl --; 
	CdatDlg o;
	        o.zl_(m_zl);

	UpdateData(0);
}

void dat_zellen::OnZlPlus() 
{
		UpdateData(1); 
		
		              m_zl ++; 
		CdatDlg o;
	            o.zl_(m_zl);

	UpdateData(0);	
}

void dat_zellen::OnChangeSp() 
{
	UpdateData(1); 
		
		CdatDlg o;
	            o.sp_(m_sp);
					
	UpdateData(0);
}

void dat_zellen::OnChangeZl() 
{
	UpdateData(1); 
		
		CdatDlg o;
	            o.zl_(m_zl);
					
	UpdateData(0);
}
