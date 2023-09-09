// Cex1dlg.cpp: 实现文件
//

#include "pch.h"
#include "ex1.h"
#include "Cex1dlg.h"
#include "afxdialogex.h"


// Cex1dlg 对话框

IMPLEMENT_DYNAMIC(Cex1dlg, CDialogEx)

Cex1dlg::Cex1dlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, mtext(_T(""))
{

}

Cex1dlg::~Cex1dlg()
{
}

void Cex1dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, mtext);
}


BEGIN_MESSAGE_MAP(Cex1dlg, CDialogEx)
	ON_BN_CLICKED(IDC_BUTTON1, &Cex1dlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// Cex1dlg 消息处理程序


void Cex1dlg::OnBnClickedButton1()
{
	UpdateData(TRUE);
	mtext = _T("hello!");// TODO: 在此添加控件通知处理程序代码
	UpdateData(false);
}
