#pragma once
#include "afxwin.h"


// GxDlg �Ի���

class GxDlg : public CDialogEx
{
	DECLARE_DYNAMIC(GxDlg)

public:
	GxDlg(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~GxDlg();

// �Ի�������
	enum { IDD = IDD_DIALOG2 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	// DxDlg ���⣺��������
	CStatic gx_title;
	// GxDlg ����
	CStatic Gx_text;

	
};
