// Text_ConverterEXE.h : main header file for the TEXT_CONVERTEREXE application
//

#if !defined(AFX_TEXT_CONVERTEREXE_H__79D0CA5C_47BC_497D_B5B3_E95D03649FCA__INCLUDED_)
#define AFX_TEXT_CONVERTEREXE_H__79D0CA5C_47BC_497D_B5B3_E95D03649FCA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CText_ConverterEXEApp:
// See Text_ConverterEXE.cpp for the implementation of this class
//

class CText_ConverterEXEApp : public CWinApp
{
public:
	CText_ConverterEXEApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CText_ConverterEXEApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CText_ConverterEXEApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TEXT_CONVERTEREXE_H__79D0CA5C_47BC_497D_B5B3_E95D03649FCA__INCLUDED_)
