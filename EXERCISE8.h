// EXERCISE8.h : main header file for the EXERCISE8 DLL
//

#pragma once

#ifndef __AFXWIN_H__

#error "include 'pch.h' before including this file for PCH"

#endif

#include "resource.h"		// main symbols

#include <Windows.h>

#include<arxHeaders.h>

#include <dbents.h>

//

class CEXERCISE8App : public CWinApp

{

public:

	CEXERCISE8App();

	// Overrides

public:

	virtual BOOL InitInstance();

	// Member function to change colour

	static void changeColor();

	DECLARE_MESSAGE_MAP()

};
// Entry point function
static int AcRxEntryPoint(AcRx::AppMsgCode Msg, void* pkt);