#pragma once  //______________________________________ Temperatura.h  
#include "Resource.h"
class Temperatura: public Win::Dialog
{
public:
	Temperatura()
	{
	}
	~Temperatura()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Textbox tbxFarenheit;
	Win::Textbox tbxCelsius;
	Win::Button btConvert;
	Win::Label lb1;
	Win::Label lb2;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(12.80583);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.98438);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"Temperatura";
		tbxFarenheit.CreateX(WS_EX_CLIENTEDGE, L"Farenheit", WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 0.58208, 1.19063, 3.36021, 0.60854, hWnd, 1000);
		tbxCelsius.CreateX(WS_EX_CLIENTEDGE, L"Celsius", WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 8.14917, 1.19063, 4.47146, 0.60854, hWnd, 1001);
		btConvert.CreateX(NULL, L"Convert", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.65667, 1.11125, 2.98979, 0.68792, hWnd, 1002);
		lb1.CreateX(NULL, L"Farenheit", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 0.71437, 0.21167, 3.20146, 0.60854, hWnd, 1003);
		lb2.CreateX(NULL, L"Celsius", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 8.17563, 0.21167, 4.39208, 0.60854, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		tbxFarenheit.Font = fontArial009A;
		tbxCelsius.Font = fontArial009A;
		btConvert.Font = fontArial009A;
		lb1.Font = fontArial009A;
		lb2.Font = fontArial009A;
	}
	//_________________________________________________
	void btConvert_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btConvert.IsEvent(e, BN_CLICKED)) {btConvert_Click(e); return true;}
		return false;
	}
};
