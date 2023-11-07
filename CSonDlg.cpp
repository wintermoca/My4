// CSonDlg.cpp: 구현 파일
//

#include "pch.h"
#include "My4.h"
#include "afxdialogex.h"
#include "CSonDlg.h"


// CSonDlg 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg, CDialogEx)

CSonDlg::CSonDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SON_DLG, pParent)
{

}

CSonDlg::~CSonDlg()
{
}

void CSonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CSonDlg, CDialogEx)
END_MESSAGE_MAP()


// CSonDlg 메시지 처리기
