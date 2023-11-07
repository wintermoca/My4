#pragma once
#include "afxdialogex.h"


// CModless 대화 상자

class CModless : public CDialogEx
{
	DECLARE_DYNAMIC(CModless)

public:
	CModless(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CModless();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_MODLESS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	CString m_Str;
	afx_msg void OnBnClickedButton1();
};
