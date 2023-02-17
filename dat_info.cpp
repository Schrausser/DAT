//------------------------------------------------------------------------| dat_info.cpp                                 //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//


#include "stdafx.h"
#include "dat.h"
#include "dat_info.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

dat_info::dat_info(CWnd* pParent )
	: CDialog(dat_info::IDD, pParent)
{
	//{{AFX_DATA_INIT(dat_info)
	m_compile = _T("");
	//}}AFX_DATA_INIT
}


void dat_info::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(dat_info)
	DDX_Text(pDX, IDC_EDIT_compile, m_compile);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(dat_info, CDialog)
	//{{AFX_MSG_MAP(dat_info)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


BOOL dat_info::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	UpdateData(1); m_compile = CompileStamp(1); UpdateData(0);
	
	return 1;  
}

CString dat_info::CompileStamp(BOOL Lngw)
{
	   CString c;

	char ccc[20]=__DATE__;
	
	if(Lngw == 0) // englisch
	{
	           c ="compiled at ";
	           c += __DATE__;
	           c +=" @ ";
	           c += __TIME__;
	}

	if(Lngw == 1) // deutsch
	{
	           c ="Compiliert am ";
			   c += ccc[4];
			   c += ccc[5];
			   c +=". ";
			   if(ccc[0]=='J' && ccc[1]== 'a' && ccc[2]== 'n' ) c += "Jänner ";
			   if(ccc[0]=='F' && ccc[1]== 'e' && ccc[2]== 'b' ) c += "Februar ";
			   if(ccc[0]=='M' && ccc[1]== 'a' && ccc[2]== 'r' ) c += "März ";
			   if(ccc[0]=='A' && ccc[1]== 'p' && ccc[2]== 'r' ) c += "April ";
	           if(ccc[0]=='M' && ccc[1]== 'a' && ccc[2]== 'y' ) c += "Mai ";
			   if(ccc[0]=='J' && ccc[1]== 'u' && ccc[2]== 'n' ) c += "Juni ";
			   if(ccc[0]=='J' && ccc[1]== 'u' && ccc[2]== 'l' ) c += "Juli ";
			   if(ccc[0]=='A' && ccc[1]== 'u' && ccc[2]== 'g' ) c += "August ";
			   if(ccc[0]=='S' && ccc[1]== 'e' && ccc[2]== 'p' ) c += "September ";
			   if(ccc[0]=='O' && ccc[1]== 'c' && ccc[2]== 't' ) c += "Oktober ";
			   if(ccc[0]=='N' && ccc[1]== 'o' && ccc[2]== 'v' ) c += "November ";
			   if(ccc[0]=='D' && ccc[1]== 'e' && ccc[2]== 'c' ) c += "Dezember ";
			   c += ccc[7];
			   c += ccc[8];
			   c += ccc[9];
			   c += ccc[10];
	           c +=" @ ";
	           c += __TIME__;
	}
    
	return     c;
}
