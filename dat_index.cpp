//------------------------------------------------------------------------| dat_index.cpp                                //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#include "stdafx.h"
#include "dat.h"
#include "dat_index.h"
#include "datDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

int ii_=1, ij_=1;

dat_index::dat_index(CWnd* pParent )
	: CDialog(dat_index::IDD, pParent)
{
	//{{AFX_DATA_INIT(dat_index)
	m_check_ii = 1;
	m_check_ij = 1;
	//}}AFX_DATA_INIT
}


void dat_index::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dat_index)
	DDX_Check(pDX, IDC_CHECK_II, m_check_ii);
	DDX_Check(pDX, IDC_CHECK_IJ, m_check_ij);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dat_index, CDialog)
	//{{AFX_MSG_MAP(dat_index)
	ON_BN_CLICKED(IDC_CHECK_II, OnCheckIi)
	ON_BN_CLICKED(IDC_CHECK_IJ, OnCheckIj)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


BOOL dat_index::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	UpdateData(1);

	   CdatDlg o;
	m_check_ii=o.chk_i();
	m_check_ij=o.chk_j();

	UpdateData(0);

	return TRUE; 
}

void dat_index::OnCheckIi() 
{
                    ii_*=-1;
	CdatDlg o;
	        o.ind_i(ii_);
}

void dat_index::OnCheckIj() 
{
	                ij_*=-1;
	CdatDlg o;
	        o.ind_j(ij_);	
}
