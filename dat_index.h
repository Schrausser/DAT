//------------------------------------------------------------------------| dat_index.h                                  //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_DAT_INDEX_H__91955605_727D_4CFF_A103_950E6FFED0FE__INCLUDED_)
#define AFX_DAT_INDEX_H__91955605_727D_4CFF_A103_950E6FFED0FE__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

class dat_index : public CDialog
{
	public:
	dat_index(CWnd* pParent = NULL);   

	//{{AFX_DATA(dat_index)
	enum { IDD = IDD_dat_INDEX };
	BOOL	m_check_ii;
	BOOL	m_check_ij;
	//}}AFX_DATA


	//{{AFX_VIRTUAL(dat_index)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);   
	//}}AFX_VIRTUAL

	protected:

	//{{AFX_MSG(dat_index)
	virtual BOOL OnInitDialog();
	afx_msg void OnCheckIi();
	afx_msg void OnCheckIj();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
