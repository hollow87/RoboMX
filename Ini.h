/*
** Copyright (C) 2002-2004 Bender
**  
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

#ifndef INI_H_INCLUDED
#define INI_H_INCLUDED

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CIni  
{
private:

	CString	m_strFileName;

public:
	BOOL	SetValue( const CString& strSection, const CString& strItem, const CString& strVal );
	BOOL	SetValue( const CString& strSection, const CString& strItem, const int iVal );
	BOOL	SetValue( const CString& strSection, const CString& strItem, const long lVal );
	BOOL	SetValue( const CString& strSection, const CString& strItem, const DWORD lVal );


	CString GetValue( const CString& strSection, const CString& strItem, CString strDefault, unsigned int nMaxLen = 1024);
	int		GetValue( const CString& strSection, const CString& strItem, const int nDefault );
	LONG	GetValue( const CString& strSection, const CString& strItem, const LONG nDefault );
	DWORD	GetValue( const CString& strSection, const CString& strItem, const DWORD nDefault );

	CIni( );
	virtual ~CIni();

	void SetIniFileName( const CString& strFileName ) { m_strFileName = strFileName; }
};

#endif