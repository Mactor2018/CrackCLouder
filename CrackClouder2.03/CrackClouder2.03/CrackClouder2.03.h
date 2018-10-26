
// CrackClouder2.03.h : PROJECT_NAME 应用程序的主头文件
//

#pragma once

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#include "resource.h"		// 主符号


// CCrackClouder203App: 
// 有关此类的实现，请参阅 CrackClouder2.03.cpp
//

class CCrackClouder203App : public CWinApp
{
public:
	CCrackClouder203App();
	CFont m_Font;
	CFont Gx_t1;
	CFont Gx_t2;
// 重写
public:
	virtual BOOL InitInstance();
//	CFont m_Font;
// 实现

	DECLARE_MESSAGE_MAP()
};

extern CCrackClouder203App theApp;