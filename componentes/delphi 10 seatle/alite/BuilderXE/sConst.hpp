// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sConst.pas' rev: 22.00

#ifndef SconstHPP
#define SconstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <jpeg.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <ComCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sconst
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacOuterEffectStyle { oeNone, oeShadow, oeLowered };
#pragma option pop

#pragma option push -b-
enum TacOuterVisibility { ovNone, ovAlways };
#pragma option pop

#pragma option push -b-
enum TacGrayedMode { gmAlways, gmInactive };
#pragma option pop

#pragma option push -b-
enum TacSide { asLeft, asTop, asRight, asBottom };
#pragma option pop

#pragma option push -b-
enum TacTabLayout { tlFirst, tlLast, tlMiddle, tlSingle };
#pragma option pop

typedef System::DynamicArray<Classes::TStringList*> TStringLists;

typedef System::DynamicArray<Types::TRect> TRects;

typedef Jpeg::TJPEGImage TacJpegClass;

typedef Menus::TMenuItem TacMenuItem;

typedef System::UnicodeString ACString;

typedef System::WideChar ACChar;

typedef System::WideChar * PACChar;

typedef int ACNativeInt;

typedef int ACLongInt;

typedef unsigned ACUInt;

typedef char OldChar;

typedef char * POldChar;

typedef System::AnsiString OldString;

typedef System::PAnsiString POldString;

typedef System::UnicodeString *PACString;

typedef System::DynamicArray<Types::TRect> TAOR;

typedef void __fastcall (__closure *TPaintEvent)(System::TObject* Sender, Graphics::TCanvas* Canvas);

typedef void __fastcall (__closure *TBmpPaintEvent)(System::TObject* Sender, Graphics::TBitmap* Bmp);

typedef System::UnicodeString TsSkinName;

typedef System::UnicodeString TsDirectory;

typedef System::UnicodeString TsSkinSection;

typedef System::UnicodeString TacStrValue;

typedef System::UnicodeString TacRoot;

#pragma option push -b-
enum TFadeDirection { fdNone, fdUp, fdDown };
#pragma option pop

#pragma option push -b-
enum TacAnimType { atFading, atAero };
#pragma option pop

#pragma option push -b-
enum TacAnimTypeCtrl { atcFade, atcAero, atcBlur };
#pragma option pop

#pragma option push -b-
enum TacBtnEvent { beMouseEnter, beMouseLeave, beMouseDown, beMouseUp };
#pragma option pop

typedef System::Set<TacBtnEvent, TacBtnEvent::beMouseEnter, TacBtnEvent::beMouseUp>  TacBtnEvents;

#pragma option push -b-
enum TacCtrlType { actGraphic };
#pragma option pop

#pragma option push -b-
enum TacAnimatEvent { aeMouseEnter, aeMouseLeave, aeMouseDown, aeMouseUp, aeGlobalDef };
#pragma option pop

typedef System::Set<TacAnimatEvent, TacAnimatEvent::aeMouseEnter, TacAnimatEvent::aeGlobalDef>  TacAnimatEvents;

#pragma option push -b-
enum TacImgType { itisaBorder, itisaTexture, itisaGlyph, itisaGlow, itisaPngGlyph };
#pragma option pop

#pragma option push -b-
enum TacFillMode { fmTiled, fmStretched, fmTiledHorz, fmTiledVert, fmStretchHorzTop, fmStretchVertLeft, fmTileHorBtm, fmTileVertRight, fmStretchHorBtm, fmStretchVertRight, fmDisTiled, fmStretchHorz, fmStretchVert, fmReserved1, fmReserved2 };
#pragma option pop

#pragma option push -b-
enum TvaAlign { vaTop, vaMiddle, vaBottom };
#pragma option pop

class DELPHICLASS TsHackedControl;
class PASCALIMPLEMENTATION TsHackedControl : public Controls::TControl
{
	typedef Controls::TControl inherited;
	
public:
	__property AutoSize = {default=0};
	__property ParentColor = {default=1};
	__property Color = {default=-16777211};
	__property ParentFont = {default=1};
	__property PopupMenu;
	__property Font;
public:
	/* TControl.Create */ inline __fastcall virtual TsHackedControl(Classes::TComponent* AOwner) : Controls::TControl(AOwner) { }
	/* TControl.Destroy */ inline __fastcall virtual ~TsHackedControl(void) { }
	
};


