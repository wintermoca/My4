// CSonDlg2.cpp: 구현 파일
//

#include "pch.h"
#include "My4.h"
#include "afxdialogex.h"
#include "CSonDlg2.h"


// CSonDlg2 대화 상자

IMPLEMENT_DYNAMIC(CSonDlg2, CDialogEx)

CSonDlg2::CSonDlg2(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_SON_DLG2, pParent)
	, m_Str(_T(""))
{

}

CSonDlg2::~CSonDlg2()
{
}

void CSonDlg2::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(CSonDlg2, CDialogEx)
	ON_BN_CLICKED(IDCANCEL, &CSonDlg2::OnBnClickedCancel)
	ON_EN_CHANGE(IDC_EDIT1, &CSonDlg2::OnEnChangeEdit1)
END_MESSAGE_MAP()


// CSonDlg2 메시지 처리기


void CSonDlg2::OnBnClickedCancel()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnCancel();
}


void CSonDlg2::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
