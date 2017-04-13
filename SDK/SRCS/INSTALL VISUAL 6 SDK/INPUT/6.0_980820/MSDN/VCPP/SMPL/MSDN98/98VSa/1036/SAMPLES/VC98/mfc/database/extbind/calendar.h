#ifndef __CALENDAR_H__
#define __CALENDAR_H__

// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CCalendar wrapper class

class CCalendar : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCalendar)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8e27c92b, 0x1264, 0x101c, { 0x8a, 0x2f, 0x4, 0x2, 0x24, 0x0, 0x9c, 0x2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

	BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	unsigned long GetBackColor();
	void SetBackColor(unsigned long newValue);
	short GetDay();
	void SetDay(short nNewValue);
	LPDISPATCH GetDayFont();
	void SetDayFont(LPDISPATCH newValue);
	unsigned long GetDayFontColor();
	void SetDayFontColor(unsigned long newValue);
	short GetDayLength();
	void SetDayLength(short nNewValue);
	short GetFirstDay();
	void SetFirstDay(short nNewValue);
	long GetGridCellEffect();
	void SetGridCellEffect(long nNewValue);
	LPDISPATCH GetGridFont();
	void SetGridFont(LPDISPATCH newValue);
	unsigned long GetGridFontColor();
	void SetGridFontColor(unsigned long newValue);
	unsigned long GetGridLinesColor();
	void SetGridLinesColor(unsigned long newValue);
	short GetMonth();
	void SetMonth(short nNewValue);
	short GetMonthLength();
	void SetMonthLength(short nNewValue);
	BOOL GetShowDateSelectors();
	void SetShowDateSelectors(BOOL bNewValue);
	BOOL GetShowDays();
	void SetShowDays(BOOL bNewValue);
	BOOL GetShowHorizontalGrid();
	void SetShowHorizontalGrid(BOOL bNewValue);
	BOOL GetShowTitle();
	void SetShowTitle(BOOL bNewValue);
	BOOL GetShowVerticalGrid();
	void SetShowVerticalGrid(BOOL bNewValue);
	LPDISPATCH GetTitleFont();
	void SetTitleFont(LPDISPATCH newValue);
	unsigned long GetTitleFontColor();
	void SetTitleFontColor(unsigned long newValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	BOOL GetValueIsNull();
	void SetValueIsNull(BOOL bNewValue);
	short GetYear();
	void SetYear(short nNewValue);
	void NextDay();
	void NextMonth();
	void NextWeek();
	void NextYear();
	void PreviousDay();
	void PreviousMonth();
	void PreviousWeek();
	void PreviousYear();
	void Refresh();
	void Today();
	void AboutBox();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // __CALENDAR_H__