
// CrackClouder2.03Dlg.cpp : 实现文件
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


// 用于应用程序“关于”菜单项的 CAboutDlg 对话框

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
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


// CCrackClouder203Dlg 对话框



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


// CCrackClouder203Dlg 消息处理程序

BOOL CCrackClouder203Dlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
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

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO:  在此添加额外的初始化代码
	CString text = _T("本程序已在Github上开源。\nThis Programme is OPEN SOURCE on GITHUB!!");
	CString title = _T("本程序已在Github上开源。\nThis Programme is OPEN SOURCE on GITHUB!!");
	if (
		MessageBoxW(text, title, MB_ICONINFORMATION | MB_YESNO)
		== IDYES
		){
	}
	else
	{
		CDialogEx::OnOK();
	}
	
	m_Font.CreatePointFont(120, _T("微软雅黑"), NULL);
	m_static.SetFont(&m_Font, true);
	m_static.SetWindowText(_T("本程序已在Github上开源。\nThis Programme is OPEN SOURCE on GITHUB!!"));
	
	
	//变量bt1用于判断点击状态
	int bt1 = 0;
	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
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

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCrackClouder203Dlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCrackClouder203Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CCrackClouder203Dlg::OnStnClickedText1()
{
	// TODO:  在此添加控件通知处理程序代码
}


void CCrackClouder203Dlg::OnBnClickedButton1()
{
	// TODO:  在此添加控件通知处理程序代码
	// TODO:  在此添加控件通知处理程序代码

	/*	if (
	FileE(_T("C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe"))
	== TRUE
	)
	*/
	if (-1 != GetFileAttributes(_T("C:\\Program Files\\iClass\\StudentClient"))) //如果文件夹存在， 最后的\\号有无都没关系
	{
		//文件存在 解锁按钮
		if (
			MessageBoxW(_T("检测完毕！你可以使用了。 后果自负哦~\n是否决定承担一切负担及责任并开始使用？"), _T("提示 | By Mactor "), MB_ICONASTERISK | MB_YESNO)
			== IDYES)
		{
			m_button1.EnableWindow(1);
			m_button2.EnableWindow(1);
		}
		else
		{
			if (
				MessageBoxW(_T("那就退出吧？"), _T("确认退出 | By Mactor "), MB_ICONQUESTION | MB_YESNO)
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
		MessageBoxW(_T("未检测到文件！"), _T("提示 | By Mactor "), MB_ICONERROR | MB_OK);
	}
}


void CCrackClouder203Dlg::OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult)
{
	// TODO:  在此添加控件通知处理程序代码
	
	*pResult = 0;

/*	
我的博客因时间原因 已停运  因此注释了
ShellExecute(0, NULL, _T("http:/{DELETED}"), NULL, NULL, SW_NORMAL);
	MessageBoxW(_T("正在跳转 请稍后..欢迎访问！！\n PS:若出现乱码请使用Chrome浏览器打开"), _T("Mactor | {DELETED}"), MB_OK);
*/
}


void CCrackClouder203Dlg::OnBnClickedButton3()
{
	// TODO:  在此添加控件通知处理程序代码
	char oldname[80] = "C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe", newname[80] = "C:\\Program Files\\iClass\\StudentClient\\MactorCracked.mctx";

	if (rename(oldname, newname) == 0)
	{
		if (
			MessageBoxW(_T("破解完成！点击确定重启完成脱控！"), _T("破解成功 "), MB_OK | MB_ICONINFORMATION)
			== IDOK
			){
			system("start /b shutdown -r -t 1 ");

			//AutoRun(1);

		}
	}
	else
	{
		MessageBoxW(_T("破解失败！请检查文件是否被占用或该破解方法被和谐可联系作者反馈。"), _T("Error 102: 破解失败"), MB_OK | MB_ICONERROR);
	}

}


void CCrackClouder203Dlg::OnBnClickedButton4()
{
	// 使用必读
	CString text = _T("欢迎使用！"); //2021-11-12删去部分个人信息
	CString title = _T("必读 - 重要提示");
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
	//一键还原

	char oldname[80] = "C:\\Program Files\\iClass\\StudentClient\\StudentClient.exe", newname[80] = "C:\\Program Files\\iClass\\StudentClient\\MactorCracked.mctx";

	if (rename(newname, oldname) == 0)
	{
		if (
			MessageBoxW(_T("已恢复文件！即将连接上教师电脑。\nPS:如果想再次解除控制，你还可以使用本软件"), _T("已恢复！ "), MB_OK | MB_ICONINFORMATION)
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
	// 卸载
	MessageBoxW(_T("必须在已解除控制后才可以卸载，否则卸载不成功\nPS:懒得搞检验了"), _T("提示 | By Mactor"), MB_ICONINFORMATION | MB_OK);
	//system("C:\\Program Files\\iClass\\StudentClient\\uninstall.exe");
	ShellExecute(NULL, _T("open"), _T("C:\\Program Files\\iClass\\StudentClient\\uninstall.exe"), NULL, NULL, SW_SHOWNORMAL);

}


void CCrackClouder203Dlg::OnBnClickedButton7()
{
	// TODO:  在此添加控件通知处理程序代码
	//版权
	CaboutDlg  aboutDlg;
	aboutDlg.DoModal();
}


void CCrackClouder203Dlg::OnBnClickedButton9()
{
	// TODO:  在此添加控件通知处理程序代码
	//更新日志
	GxDlg GxMsg;
	GxMsg.DoModal();

	
	/*
	
	m_Font.CreatePointFont(120, _T("微软雅黑"), NULL);
	m_static.SetFont(&m_Font, true);
	*/
}
