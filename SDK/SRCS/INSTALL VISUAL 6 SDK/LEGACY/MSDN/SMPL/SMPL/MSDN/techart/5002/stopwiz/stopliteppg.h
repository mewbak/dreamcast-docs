// StopLitePpg.h : Declaration of the CStopLitePropPage property page class.

////////////////////////////////////////////////////////////////////////////
// CStopLitePropPage : See StopLitePpg.cpp.cpp for implementation.

class CStopLitePropPage : public COlePropertyPage
{
	DECLARE_DYNCREATE(CStopLitePropPage)
	DECLARE_OLECREATE_EX(CStopLitePropPage)

// Constructor
public:
	CStopLitePropPage();

// Dialog Data
	//{{AFX_DATA(CStopLitePropPage)
	enum { IDD = IDD_PROPPAGE_STOPLITE };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA

// Implementation
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Message maps
protected:
	//{{AFX_MSG(CStopLitePropPage)
		// NOTE - ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};