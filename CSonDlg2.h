﻿#pragma once
#include "afxdialogex.h"


// CSonDlg2 대화 상자

class CSonDlg2 : public CDialogEx
{
	DECLARE_DYNAMIC(CSonDlg2)

public:
	CSonDlg2(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSonDlg2();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SON_DLG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
	afx_msg void OnEnChangeEdit1();
	CString m_Str;
};
