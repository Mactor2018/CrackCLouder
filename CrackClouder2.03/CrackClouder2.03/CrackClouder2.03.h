
// CrackClouder2.03.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CCrackClouder203App: 
// �йش����ʵ�֣������ CrackClouder2.03.cpp
//

class CCrackClouder203App : public CWinApp
{
public:
	CCrackClouder203App();
	CFont m_Font;
	CFont Gx_t1;
	CFont Gx_t2;
// ��д
public:
	virtual BOOL InitInstance();
//	CFont m_Font;
// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CCrackClouder203App theApp;