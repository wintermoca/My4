// CModless.cpp: 구현 파일
//

#include "pch.h"
#include "My4.h"
#include "afxdialogex.h"
#include "CModless.h"


// CModless 대화 상자

IMPLEMENT_DYNAMIC(CModless, CDialogEx)

CModless::CModless(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DLG_MODLESS, pParent)
	, m_Str(_T(""))
{

}

CModless::~CModless()
{
}

void CModless::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, m_Str);
}


BEGIN_MESSAGE_MAP(CModless, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &CModless::OnBnClickedButton1)
END_MESSAGE_MAP()


// CModless 메시지 처리기

#include"My4Dlg.h"
void CModless::OnBnClickedButton1()
{
	CMy4Dlg* p = (CMy4Dlg*)GetParent();
	UpdateData(true);
	p->m_List.AddString(m_Str);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}
