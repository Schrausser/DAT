//------------------------------------------------------------------------| dat_Dlg.h                                    //
//                                                                        | DAT, Matrix Dialog v2.0           (deutsch)  //
//                                                                        | von Dietmar Schrausser, (C) SCHRAUSSER 2011  //              
//

#if !defined(AFX_datDLG_H__C8777C67_35DB_48BF_993A_48E48CE75E4F__INCLUDED_)
#define AFX_datDLG_H__C8777C67_35DB_48BF_993A_48E48CE75E4F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif 

class CdatDlg : public CDialog
{
	public:
	CdatDlg(CWnd* pParent = NULL);
	
	LOGFONT lf; //Font struktur

	typedef struct tagSCHRIFTART
	{
		CString fn;
		int sz;
		int clr;
		int H;
		int W;
	}
	SCHRIFTART;															  
	SCHRIFTART schr;

	POINT dlg;
	CRect coord;

	CString datname;
	CString datname_name;

	void CdatDlg::cmdline(CString f);

	void dat_in();

	void schl(int x);
	void ind_i(int x);
	void ind_j(int x);
	int chk_i();
	int chk_j();
	void sp_(int x);
	void zl_(int x);
	int sp_r();
	int zl_r();
	void aij_i(int x);
	void aij_j(int x);
	int aij_ir();
	int aij_jr();
	CString aij_x();
	void CdatDlg::aij_xs(CString x);



	//{{AFX_DATA(CdatDlg)
	enum { IDD = IDD_dat_DIALOG };
	//}}AFX_DATA


	//{{AFX_VIRTUAL(CdatDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	
	//}}AFX_VIRTUAL


	protected:
	HICON m_hIcon;

	//{{AFX_MSG(CdatDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
	afx_msg void OnDateiOeffnen();
	afx_msg void OnEinstellungenSchriftart();
	afx_msg void OnEinstFarben();
	afx_msg void OnClose();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}

#endif
