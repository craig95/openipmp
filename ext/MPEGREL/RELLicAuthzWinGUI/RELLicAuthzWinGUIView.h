// RELLicAuthzWinGUIView.h : interface of the CRELLicAuthzWinGUIView class
//
/////////////////////////////////////////////////////////////////////////////

/***********************************************************************************
*
* COPYRIGHT AND LICENSE
*
* Copyright (c) 2003, ContentGuard Holdings, Inc.
*
* ContentGuard OPEN MPEG REL LICENSE AGREEMENT
*
*
* IMPORTANT: READ THIS AGREEMENT ("AGREEMENT") CAREFULLY. THIS SOFTWARE IS LICENSED 
* TO YOU SUBJECT TO THIS AGREEMENT. 
* 
* INSTALLING OR USING THIS SOFTWARE, CLICKING THE "I AGREE" BUTTON, OR OTHERWISE 
* ATTEMPTING TO DOWNLOAD, INSTALL, COPY, MODIFY OR USE ANY PART OF THE SOFTWARE WILL 
* INDICATE THAT YOU HAVE READ, UNDERSTOOD, AND ACCEPTED THESE TERMS AND CONDITIONS. 
* DO NOT PROCEED IN ANY SUCH MANNER UNLESS YOU ARE ABLE AND WILLING TO ENTER INTO AND 
* COMPLY WITH THIS AGREEMENT. CONTENTGUARD STRONGLY RECOMMENDS THAT YOU COPY, PRINT OUT 
* OR DOWNLOAD A COPY OF THIS AGREEMENT AND KEEP IT IN A SAFE PLACE FOR FUTURE REFERENCE. 
* IF YOU DO NOT AGREE TO THE TERMS OF THIS AGREEMENT, THEN DO NOT USE OR COPY THE 
* SOFTWARE AND IMMEDIATELY DESTROY ANY COPY OF THE SOFTWARE YOU MAY HAVE OBTAINED. 
* 
* THIS IS A LICENSE FOR SAMPLE SOFTWARE WHICH MEANS THAT THE SOFTWARE IS A LIMITED 
* VERSION WHICH CONTENTGUARD HAS NOT RELEASED FOR COMMERCIAL USE. THIS SOFTWARE MAY 
* INCUR OPERATING DIFFICULTIES BEYOND YOUR OR CONTENTGUARD�S EXPECTATIONS AND THE FINAL 
* OR COMPLETE VERSIONS OF THE SOFTWARE WHICH CONTENTGUARD MAY RELEASE FOR COMMERCIAL 
* USE IS SUBJECT TO CHANGE.
* 
* 
* 
* 1. Software Definition: The software licensed under this Agreement is the ContentGuard 
* OPEN MPEG REL (in pre-release, incomplete form) software and associated documentation 
* (the "Software"). 
* 
* 2. License Grant: ContentGuard, Inc. ("ContentGuard") hereby grants to you a royalty-free, 
* non-exclusive, license to use, reproduce, "Modify", display, perform, sublicense and 
* distribute the Software. "Modify" means to make any additions to or deletions from the 
* source code of the Software and "Modification" means any such additions or deletions. 
* No right or license is granted herein by ContentGuard other than those which are 
* expressly and unambiguously set forth in this Agreement. Without limiting the immediately 
* preceding sentence, but subject to Section 3 below, no rights or licenses are granted 
* expressly, or by implication, estoppel or otherwise, to any patent rights or trademarks 
* or trade secrets of ContentGuard or any other person in any jurisdiction.  
* 
* 3. Limited Covenant Not To Sue: ContentGuard covenants not to sue you or any person to 
* whom you distribute the Software under any patent owned or controlled by ContentGuard 
* for use of the Software in its original unmodified form.  However, this covenant does 
* not apply to (i) the Software in a form other than its original unmodified form, or 
* (ii) any service, application, system, software, product or other thing which may be 
* used in connection with the Software, or into which the Software may be incorporated, 
* or which may be incorporated into the Software. 
* 
* 4. No Additional Licenses: This Agreement does not grant you a license in any copyright, 
* patent, trademark, trade secret or other intellectual property right concerning any 
* service, application, system, software, product or other thing (including anything you 
* develop using the Software). 
* 
* 5. Grant Back and Covenant Not to Sue: (1) You grant ContentGuard a royalty-free, 
* non-exclusive, license to use, reproduce, Modify, display, perform, sublicense and 
* distribute any Modifications to the Software. (2) You covenant not to sue ContentGuard 
* or any person to whom ContentGuard distributes the Software under any patent owned or 
* controlled by you for use of any Modifications to the Software. However, this covenant 
* does not apply to (i) the Software in a form other than its original form as so Modified, 
* or (ii) any service, application, system, software, product or other thing which may be 
* used in connection with the Software as Modified, or into which the Software as Modified 
* may be incorporated, or which may be incorporated into the Software as Modified.
* 
* 6. Ownership of Software: The Software contains material that is protected by patent, 
* copyright, trade secret, trademark and other intellectual property laws, and by 
* international treaty provisions. ContentGuard retains all right, title and interest in 
* and to the Software, including all patent, copyright, trade secret, trademark, and other 
* intellectual property rights therein. 
* 
* 7. License Limitations: You may not: (i) alter, remove, or cover any patent, copyright, 
* trade secret, trademark, logo, proprietary or licensing notice(s) in or on any part of 
* the Software; (ii) directly or indirectly, export, import or transmit the Software to any 
* country in contravention of the laws of that country or the laws of the United States.  

* 8. Your Indemnity of ContentGuard: You hereby indemnify ContentGuard and hold it, its 
* parents, officers, directors, employees, and agents harmless from, and will defend them 
* against, any and all claims arising out of the use of the Software by you. 
* 
* 9. NO WARRANTY AND WARRANTY DISCLAIMER: The Software may undergo further revisions and 
* changes and may not be made available, in its complete form or otherwise, for commercial 
* licensing. This software may incur operating difficulties beyond your or ContentGuard�s 
* expectations and ContentGuard does not warrant that the Software will be free of design 
* errors or bugs. THE SOFTWARE IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND. 
* CONTENTGUARD AND ITS SUPPLIERS DISCLAIM ALL WARRANTIES, WHETHER EXPRESS OR IMPLIED 
* (INCLUDING WITHOUT LIMITATION, ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A 
* PARTICULAR PURPOSE, OR NON-INFRINGEMENT) OR STATUTORY OR OTHERWISE, REGARDING OR RELATED 
* TO THE SOFTWARE, ITS USE OR ANY INABILITY TO USE IT, THE RESULTS OF ITS USE, AND THIS 
* AGREEMENT. CONTENTGUARD DOES NOT WARRANT THAT THE SOFTWARE IS ERROR FREE OR THAT IT WILL 
* FUNCTION WITHOUT INTERRUPTION. TO THE EXTENT THAT CONTENTGUARD CANNOT DISCLAIM ANY IMPLIED 
* WARRANTIES, THE DURATION AND EXTENT OF SUCH WARRANTY SHALL BE THE MINIMUM PERIOD ALLOWED 
* UNDER ANY APPLICABLE LAW. 
* 
* 10. LIMITATION OF LIABILITY AND REMEDIES: IN NO EVENT SHALL CONTENTGUARD BE LIABLE TO YOU 
* OR ANY THIRD PARTY FOR ANY PROPERTY DAMAGE, PERSONAL INJURY, LOSS OF PROFITS, LOSS OR 
* INTERRUPTION OF BUSINESS, LOSS OF REVENUE, LOSS OF USE, LOSS OF DATA OR OTHER INFORMATION, 
* LOSS OF PRIVACY, FAILURE TO MEET ANY DUTY (INCLUDING OF GOOD FAITH OR OF REASONABLE CARE), 
* NEGLIGENCE, OR OTHER LOSS (INCLUDING PECUNIARY AND NON-PECUNIARY LOSS) OR FOR ANY INDIRECT, 
* SPECIAL, INCIDENTAL, CONSEQUENTIAL, EXEMPLARY OR PUNITIVE DAMAGES, REGARDLESS OF THE FORM 
* OR CAUSE OF ACTION (WHETHER IN AN ACTION IN CONTRACT OR TORT OR BASED ON A WARRANTY), 
* WHETHER IN CONNECTION WITH, UNDER, OR RELATED TO THIS AGREEMENT OR OTHERWISE, EVEN IF 
* CONTENTGUARD HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSSES OR DAMAGES AND EVEN IF SUCH 
* LOSSES OR  DAMAGES ARE FORESEEABLE. WE DISCLAIM ALL LIABILITY FOR INFRINGEMENT OF ANY 
* INTELLECTUAL PROPERTY RIGHTS RELATING TO THE SOFTWARE. SOME STATES/COUNTRIES DO NOT ALLOW 
* THE EXCLUSION OR LIMITATION OF LIABILITY FOR CONSEQUENTIAL OR INCIDENTAL DAMAGES, SO THE 
* ABOVE LIMITATION MAY NOT BE APPLICABLE TO YOU. IN SUCH STATES/COUNTRIES, CONTENTGUARD'S 
* LIABILITY IS LIMITED TO THE GREATEST EXTENT PERMITTED BY LAW. 
* 
* 11. Termination: ContentGuard may terminate the license of Section 2 should the Software 
* become, or in ContentGuard's opinion be likely to become, the subject of a claim of 
* infringement of a patent, trade secret, copyright, trademark, or other intellectual property 
* right.  
* 
* 12. U.S. Government Restricted Rights: The Software is provided to the U.S. government as a 
* commercial item strictly under the terms and conditions of this Agreement and includes only 
* those rights customarily available to the public. The U.S. government is not authorized to 
* permit disclosure by any agency or other part of the federal government that exceeds in any 
* way the use and disclosure rights (1) conveyed to the U.S. government in this Agreement or 
* (2) provided in FAR 12.212 (Computer Software) and (for Department of Defense use or disclosure) 
* DFAR 227.7202-3 (Rights in Commercial Computer Software or Computer Software Documentation), 
* whichever set of rights provides in (1) or (2) are the more restrictive. 
* 
* 13. Choice of Law: The rights and obligations of ContentGuard and you shall be governed by, 
* and this Agreement shall be construed in accordance with, the laws of the State of Delaware, 
* United States of America and controlling United States federal law, without regard to any 
* principles of conflict of laws which would result in a different choice of laws. Any action 
* or legal proceeding for relief arising out of or relating to this Agreement must be brought in, 
* and you and ContentGuard consent to the exclusive venue and jurisdiction of, and agree not to 
* seek transfer from, any federal and/or state courts having subject matter jurisdiction in 
* Delaware. However, you agree that ContentGuard may bring an action in any court having 
* proper venue and jurisdiction if such action seeks injunctive or other equitable relief 
* concerning protection of its intellectual property rights in the Software. 
* 
* 14. Entire Agreement: This Agreement contains the entire agreement between you and ContentGuard 
* with regard to its subject matter. Any waiver or modification of this Agreement shall be 
* effective only if it is in writing and signed by both you and ContentGuard. 
* 
* 15. Severability: The terms and conditions stated herein are declared to be severable. If a 
* court of competent jurisdiction finds any part of this Agreement invalid or unenforceable, the 
* remaining terms of this Agreement shall be valid and enforceable in such jurisdiction and this 
* Agreement will remain in effect with the provision omitted, unless omission would frustrate the 
* intent of the parties, in which case this Agreement shall immediately terminate.
***********************************************************************************/

