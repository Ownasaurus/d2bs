#pragma once

#include <list>
#include <string>
#include <windows.h>

#include "D2Structs.h"

bool SplitLines(const std::string &str, size_t maxlen, const char delim, std::list<std::string> &lst);
void Print(const char *szFormat, ...);
void __fastcall Say(const char *szMessage, ...);
bool ClickMap(DWORD dwClickType, int wX, int wY, BOOL bShift, UnitAny *pUnit);
void LoadMPQ(const char *mpq);
int UTF8FindByteIndex(std::string str, int maxutf8len);
int UTF8Length(std::string str);
