//------------------------------------------------------------------------| dat_aij.h                                    //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_DAT_AIJ_H__EEDB73CA_94E8_4E7B_934D_AD134E71DD72__INCLUDED_)
#define AFX_DAT_AIJ_H__EEDB73CA_94E8_4E7B_934D_AD134E71DD72__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

class dat_aij : public CDialog
{
	public:
	dat_aij(CWnd* pParent = NULL);   

	//{{AFX_DATA(dat_aij)
	enum { IDD = IDD_dat_AIJ };
	int		m_i;
	int		m_j;
	CString	m_dat;
	//}}AFX_DATA

	//{{AFX_VIRTUAL(dat_aij)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);   
	//}}AFX_VIRTUAL

	protected:

	//{{AFX_MSG(dat_aij)
	afx_msg void OnChangei();
	afx_msg void OnChangej();
	virtual BOOL OnInitDialog();
	afx_msg void OnChangeDat();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif 
