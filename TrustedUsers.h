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


// TrustedUsers dialog

class TrustedUsers : public CDialog
{
	DECLARE_DYNAMIC(TrustedUsers)

public:
	TrustedUsers(CWnd* pParent = NULL);   // standard constructor
	virtual ~TrustedUsers();

// Dialog Data
	enum { IDD = IDD_TRUSTED_USERS };
	CString		m_strAdd;
	CListBox	m_lbTrusted;
	BOOL		m_bPMTrusted;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAdd();
	afx_msg void OnBnClickedRemove();
	afx_msg void OnBnClickedOk();
};
