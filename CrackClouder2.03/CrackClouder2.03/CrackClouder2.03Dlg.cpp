
// CrackClouder2.03Dlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "CrackClouder2.03.h"
#include "CrackClouder2.03Dlg.h"
#include "afxdialogex.h"
#include "CaboutDlg.h"
#include "GxDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// ����Ӧ�ó��򡰹��ڡ��˵���� CAboutDlg �Ի���

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// �Ի�������
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

// ʵ��
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCrackClouder203Dlg �Ի���



CCrackClouder203Dlg::CCrackClouder203Dlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(CCrackClouder203Dlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCrackClouder203Dlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, Main_TEXT1, m_static);
	DDX_Control(pDX, Main_BUTTON3, m_button1);
	DDX_Control(pDX, Main_BUTTON2, m_button2);
}

BEGIN_MESSAGE_MAP(CCrackClouder203Dlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_STN_CLICKED(Main_TEXT1, &CCrackClouder203Dlg::OnStnClickedText1)
	ON_BN_CLICKED(IDC_BUTTON1, &CCrackClouder203Dlg::OnBnClickedButton1)
	ON_NOTIFY(NM_CLICK, IDC_SYSLINK1, &CCrackClouder203Dlg::OnNMClickSyslink1)
	ON_BN_CLICKED(Main_BUTTON3, &CCrackClouder203Dlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CCrackClouder203Dlg::OnBnClickedButton4)
	ON_BN_CLICKED(Main_BUTTON2, &CCrackClouder203Dlg::OnBnClickedButton2)
	ON_BN_CLICKED(Main_BUTTON5, &CCrackClouder203Dlg::OnBnClickedButton5)
	ON_BN_CLICKED(Main_BUTTON7, &CCrackClouder203Dlg::OnBnClickedButton7)
	ON_BN_CLICKED(Main_BUTTON9, &CCrackClouder203Dlg::OnBnClickedButton9)
END_MESSAGE_MAP()


// CCrackClouder203Dlg ��Ϣ�������

BOOL CCrackClouder203Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// ��������...���˵�����ӵ�ϵͳ�˵��С�

	// IDM_ABOUTBOX ������ϵͳ���Χ�ڡ�
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// ���ô˶Ի����ͼ�ꡣ  ��Ӧ�ó��������ڲ��ǶԻ���ʱ����ܽ��Զ�
	//  ִ�д˲���
	SetIcon(m_hIcon, TRUE);			// ���ô�ͼ��
	SetIcon(m_hIcon, FALSE);		// ����Сͼ��

	// TODO:  �ڴ���Ӷ���ĳ�ʼ������
	CString text = _T("����������Github�Ͽ�Դ��\nThis Programme is OPEN SOURCE on GITHUB!!");
	CString title = _T("����������Github�Ͽ�Դ��\nThis Programme is OPEN SOURCE on GITHUB!!");
	if (
		MessageBoxW(text, title, MB_ICONINFORMATION | MB_YESNO)
		== IDYES
		){
	}
	else
	{
		CDialogEx::OnOK();
	}
	
	m_Font.CreatePointFont(120, _T("΢���ź�"), NULL);
	m_static.SetFont(&m_Font, true);
	m_static.SetWindowText(_T("����������Github�Ͽ�Դ��\nThis Programme is OPEN SOURCE on GITHUB!!"));
	
	
	//����bt1�����жϵ��״̬
	int bt1 = 0;
	return TRUE;  // ���ǽ��������õ��ؼ������򷵻� TRUE
}

void CCrackClouder203Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// �����Ի��������С����ť������Ҫ����Ĵ���
//  �����Ƹ�ͼ�ꡣ  ����ʹ���ĵ�/��ͼģ�͵� MFC Ӧ�ó���
//  �⽫�ɿ���Զ���ɡ�

void CCrackClouder203Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // ���ڻ��Ƶ��豸������

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// ʹͼ���ڹ����������о���
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// ����ͼ��
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//���û��϶���С������ʱϵͳ���ô˺���ȡ�ù��
//��ʾ��
HCURSOR CCrackClouder203Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCrackClouder203Dlg::OnStnClickedText1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void CCrackClouder203Dlg::OnBnClickedButton1()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	// TODO:  �ڴ���ӿؼ�֪ͨ����������

	/*	if (
	FileE(_T("C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe"))
	== TRUE
	)
	*/
	if (-1 != GetFileAttributes(_T("C:\\Program Files\\iClass\\StudentClient"))) //����ļ��д��ڣ� ����\\�����޶�û��ϵ
	{
		//�ļ����� ������ť
		if (
			MessageBoxW(_T("�����ϣ������ʹ���ˡ� ����Ը�Ŷ~\n�Ƿ�����е�һ�и��������β���ʼʹ�ã�"), _T("��ʾ | By Mactor | blog.mactor.xyz"), MB_ICONASTERISK | MB_YESNO)
			== IDYES)
		{
			m_button1.EnableWindow(1);
			m_button2.EnableWindow(1);
		}
		else
		{
			if (
				MessageBoxW(_T("�Ǿ��˳��ɣ�"), _T("ȷ���˳� | By Mactor |blog.mactor.xyz"), MB_ICONQUESTION | MB_YESNO)
				== IDYES
				)
			{
				CDialogEx::OnOK();
			}
			else{}
		}
	}
	else
	{
		MessageBoxW(_T("δ��⵽�ļ���"), _T("��ʾ | By Mactor |blog.mactor.xyz"), MB_ICONERROR | MB_OK);
	}
}


