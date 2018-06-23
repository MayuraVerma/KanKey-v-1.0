// Text_ConverterEXEDlg.h : header file
//

#if !defined(AFX_TEXT_CONVERTEREXEDLG_H__412AABFF_8A23_4C20_99F1_0D93D017EEBD__INCLUDED_)
#define AFX_TEXT_CONVERTEREXEDLG_H__412AABFF_8A23_4C20_99F1_0D93D017EEBD__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CText_ConverterEXEDlg dialog

class CText_ConverterEXEDlg : public CDialog
{
// Construction
public:
	CText_ConverterEXEDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CText_ConverterEXEDlg)
	enum { IDD = IDD_TEXT_CONVERTEREXE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CText_ConverterEXEDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CText_ConverterEXEDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXT_CONVERTEREXEDLG_H__412AABFF_8A23_4C20_99F1_0D93D017EEBD__INCLUDED_)
