//------------------------------------------------------------------------| dat_zellen.h                                 //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_DAT_ZELLEN_H__D917237D_E4E4_482C_BF0E_994545CAF9AA__INCLUDED_)
#define AFX_DAT_ZELLEN_H__D917237D_E4E4_482C_BF0E_994545CAF9AA__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

class dat_zellen : public CDialog
{
	public:
	dat_zellen(CWnd* pParent = NULL);   

	//{{AFX_DATA(dat_zellen)
	enum { IDD = IDD_dat_ZELLEN };
	int		m_sp;
	int		m_zl;
	//}}AFX_DATA


	//{{AFX_VIRTUAL(dat_zellen)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    
	//}}AFX_VIRTUAL

	protected:

	//{{AFX_MSG(dat_zellen)
	virtual BOOL OnInitDialog();
	afx_msg void OnSpMinus();
	afx_msg void OnSpPlus();
	afx_msg void OnZlMinus();
	afx_msg void OnZlPlus();
	afx_msg void OnChangeSp();
	afx_msg void OnChangeZl();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 