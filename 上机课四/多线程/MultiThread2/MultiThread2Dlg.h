// MultiThread2Dlg.h : header file
//

#if !defined(AFX_MULTITHREAD2DLG_H__4822C593_58C2_4A4C_A42F_3D7F06EEFDEF__INCLUDED_)
#define AFX_MULTITHREAD2DLG_H__4822C593_58C2_4A4C_A42F_3D7F06EEFDEF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMultiThread2Dlg dialog
void ThreadFunc(int integer);

class CMultiThread2Dlg : public CDialog
{
// Construction
public:
	CMultiThread2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMultiThread2Dlg)
	enum { IDD = IDD_MULTITHREAD2_DIALOG };
	int		m_nCount;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMultiThread2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HANDLE hThread;
	DWORD ThreadID;
	
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMultiThread2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnStart();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MULTITHREAD2DLG_H__4822C593_58C2_4A4C_A42F_3D7F06EEFDEF__INCLUDED_)
