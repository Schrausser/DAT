//------------------------------------------------------------------------| dat.cpp                                      //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#include "stdafx.h"
#include "dat.h"
#include "datDlg.h"
#include "dat_index.h"
#include "dat_zellen.h"
#include "dat_aij.h"
#include "dat_info.h"

#include "process.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif


BEGIN_MESSAGE_MAP(CdatApp, CWinApp)
	//{{AFX_MSG_MAP(CdatApp)
	ON_COMMAND(ID_PROGRAMM_INFO, OnProgrammInfo)
	ON_COMMAND(ID_DATEI_SCHLIESSEN, OnDateiSchliessen)
	ON_COMMAND(ID_EINST_INDEX, OnEinstIndex)
	ON_COMMAND(ID_EINST_ZELLEN, OnEinstZellen)
	ON_COMMAND(ID_DATEI_IJ, OnDateiIj)


	//}}AFX_MSG_MAP
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


CdatApp::CdatApp(){}
CdatApp theApp;

BOOL CdatApp::InitInstance()
{
	#ifdef _AFXDLL 
				   Enable3dControls();		
	#else          Enable3dControlsStatic();
	#endif

	if (m_lpCmdLine[0] != '\0'){ CdatDlg o;o.cmdline(m_lpCmdLine); } // command line parser


		  CdatDlg o;
	m_pMainWnd = &o;
				  o.DoModal();
					
	return 0;
}

void CdatApp::OnProgrammInfo() {  dat_info o;o.DoModal(); }
void CdatApp::OnEinstIndex() {   dat_index o;o.DoModal(); }
void CdatApp::OnEinstZellen(){  dat_zellen o;o.DoModal(); }
void CdatApp::OnDateiIj() {        dat_aij o;o.DoModal(); }

void CdatApp::OnDateiSchliessen(){ CdatDlg o;o.schl(1);   }