void CCrackClouder203Dlg::OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	
	*pResult = 0;

/*	
�ҵĲ�����ʱ��ԭ�� ��ͣ��  ���ע����
ShellExecute(0, NULL, _T("http://blog.mactor.xyz"), NULL, NULL, SW_NORMAL);
	MessageBoxW(_T("������ת ���Ժ�..��ӭ���ʣ���\n PS:������������ʹ��Chrome�������"), _T("Mactor | blog.mactor.xyz"), MB_OK);
*/
}


void CCrackClouder203Dlg::OnBnClickedButton3()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	char oldname[80] = "C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe", newname[80] = "C:\\Program Files\\iClass\\StudentClient\\MactorCracked.mctx";

	if (rename(oldname, newname) == 0)
	{
		if (
			MessageBoxW(_T("�ƽ���ɣ����ȷ����������ѿأ�"), _T("�ƽ�ɹ� "), MB_OK | MB_ICONINFORMATION)
			== IDOK
			){
			system("start /b shutdown -r -t 1 ");

			//AutoRun(1);

		}
	}
	else
	{
		MessageBoxW(_T("�ƽ�ʧ�ܣ������ļ��Ƿ�ռ�û���ƽⷽ������г����ϵ���߷�����"), _T("Error 102: �ƽ�ʧ��"), MB_OK | MB_ICONERROR);
	}

}


void CCrackClouder203Dlg::OnBnClickedButton4()
{
	// ʹ�ñض�
	CString text = _T("��ӭʹ�ã�������Ŀ����Ϊ�˰�����λ��һ��������Ҫ�������ʦ�Ŀ��ƣ���������������;��������ƺ��뾡��ָ����ƣ������ñ���������������;��ʹ�ó��������һ�к���������������ھ�����ʧ���ļ��ȣ�����ʹ�������ге���\n���ߣ�Mactor QQ2760502461  ���˲���: blog.mactor.xyz\n��������ս���Ȩ���������У�\n\n������ǡ�����������ȫͬ�Ⲣ��ŵ������������! ����ͬ��򲻳�ŵ�����������˳������̽����������ļ������ɾ����");
	CString title = _T("�ض� - ��Ҫ��ʾ");
	if (
		MessageBoxW(text, title, MB_ICONINFORMATION | MB_YESNO)
		== IDYES
		){
	}
	else
	{
		CDialogEx::OnOK();
	}


}


void CCrackClouder203Dlg::OnBnClickedButton2()
{
	//һ����ԭ

	char oldname[80] = "C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe", newname[80] = "C:\\Program Files\\iClass\\StudentClient\\MactorCracked.mctx";

	if (rename(newname, oldname) == 0)
	{
		if (
			MessageBoxW(_T("�ѻָ��ļ������������Ͻ�ʦ���ԡ�\nPS:������ٴν�����ƣ��㻹����ʹ�ñ����"), _T("�ѻָ��� "), MB_OK | MB_ICONINFORMATION)
			== IDOK
			){
			//system("start /b C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe");
			ShellExecute(NULL, _T("open"),_T( "C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe"), NULL, NULL, SW_SHOWNORMAL);
			//AutoRun(1);

		}
	}
}


void CCrackClouder203Dlg::OnBnClickedButton5()
{
	// ж��
	MessageBoxW(_T("�������ѽ�����ƺ�ſ���ж�أ�����ж�ز��ɹ�\nPS:���ø������"), _T("��ʾ | By Mactor"), MB_ICONINFORMATION | MB_OK);
	//system("C:\\Program Files\\iClass\\StudentClient\\uninstall.exe");
	ShellExecute(NULL, _T("open"), _T("C:\\Program Files\\iClass\\StudentClient\\uninstall.exe"), NULL, NULL, SW_SHOWNORMAL);

}


void CCrackClouder203Dlg::OnBnClickedButton7()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//��Ȩ
	CaboutDlg  aboutDlg;
	aboutDlg.DoModal();
}


void CCrackClouder203Dlg::OnBnClickedButton9()
{
	// TODO:  �ڴ���ӿؼ�֪ͨ����������
	//������־
	GxDlg GxMsg;
	GxMsg.DoModal();

	
	/*
	
	m_Font.CreatePointFont(120, _T("΢���ź�"), NULL);
	m_static.SetFont(&m_Font, true);
	*/
}
