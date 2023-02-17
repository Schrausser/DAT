//------------------------------------------------------------------------| dat_info.h                                   //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_DAT_INFO_H__88576009_AD13_477E_8D24_7787FF6DC885__INCLUDED_)
#define AFX_DAT_INFO_H__88576009_AD13_477E_8D24_7787FF6DC885__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

class dat_info : public CDialog
{
	public:
	dat_info(CWnd* pParent = NULL); 
	
	CString dat_info::CompileStamp(BOOL Lngw);

	//{{AFX_DATA(dat_info)
	enum { IDD = IDD_dat_info };
	CString	m_compile;
	//}}AFX_DATA


	//{{AFX_VIRTUAL(dat_info)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    
	//}}AFX_VIRTUAL

	protected:

	//{{AFX_MSG(dat_info)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
