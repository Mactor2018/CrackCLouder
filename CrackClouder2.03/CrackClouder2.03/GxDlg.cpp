// GxDlg.cpp : 实现文件
//

#include "stdafx.h"
#include "CrackClouder2.03.h"
#include "GxDlg.h"
#include "afxdialogex.h"


// GxDlg 对话框

IMPLEMENT_DYNAMIC(GxDlg, CDialogEx)

GxDlg::GxDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(GxDlg::IDD, pParent)
{

}

GxDlg::~GxDlg()
{
}

void GxDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, Gx_text1, gx_title);
	DDX_Control(pDX, Gx_text2, Gx_text);
}


BEGIN_MESSAGE_MAP(GxDlg, CDialogEx)
END_MESSAGE_MAP()


// GxDlg 消息处理程序
