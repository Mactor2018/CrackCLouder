
// CrackClouder2.03Dlg.h : ͷ�ļ�
//

#pragma once
#include "afxwin.h"


// CCrackClouder203Dlg �Ի���
class CCrackClouder203Dlg : public CDialogEx
{
// ����
public:
	CCrackClouder203Dlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_CRACKCLOUDER203_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;
	CFont m_Font;
	// ���ɵ���Ϣӳ�亯��
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
