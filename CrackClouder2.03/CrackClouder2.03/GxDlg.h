#pragma once
#include "afxwin.h"


// GxDlg 对话框

class GxDlg : public CDialogEx
{
	DECLARE_DYNAMIC(GxDlg)

public:
	GxDlg(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~GxDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	// DxDlg 标题：更新内容
	CStatic gx_title;
	// GxDlg 文字
	CStatic Gx_text;

	
};
