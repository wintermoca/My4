#pragma once
#include "afxdialogex.h"


// CSonDlg 대화 상자

class CSonDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSonDlg)

public:
	CSonDlg(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~CSonDlg();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SON_DLG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
};
