/*
** Copyright (C) 2004 Bender
**  
** RoboMX is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** RoboMX is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software 
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
*/

#pragma once

class Util
{
public:
	static BOOL CreateDirs(CString strFilename);
	static int ScanMessage(char *pBuff, WORD wMaxSize, char *lpszFormat, ...);
	static WORD FormatMXMessage(WORD wType, char *pBuff, char *lpszFormat, ...);
	static CString FormatIP(DWORD dwIP);
	static CString FormatLine(WORD wLine);
	static CString Formatint(int nNumber);
	static int axtoi(char *hexStg, int nLen);
	static int ShellExecuteWait(const CString strExec, const CString strParam);
	static void MakeValidUserName(CString& strName, BOOL bWPN, WORD wID = 0);
	static BOOL GetExtWinampVars(CString& rData);

	static CString GetStayTime(DWORD dwJointime);
	static CString GetMyLocalTime(void);
	static void ReplaceVars(CString& strMsg);
	static CString GetMySystemInfo();
	static CString GetMySystemInfoEx(void);
	static CString GetWinampSong();
	static BOOL    IsVideoPlaying();
	static CString GetUpTime();

	static BOOL FileExists(LPCTSTR lpszFile);
	static CString MakeValidFilename(CString strName);
	static CString GetDateString(void);
	static CString GetIPFromRoom(CString strRoom);
	static CString GetMyDate(void);
	static CString LoadString(UINT nID);
	static CString GetBaseName(const CString, BOOL bNoAdd = FALSE, BOOL bNoID = FALSE);
	static BOOL WildcardMatch(CString strString, CString strSearch, BOOL bStartWild = FALSE, BOOL bCase = TRUE);
	static void BaseName(CString& strName);
	static CString GetBaseRoomName(CString strRoom);
	static CString FormatFloat(float fNum);
	static CString GetIdleTime(DWORD dwIdleSince);
};

LPCTSTR _tcsistr(LPCTSTR pszString, LPCTSTR pszPattern);