#if !defined(AFX_RELLICAUTHZWINGUIVIEW_H__CFDDC2C6_386F_4188_A9E3_228B5FE9622E__INCLUDED_)
#define AFX_RELLICAUTHZWINGUIVIEW_H__CFDDC2C6_386F_4188_A9E3_228B5FE9622E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CRELLicAuthzWinGUIView : public CFormView
{
protected: // create from serialization only
	CRELLicAuthzWinGUIView();
	DECLARE_DYNCREATE(CRELLicAuthzWinGUIView)

public:
	//{{AFX_DATA(CRELLicAuthzWinGUIView)
	enum{ IDD = IDD_RELLICAUTHZWINGUI_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CRELLicAuthzWinGUIDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRELLicAuthzWinGUIView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CRELLicAuthzWinGUIView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CRELLicAuthzWinGUIView)
	afx_msg void OnBrowseLicFile();
	afx_msg void OnBrowseQueryFile();
	afx_msg void OnTest();
	afx_msg void OnCheckLog();
	afx_msg void OnBnClearLog();
	afx_msg void OnHelpReadme();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

protected:
	CString ShowFileDialog(CString strTitle);
	CString GetLogFileContents(TCHAR *tLogFileName);
	void RenameLogFile();

private:
	BOOL m_bIssuerAndConditionPrint;
	BOOL m_bLog;
	BOOL m_bValidate;

	TCHAR *m_tLogFileName;
	CString m_strCurrDir;
};

#ifndef _DEBUG  // debug version in RELLicAuthzWinGUIView.cpp
inline CRELLicAuthzWinGUIDoc* CRELLicAuthzWinGUIView::GetDocument()
   { return (CRELLicAuthzWinGUIDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RELLICAUTHZWINGUIVIEW_H__CFDDC2C6_386F_4188_A9E3_228B5FE9622E__INCLUDED_)
