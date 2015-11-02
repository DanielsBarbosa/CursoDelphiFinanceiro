// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sStyleSimply.pas' rev: 22.00

#ifndef SstylesimplyHPP
#define SstylesimplyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sSkinProps.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sstylesimply
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TacSection { ssMenuItem, ssCheckBox, ssSpeedButton, ssSpeedButton_Small, ssToolButton, ssTransparent, ssGroupBox, ssDivider, ssWebBtn, ssButton, ssToolBar, ssEdit, ssGauge, ssSelection, ssStatusBar, ssPanel, ssPanelLow, ssTrackBar, ssColHeader, ssProgressV, ssDragBar, ssGripH, ssGripV, ssProgressH, ssTabSheet, ssMenuButton, ssUpDown, ssComboBox };
#pragma option pop

typedef System::StaticArray<System::UnicodeString, 28> Sstylesimply__1;

class DELPHICLASS TsSkinData;
class PASCALIMPLEMENTATION TsSkinData : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	bool Active;
	bool UseAeroBluring;
	System::UnicodeString Author;
	System::UnicodeString SkinPath;
	System::UnicodeString Description;
	int Shadow1Offset;
	int Shadow1Blur;
	int Shadow1Transparency;
	int ExBorderWidth;
	int ExTitleHeight;
	int ExMaxHeight;
	int ExContentOffs;
	int ExCenterOffs;
	int ExDrawMode;
	int ExShadowOffs;
	int ExShadowOffsR;
	int ExShadowOffsT;
	int ExShadowOffsB;
	int BISpacing;
	int BIVAlign;
	int BIRightMargin;
	int BILeftMargin;
	int BITopMargin;
	int BIKeepHUE;
	int BICloseGlow;
	int BICloseGlowMargin;
	int BIMaxGlow;
	int BIMaxGlowMargin;
	int BIMinGlow;
	int BIMinGlowMargin;
	int ComboBoxMargin;
	int BrightMin;
	int BrightMax;
	int TabsCovering;
	int RibbonCovering;
	Graphics::TColor FXColor;
	Graphics::TColor Shadow1Color;
	double Version;
	__fastcall virtual ~TsSkinData(void);
public:
	/* TObject.Create */ inline __fastcall TsSkinData(void) : System::TObject() { }
	
};


struct DECLSPEC_DRECORD TacConstElementData
{
	
public:
	int SkinIndex;
	int MaskIndex;
	int GlyphIndex;
	System::StaticArray<int, 3> BGIndex;
	System::UnicodeString SkinSection;
};


typedef System::StaticArray<int, 28> TacIntSections;

typedef System::StaticArray<TacConstElementData, 4> TacSideElements;

typedef System::StaticArray<TacConstElementData, 2> TacBoolElements;

typedef System::StaticArray<System::StaticArray<TacConstElementData, 4>, 4> TacAllTabs;

struct DECLSPEC_DRECORD TConstantSkinData
{
	
public:
	TacSideElements Scrolls;
	TacSideElements ScrollBtns;
	TacSideElements UpDownBtns;
	TacBoolElements Sliders;
	TacConstElementData MenuItem;
	TacConstElementData ComboBtn;
	int MaskCloseBtn;
	int MaskCloseAloneBtn;
	int MaskMaxBtn;
	int MaskNormBtn;
	int MaskMinBtn;
	int MaskHelpBtn;
	int MaskCloseSmall;
	int MaskMaxSmall;
	int MaskNormSmall;
	int MaskMinSmall;
	int MaskHelpSmall;
	System::StaticArray<int, 2> RadioButton;
	System::StaticArray<int, 3> CheckBox;
	System::StaticArray<int, 3> SmallCheckBox;
	int ExBorder;
	int IndexGLobalInfo;
	int GripRightBottom;
	int GripHorizontal;
	int GripVertical;
	TacIntSections Sections;
	TacAllTabs Tabs;
};


typedef System::DynamicArray<Classes::TComponent*> Sstylesimply__3;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Sstylesimply__1 acSectNames;
extern PACKAGE Graphics::TIcon* AppIcon;
extern PACKAGE Graphics::TIcon* AppIconLarge;
extern PACKAGE bool aSkinChanging;
extern PACKAGE Sstylesimply__3 HookedComponents;
extern PACKAGE bool __fastcall SectionInArray(int const *Sections, const int Value, TacSection RangeMin = (TacSection)(0x0), TacSection RangeMax = (TacSection)(0x8));
extern PACKAGE void __fastcall CopyExForms(Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall LockForms(Classes::TComponent* SkinManager);
extern PACKAGE void __fastcall UnLockForms(Classes::TComponent* SkinManager, bool Repaint = true);
extern PACKAGE void __fastcall AppBroadCastS(void *Message);
extern PACKAGE void __fastcall SendToHooked(void *Message);
extern PACKAGE void __fastcall IntSkinForm(Forms::TCustomForm* Form);
extern PACKAGE void __fastcall IntUnSkinForm(Forms::TCustomForm* Form);

}	/* namespace Sstylesimply */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sstylesimply;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SstylesimplyHPP
