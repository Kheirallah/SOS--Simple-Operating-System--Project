//Required header files
#include <iostream>
#include <string>
#include <queue>
#include <windows.h>
#include <process.h>
#include <Tlhelp32.h>
#include <winbase.h>
#include <time.h>

#using <System.dll>

using namespace System;
using namespace System::Diagnostics;
using namespace System::ComponentModel;
using namespace std;

clock_t start;

//Functions to run and kill processes
void processOne()
{
	Process::Start("chrome.exe");
}

void killOne()
{
	clock_t end;
	system("taskkill /F /IM chrome.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took "<< end / CLOCKS_PER_SEC << " seconds."<< endl;
}

void processTwo()
{
	Process::Start("iexplore.exe");
}

void killTwo()
{
	clock_t end;
	system("taskkill /F /IM iexplore.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processThree()
{
	Process::Start("firefox.exe");
}

void killThree()
{
	clock_t end;
	system("taskkill /F /IM firefox.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processFour()
{
	Process::Start("wireshark.exe");
}

void killFour()
{
	clock_t end;
	system("taskkill /F /IM wireshark.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processFive()
{
	Process::Start("wmplayer.exe");
}

void killFive()
{
	clock_t end;
	system("taskkill /F /IM wmplayer.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processSix()
{
	Process::Start("notepad++.exe");
}

void killSix()
{
	clock_t end;
	system("taskkill /F /IM notepad++.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processSeven()
{
	Process::Start("notepad.exe");
}

void killSeven()
{
	clock_t end;
	system("taskkill /F /IM notepad.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processEight()
{
	Process::Start("AcroRd32.exe");
}

void killEight()
{
	clock_t end;
	system("taskkill /F /IM AcroRd32.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processNine()
{
	Process::Start("sqlplusw.exe");
}

void killNine()
{
	clock_t end;
	system("taskkill /F /IM sqlplusw.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}

void processTen()
{
	Process::Start("mspaint.exe");
}

void killTen()
{
	clock_t end;
	system("taskkill /F /IM mspaint.exe >nul 2>&1");
	end = clock() - start;
	cout << "This process took " << end / CLOCKS_PER_SEC << " seconds." << endl;
}