class DELPHICLASS TAccessCanvas;
class PASCALIMPLEMENTATION TAccessCanvas : public Graphics::TCustomCanvas
{
	typedef Graphics::TCustomCanvas inherited;
	
public:
	HDC FHandle;
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TAccessCanvas(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TAccessCanvas(void) : Graphics::TCustomCanvas() { }
	
};


struct TacBGInfo;
typedef TacBGInfo *PacBGInfo;

#pragma option push -b-
enum TacBGType { btUnknown, btFill, btCache, btNotReady };
#pragma option pop

struct DECLSPEC_DRECORD TacBGInfo
{
	
public:
	Graphics::TBitmap* Bmp;
	Graphics::TColor Color;
	Types::TPoint Offset;
	Types::TRect R;
	Types::TRect FillRect;
	TacBGType BgType;
	bool PleaseDraw;
	HDC DrawDC;
};


struct DECLSPEC_DRECORD TCacheInfo
{
	
public:
	Graphics::TBitmap* Bmp;
	int X;
	int Y;
	Graphics::TColor FillColor;
	Types::TRect FillRect;
	bool Ready;
};


struct DECLSPEC_DRECORD TacPaintInfo
{
	
public:
	int State;
	int FontIndex;
	Types::TRect R;
	System::TObject* SkinManager;
};


typedef TacPaintInfo *PacPaintInfo;

typedef System::DynamicArray<Types::TPoint> TPoints;

typedef TPoints *PPoints;

typedef System::ShortInt TPercent;

typedef System::Set<System::Byte, 1, 255>  TsCodes;

#pragma option push -b-
enum TsShadowingShape { ssRectangle, ssEllipse };
#pragma option pop

#pragma option push -b-
enum TsWindowShowMode { soHide, soNormal, soShowMinimized, soMaximize, soShowNoActivate, soShow, soMinimize, soShowMinNoActive, soShowNA, soRestore, soDefault };
#pragma option pop

#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor
{
	
	union
	{
		struct 
		{
			int I;
			
		};
		struct 
		{
			System::Byte R;
			System::Byte G;
			System::Byte B;
			System::Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_RGB
{
	
	union
	{
		struct 
		{
			int Intg;
			
		};
		struct 
		{
			System::Byte Red;
			System::Byte Green;
			System::Byte Blue;
			System::Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_
{
	
	union
	{
		struct 
		{
			int I;
			
		};
		struct 
		{
			System::Byte B;
			System::Byte G;
			System::Byte R;
			System::Byte A;
			
		};
		struct 
		{
			Graphics::TColor C;
			
		};
		
	};
};
#pragma pack(pop)


#pragma pack(push,1)
struct DECLSPEC_DRECORD TsColor_RGB_
{
	
	union
	{
		struct 
		{
			int Intg;
			
		};
		struct 
		{
			System::Byte Blue;
			System::Byte Green;
			System::Byte Red;
			System::Byte Alpha;
			
		};
		struct 
		{
			Graphics::TColor Col;
			
		};
		
	};
};
#pragma pack(pop)


typedef System::StaticArray<TsColor_, 100001> TRGBAArray;

typedef TRGBAArray *PRGBAArray;

typedef System::StaticArray<TsColor_RGB_, 100001> TRGBAArray_RGB;

typedef TRGBAArray_RGB *PRGBAArray_RGB;

#pragma option push -b-
enum Sconst__3 { dgBlended, dgGrayed };
#pragma option pop

typedef System::Set<Sconst__3, Sconst__3::dgBlended, Sconst__3::dgGrayed>  TsDisabledGlyphKind;

#pragma option push -b-
enum Sconst__4 { dkBlended, dkGrayed };
#pragma option pop

typedef System::Set<Sconst__4, Sconst__4::dkBlended, Sconst__4::dkGrayed>  TsDisabledKind;

typedef TsDisabledKind *PsDisabledKind;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TsGradPie
{
	
public:
	Graphics::TColor Color1;
	Graphics::TColor Color2;
	TPercent Percent;
	int Mode1;
	int Mode2;
};
#pragma pack(pop)


typedef System::DynamicArray<TsGradPie> TsGradArray;

typedef System::StaticArray<System::UnicodeString, 4> Sconst__5;

#pragma option push -b-
enum TsCaptionLayout { sclLeft, sclTopLeft, sclTopCenter, sclTopRight, sclLeftTop, sclBottomLeft, sclBottomCenter, sclBottomRight };
#pragma option pop

typedef System::Set<Comctrls::TCalDayOfWeek, Comctrls::TCalDayOfWeek::dowMonday, Comctrls::TCalDayOfWeek::dowLocaleDefault>  TDaysOfWeek;

#pragma option push -b-
enum TDateOrder { doMDY, doDMY, doYMD };
#pragma option pop

#pragma option push -b-
enum TPopupWindowAlign { pwaRight, pwaLeft };
#pragma option pop

#pragma option push -b-
enum TacOptimizingPriority { opSpeed, opMemory };
#pragma option pop

//-- var, const, procedure ---------------------------------------------------
#define CompatibleSkinVersion  (7.450000E+00)
#define MaxCompSkinVersion  (1.099000E+01)
static const System::Word ExceptTag = 0x100;
static const System::WideChar TexChar = (System::WideChar)(0x7e);
static const System::WideChar ZeroChar = (System::WideChar)(0x30);
static const System::WideChar CharOne = (System::WideChar)(0x31);
static const System::WideChar CharQuest = (System::WideChar)(0x3f);
static const System::WideChar CharDiez = (System::WideChar)(0x23);
static const System::WideChar CharExt = (System::WideChar)(0x21);
static const System::WideChar CharGlyph = (System::WideChar)(0x40);
static const System::WideChar CharMask = (System::WideChar)(0x5e);
static const System::WideChar CharMinus = (System::WideChar)(0x2d);
static const System::WideChar CharPlus = (System::WideChar)(0x2b);
static const System::ShortInt ACS_FAST = 0x1;
static const System::ShortInt ACS_BGUNDEF = 0x2;
static const System::Word ACS_PRINTING = 0x200;
static const System::Word ACS_MNUPDATING = 0x400;
static const System::Word ACS_LOCKED = 0x800;
static const System::Word ACS_FOCUSCHANGING = 0x1000;
static const System::Word ACS_CHANGING = 0x2000;
static const System::Word ACS_BGRECEIVING = 0x4000;
static const System::ShortInt BGT_NONE = 0x0;
static const System::ShortInt BGT_GRADIENTHORZ = 0x1;
static const System::ShortInt BGT_GRADIENTVERT = 0x2;
static const System::ShortInt BGT_TEXTURE = 0x4;
static const System::ShortInt BGT_TEXTURELEFT = 0x10;
static const System::ShortInt BGT_TEXTURETOP = 0x20;
static const System::ShortInt BGT_TEXTURERIGHT = 0x40;
static const System::Byte BGT_TEXTUREBOTTOM = 0x80;
static const System::Word BTG_TOPLEFT = 0x100;
static const System::Word BGT_TOPRIGHT = 0x200;
static const System::Word BGT_BOTTOMLEFT = 0x400;
static const System::Word BGT_BOTTOMRIGHT = 0x800;
static const System::ShortInt ACT_RELCAPT = -1;
extern PACKAGE System::StaticArray<System::Byte, 8> PNGMagic;
extern PACKAGE System::StaticArray<Stdctrls::TCheckBoxState, 3> CheckBoxStates;
static const int NCS_DROPSHADOW = 0x20000;
extern PACKAGE TCacheInfo EmptyCI;
extern PACKAGE TsColor sFuchsia;
extern PACKAGE Sconst__5 sTabPositions;
#define s_RegName L"AlphaSkins"
#define s_IntSkinsPath L"IntSkinsPath"
#define s_PreviewKey L"/acpreview"
#define s_EditorCapt L"AlphaSkins Editor"
static const System::ShortInt ASE_CLOSE = 0x1;
static const System::ShortInt ASE_UPDATE = 0x2;
static const System::ShortInt ASE_HELLO = 0x3;
static const System::ShortInt ASE_ALIVE = 0x4;
static const System::Word ASE_MSG = 0xa400;
#define MasterBmpName L"Master.bmp"
#define OptionsDatName L"Options.dat"
#define acSkinExt L"asz"
#define acPngExt L"png"
#define acIcoExt L"ico"
#define s_MinusOne L"-1"
#define s_TrueStr L"TRUE"
#define s_NewFolder L"New folder"
#define s_SkinSelectItemName L"SkinSelectItem"
#define s_SkinData L"SkinData"
static const System::WideChar s_Slash = (System::WideChar)(0x5c);
static const System::WideChar s_Space = (System::WideChar)(0x20);
static const System::WideChar s_Comma = (System::WideChar)(0x2c);
static const System::WideChar s_Dot = (System::WideChar)(0x2e);
#define s_0D0A L"\r\n"
#define s_Ellipsis L"..."
static const System::ShortInt ac_MaxPropsIndex = 0x2;
static const System::ShortInt BDM_STRETCH = 0x1;
static const System::ShortInt BDM_ACTIVEONLY = 0x2;
static const System::ShortInt BDM_FILL = 0x4;
static const System::ShortInt HTSB_LEFT_BUTTON = 0x64;
static const System::ShortInt HTSB_RIGHT_BUTTON = 0x65;
static const System::ShortInt HTSB_TOP_BUTTON = 0x66;
static const System::ShortInt HTSB_BOTTOM_BUTTON = 0x67;
static const System::ShortInt HTSB_H_SCROLL = 0x68;
static const System::ShortInt HTSB_HB_SCROLL = 0x69;
static const System::ShortInt HTSB_V_SCROLL = 0x6a;
static const System::ShortInt HTSB_VB_SCROLL = 0x6b;
static const System::ShortInt HTCHILDCLOSE = 0x65;
static const System::ShortInt HTCHILDMAX = 0x66;
static const System::ShortInt HTCHILDMIN = 0x67;
static const System::ShortInt acMultipNormal = 0x2;
static const System::ShortInt acMaxIterations = 0xa;
static const System::ShortInt acTimerInterval = 0xa;
static const System::ShortInt acAnimationTime = 0x64;
extern PACKAGE System::StaticArray<TacImgType, 5> acImgTypes;
extern PACKAGE System::StaticArray<TacFillMode, 15> acFillModes;
extern PACKAGE System::StaticArray<TacBtnEvent, 5> acBtnEvents;
static const System::ShortInt COC_TsCustom = 0x1;
static const System::ShortInt COC_TsSpinEdit = 0x2;
static const System::ShortInt COC_TsEdit = 0x3;
static const System::ShortInt COC_TsMemo = 0x7;
static const System::ShortInt COC_TsListBox = 0x8;
static const System::ShortInt COC_TsColorBox = 0x9;
static const System::ShortInt COC_TsListView = 0xa;
static const System::ShortInt COC_TsCurrencyEdit = 0xc;
static const System::ShortInt COC_TsComboBox = 0xd;
static const System::ShortInt COC_TsTreeView = 0xe;
static const System::ShortInt COC_TsComboBoxEx = 0x12;
static const System::ShortInt COC_TsFrameBar = 0x13;
static const System::ShortInt COC_TsBarTitle = 0x14;
static const System::ShortInt COC_TsCheckBox = 0x20;
static const System::ShortInt COC_TsDBCheckBox = 0x20;
static const System::ShortInt COC_TsRadioButton = 0x21;
static const System::ShortInt COC_TsSlider = 0x22;
static const System::ShortInt COC_TsImage = 0x32;
static const System::ShortInt COC_TsPanel = 0x33;
static const System::ShortInt COC_TsCoolBar = 0x35;
static const System::ShortInt COC_TsToolBar = 0x36;
static const System::ShortInt COC_TsDragBar = 0x38;
static const System::ShortInt COC_TsTabSheet = 0x39;
static const System::ShortInt COC_TsScrollBox = 0x3a;
static const System::ShortInt COC_TsMonthCalendar = 0x3b;
static const System::ShortInt COC_TsGroupBox = 0x4a;
static const System::ShortInt COC_TsSplitter = 0x4b;
static const System::ShortInt COC_TsDBEdit = 0x4c;
static const System::ShortInt COC_TsDBMemo = 0x4e;
static const System::ShortInt COC_TsDBComboBox = 0x51;
static const System::ShortInt COC_TsDBLookupComboBox = 0x52;
static const System::ShortInt COC_TsDBListBox = 0x53;
static const System::ShortInt COC_TsDBLookupListBox = 0x54;
static const System::ShortInt COC_TsDBGrid = 0x55;
static const System::ShortInt COC_TsSpeedButton = 0x5c;
static const System::ShortInt COC_TsButton = 0x5d;
static const System::ShortInt COC_TsBitBtn = 0x5e;
static const System::ShortInt COC_TsNavButton = 0x62;
static const System::ShortInt COC_TsBevel = 0x6e;
static const System::Byte COC_TsFileDirEdit = 0x84;
static const System::Byte COC_TsFilenameEdit = 0x85;
static const System::Byte COC_TsDirectoryEdit = 0x86;
static const System::Byte COC_TsCustomDateEdit = 0x89;
static const System::Byte COC_TsComboEdit = 0x8a;
static const System::Byte COC_TsDateEdit = 0x8c;
static const System::Byte COC_TsPageControl = 0x8d;
static const System::Byte COC_TsScrollBar = 0x8e;
static const System::Byte COC_TsTabControl = 0x8f;
static const System::Byte COC_TsStatusBar = 0x97;
static const System::Byte COC_TsHeaderControl = 0x98;
static const System::Byte COC_TsGauge = 0xa1;
static const System::Byte COC_TsTrackBar = 0xa5;
static const System::Byte COC_TsSkinProvider = 0xe0;
static const System::Byte COC_TsMDIForm = 0xe1;
static const System::Byte COC_TsFrameAdapter = 0xe2;
static const System::Byte COC_TsAdapter = 0xe6;
static const System::Byte COC_TsAdapterEdit = 0xe7;
static const System::Byte COC_Unknown = 0xfa;
extern PACKAGE TsCodes sForbidMouse;
extern PACKAGE TsCodes sNoHotEdits;
extern PACKAGE TsCodes sCanNotBeHot;
extern PACKAGE TsCodes sEditCtrls;
extern PACKAGE TsCodes ssScrolledEdits;
extern PACKAGE Forms::TForm* sPopupCalendar;
extern PACKAGE int acWinVer;
extern PACKAGE bool acDebugMode;
extern PACKAGE unsigned acPreviewHandle;
extern PACKAGE bool acPreviewNeeded;
extern PACKAGE bool acSkinPreviewUpdating;
extern PACKAGE int acScrollBtnLength;
extern PACKAGE bool AppShowHint;
extern PACKAGE void *TempControl;
extern PACKAGE int acAnimCount;
extern PACKAGE bool ShowHintStored;
extern PACKAGE bool FadingForbidden;
extern PACKAGE bool x64woAero;
extern PACKAGE bool fGlobalFlag;
extern PACKAGE Controls::TWinControl* acMagnForm;
extern PACKAGE System::WideChar cMenuCaption;
extern PACKAGE bool ac_UseSysCharSet;
extern PACKAGE bool ac_KeepOwnFont;
extern PACKAGE bool DrawSkinnedMDIWall;
extern PACKAGE bool DrawSkinnedMDIScrolls;
extern PACKAGE int ac_DialogsLevel;
extern PACKAGE bool ac_ChangeThumbPreviews;
extern PACKAGE bool ac_AllowHotEdits;
extern PACKAGE bool StdTransparency;
extern PACKAGE int ac_CXSIZEFRAME;
extern PACKAGE int ac_CXFIXEDFRAME;
extern PACKAGE int ac_CYCAPTION;
extern PACKAGE int ac_CYSMCAPTION;
static const System::Word SC_DRAGMOVE = 0xf012;
extern PACKAGE _BLENDFUNCTION DefBlend;
extern PACKAGE System::UnicodeString acs_MsgDlgOK;
extern PACKAGE System::UnicodeString acs_MsgDlgCancel;
extern PACKAGE System::UnicodeString acs_MsgDlgHelp;
extern PACKAGE System::UnicodeString acs_RestoreStr;
extern PACKAGE System::UnicodeString acs_MoveStr;
extern PACKAGE System::UnicodeString acs_SizeStr;
extern PACKAGE System::UnicodeString acs_MinimizeStr;
extern PACKAGE System::UnicodeString acs_MaximizeStr;
extern PACKAGE System::UnicodeString acs_CloseStr;
extern PACKAGE System::UnicodeString acs_Calculator;
extern PACKAGE System::UnicodeString acs_FileOpen;
extern PACKAGE System::UnicodeString acs_AvailSkins;
extern PACKAGE System::UnicodeString acs_InternalSkin;
extern PACKAGE System::UnicodeString acs_InvalidDate;
extern PACKAGE System::UnicodeString acs_ColorDlgAdd;
extern PACKAGE System::UnicodeString acs_ColorDlgDefine;
extern PACKAGE System::UnicodeString acs_ColorDlgAddPal;
extern PACKAGE System::UnicodeString acs_ColorDlgTitle;
extern PACKAGE System::UnicodeString acs_ColorDlgRed;
extern PACKAGE System::UnicodeString acs_ColorDlgGreen;
extern PACKAGE System::UnicodeString acs_ColorDlgBlue;
extern PACKAGE System::UnicodeString acs_ColorDlgDecimal;
extern PACKAGE System::UnicodeString acs_ColorDlgHex;
extern PACKAGE System::UnicodeString acs_FrameAdapterError1;
extern PACKAGE System::UnicodeString acs_Font;
extern PACKAGE System::UnicodeString acs_FontColor;
extern PACKAGE System::UnicodeString acs_Root;
extern PACKAGE System::UnicodeString acs_SelectDir;
extern PACKAGE System::UnicodeString acs_Create;
extern PACKAGE System::UnicodeString acs_DirWithSkins;
extern PACKAGE System::UnicodeString acs_SelectSkinTitle;
extern PACKAGE System::UnicodeString acs_SkinPreview;
extern PACKAGE unsigned Lib;

}	/* namespace Sconst */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sconst;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SconstHPP
