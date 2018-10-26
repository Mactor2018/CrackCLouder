
// CrackClouder2.03Dlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CCrackClouder203Dlg 对话框
class CCrackClouder203Dlg : public CDialogEx
{
// 构造
public:
	CCrackClouder203Dlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CRACKCLOUDER203_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;
	CFont m_Font;
	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	// id 1 
	CStatic m_static;
	afx_msg void OnStnClickedText1();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton3();
	CButton m_button1;
	CButton m_button2;
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton9();
};
