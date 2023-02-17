//------------------------------------------------------------------------| dat.h                                        //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_dat_H__AFF64653_ED92_4DB4_AFD2_B3B63986AA42__INCLUDED_)
#define AFX_dat_H__AFF64653_ED92_4DB4_AFD2_B3B63986AA42__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

#ifndef __AFXWIN_H__
#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"	

class CdatApp : public CWinApp
{
	public:
	CdatApp();


	//{{AFX_VIRTUAL(CdatApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CdatApp)
	afx_msg void OnProgrammInfo();
	afx_msg void OnDateiSchliessen();
	afx_msg void OnEinstIndex();
	afx_msg void OnEinstZellen();
	afx_msg void OnDateiIj();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
