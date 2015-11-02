// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sCommonData.pas' rev: 22.00

#ifndef ScommondataHPP
#define ScommondataHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sLabel.hpp>	// Pascal unit
#include <acThdTimer.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Scommondata
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TacOuterEffects;
class DELPHICLASS TsCommonData;
class PASCALIMPLEMENTATION TacOuterEffects : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	TsCommonData* FOwner;
	Sconst::TacOuterVisibility FVisibility;
	void __fastcall SetVisibility(const Sconst::TacOuterVisibility Value);
	
public:
	void __fastcall Invalidate(void);
	__fastcall TacOuterEffects(TsCommonData* AOwner);
	
__published:
	__property Sconst::TacOuterVisibility Visibility = {read=FVisibility, write=SetVisibility, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOuterEffects(void) { }
	
};


class PASCALIMPLEMENTATION TsCommonData : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
protected:
	bool FCustomFont;
	bool FCustomColor;
	Graphics::TBitmap* FOuterCache;
	int FUpdateCount;
	System::UnicodeString FSkinSection;
	TacOuterEffects* FOuterEffects;
	bool __fastcall GetUpdating(void);
	void __fastcall SetSkinSection(const System::UnicodeString Value);
	void __fastcall SetCustomColor(const bool Value);
	void __fastcall SetCustomFont(const bool Value);
	void __fastcall SetHUEOffset(const int Value);
	void __fastcall SetSaturation(const int Value);
	void __fastcall SetColorTone(const Graphics::TColor Value);
	void __fastcall SetSkinManager(const Sskinmanager::TsSkinManager* Value);
	void __fastcall PaintOuter(Sconst::PacBGInfo PBGInfo, System::Word Data);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	
public:
	bool FFocused;
	bool FUpdating;
	bool FMouseAbove;
	bool HalfVisible;
	bool Loading;
	int COC;
	int GlowID;
	int Texture;
	int FHUEOffset;
	int FSaturation;
	int BorderIndex;
	int HotTexture;
	HDC PrintDC;
	Graphics::TBitmap* FCacheBmp;
	Graphics::TColor FColorTone;
	unsigned FSWHandle;
	System::TObject* FOwnerObject;
	Controls::TControl* FOwnerControl;
	Sskinmanager::TsSkinManager* FSkinManager;
	Acthdtimer::TacThreadedTimer* AnimTimer;
	System::Word BGType;
	System::Word CtrlSkinState;
	Types::TRect InvalidRectH;
	Types::TRect InvalidRectV;
	bool BGChanged;
	int SkinIndex;
	__property bool Updating = {read=GetUpdating, write=FUpdating, default=0};
	__fastcall virtual TsCommonData(System::TObject* AOwner, const bool CreateCacheBmp);
	void __fastcall UpdateIndexes(bool UpdateMain = true);
	void __fastcall PaintOuterEffects(Controls::TWinControl* OwnerCtrl, const Types::TPoint &Offset);
	__fastcall virtual ~TsCommonData(void);
	void __fastcall Loaded(void);
	bool __fastcall RepaintIfMoved(void);
	bool __fastcall ManagerStored(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(const bool Repaint = false);
	void __fastcall Invalidate(const bool UpdateNow = false);
	bool __fastcall Skinned(const bool CheckSkinActive = false);
	unsigned __fastcall OwnerHandle(void);
	__property int HUEOffset = {read=FHUEOffset, write=SetHUEOffset, default=0};
	__property int Saturation = {read=FSaturation, write=SetSaturation, default=0};
	__property Graphics::TColor ColorTone = {read=FColorTone, write=SetColorTone, default=536870911};
	
__published:
	__property bool CustomColor = {read=FCustomColor, write=SetCustomColor, default=0};
	__property bool CustomFont = {read=FCustomFont, write=SetCustomFont, default=0};
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property System::UnicodeString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property TacOuterEffects* OuterEffects = {read=FOuterEffects, write=FOuterEffects};
};


class DELPHICLASS TsCtrlSkinData;
class PASCALIMPLEMENTATION TsCtrlSkinData : public TsCommonData
{
	typedef TsCommonData inherited;
	
__published:
	__property HUEOffset = {default=0};
	__property Saturation = {default=0};
	__property ColorTone = {default=536870911};
public:
	/* TsCommonData.Create */ inline __fastcall virtual TsCtrlSkinData(System::TObject* AOwner, const bool CreateCacheBmp) : TsCommonData(AOwner, CreateCacheBmp) { }
	/* TsCommonData.Destroy */ inline __fastcall virtual ~TsCtrlSkinData(void) { }
	
};


class DELPHICLASS TacScrollData;
class PASCALIMPLEMENTATION TacScrollData : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FScrollWidth;
	int FButtonsSize;
	void __fastcall SetScrollWidth(const int Value);
	void __fastcall SetButtonsSize(const int Value);
	
protected:
	TsCommonData* FOwner;
	
public:
	__fastcall TacScrollData(TsCommonData* AOwner);
	void __fastcall Invalidate(void);
	
__published:
	__property int ScrollWidth = {read=FScrollWidth, write=SetScrollWidth, default=-1};
	__property int ButtonsSize = {read=FButtonsSize, write=SetButtonsSize, default=-1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacScrollData(void) { }
	
};


class DELPHICLASS TsScrollWndData;
class PASCALIMPLEMENTATION TsScrollWndData : public TsCommonData
{
	typedef TsCommonData inherited;
	
private:
	TacScrollData* FHorzScrollData;
	TacScrollData* FVertScrollData;
	
public:
	__fastcall virtual TsScrollWndData(System::TObject* AOwner, const bool CreateCacheBmp);
	__fastcall virtual ~TsScrollWndData(void);
	
__published:
	__property TacScrollData* VertScrollData = {read=FVertScrollData, write=FVertScrollData};
	__property TacScrollData* HorzScrollData = {read=FHorzScrollData, write=FHorzScrollData};
};


class DELPHICLASS TsBoundLabel;
class PASCALIMPLEMENTATION TsBoundLabel : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FIndent;
	int FMaxWidth;
	bool FUseHTML;
	bool FEnabledAlways;
	Graphics::TFont* FFont;
	System::UnicodeString FText;
	Sconst::TsCaptionLayout FLayout;
	bool FAllowClick;
	Graphics::TFont* __fastcall GetFont(void);
	void __fastcall UpdateAlignment(void);
	bool __fastcall GetUseSkin(void);
	void __fastcall DoClick(System::TObject* Sender);
	void __fastcall SetFont(const Graphics::TFont* Value);
	void __fastcall SetActive(const bool Value);
	void __fastcall SetUseSkin(const bool Value);
	void __fastcall SetUseHTML(const bool Value);
	void __fastcall SetMaxWidth(const int Value);
	void __fastcall SetIndent(const int Value);
	void __fastcall SetText(const System::UnicodeString Value);
	void __fastcall SetLayout(const Sconst::TsCaptionLayout Value);
	void __fastcall SetEnabledAlways(const bool Value);
	void __fastcall SetAllowClick(const bool Value);
	
public:
	bool FActive;
	Slabel::TsEditLabel* FTheLabel;
	TsCommonData* FCommonData;
	void __fastcall AlignLabel(void);
	bool __fastcall DoStoreFont(void);
	__fastcall TsBoundLabel(System::TObject* AOwner, const TsCommonData* CommonData);
	__fastcall virtual ~TsBoundLabel(void);
	void __fastcall HandleOwnerMsg(const Messages::TMessage &Message, const Controls::TControl* OwnerControl);
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property bool AllowClick = {read=FAllowClick, write=SetAllowClick, default=0};
	__property System::UnicodeString Caption = {read=FText, write=SetText};
	__property bool EnabledAlways = {read=FEnabledAlways, write=SetEnabledAlways, default=0};
	__property int Indent = {read=FIndent, write=SetIndent, default=0};
	__property Graphics::TFont* Font = {read=GetFont, write=SetFont, stored=DoStoreFont};
	__property Sconst::TsCaptionLayout Layout = {read=FLayout, write=SetLayout, default=0};
	__property int MaxWidth = {read=FMaxWidth, write=SetMaxWidth, default=0};
	__property bool UseHTML = {read=FUseHTML, write=SetUseHTML, default=0};
	__property bool UseSkinColor = {read=GetUseSkin, write=SetUseSkin, default=1};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE Sconst::TsColor C1;
extern PACKAGE Sconst::TsColor C2;
extern PACKAGE bool RestrictDrawing;
extern PACKAGE void __fastcall StopTimer(TsCommonData* SkinData)/* overload */;
extern PACKAGE void __fastcall StopTimer(Acthdtimer::TacThreadedTimer* &Timer)/* overload */;
extern PACKAGE void __fastcall FinishTimer(Acthdtimer::TacThreadedTimer* ATimer);
extern PACKAGE bool __fastcall TimerIsActive(TsCommonData* SkinData);
extern PACKAGE bool __fastcall IsCached(const TsCommonData* SkinData);
extern PACKAGE bool __fastcall HaveOuterEffects(TsCommonData* SkinData);
extern PACKAGE bool __fastcall InUpdating(const TsCommonData* SkinData, const bool Reset = false);
extern PACKAGE void __fastcall InitBGInfo(const TsCommonData* SkinData, const Sconst::PacBGInfo PBGInfo, const int State, unsigned Handle = (unsigned)(0x0));
extern PACKAGE Graphics::TColor __fastcall GetBGColor(const TsCommonData* SkinData, const int State, const unsigned Handle = (unsigned)(0x0));
extern PACKAGE int __fastcall GetFontIndex(const Controls::TControl* Ctrl, const int DefSkinIndex, const Sskinmanager::TsSkinManager* SkinManager, const int State = 0x0)/* overload */;
extern PACKAGE int __fastcall GetFontIndex(const Controls::TControl* Ctrl, Sconst::PacPaintInfo pInfo)/* overload */;
extern PACKAGE void __fastcall ShowGlowingIfNeeded(const TsCommonData* SkinData, const bool Clicked = false, const HWND CtrlHandle = (HWND)(0x0), System::Byte Alpha = (System::Byte)(0xff), bool DoAnimation = false, int ASkinIndex = 0xffffffff);
extern PACKAGE void __fastcall UpdateBmpColors(Graphics::TBitmap* Bmp, TsCommonData* SkinData, bool CheckCorners, int State);
extern PACKAGE void __fastcall InitCacheBmp(const TsCommonData* SkinData);
extern PACKAGE int __fastcall SkinBorderMaxWidth(const TsCommonData* SkinData);
extern PACKAGE Sconst::TCacheInfo __fastcall GetParentCache(const TsCommonData* SkinData);
extern PACKAGE Sconst::TCacheInfo __fastcall GetParentCacheHwnd(const HWND cHwnd);
extern PACKAGE void __fastcall InvalidateParentCache(TsCommonData* SkinData);
extern PACKAGE void __fastcall InitIndexes(const TsCommonData* SkinData, System::UnicodeString const *Sections, const int Sections_Size);
extern PACKAGE void __fastcall UpdateData(const TsCommonData* SkinData);
extern PACKAGE void __fastcall UpdateControlColors(TsCommonData* SkinData, bool AllowRepaint = true);
extern PACKAGE void __fastcall UpdateSkinState(const TsCommonData* SkinData, const bool UpdateChildren = true);
extern PACKAGE bool __fastcall ControlIsActive(const TsCommonData* SkinData);
extern PACKAGE bool __fastcall ChildBgIsChanged(TsCommonData* SkinData);
extern PACKAGE bool __fastcall NeedParentFont(TsCommonData* SkinData);
extern PACKAGE bool __fastcall CommonMessage(Messages::TMessage &Message, TsCommonData* SkinData);
extern PACKAGE bool __fastcall acMouseInWnd(unsigned Handle);
extern PACKAGE bool __fastcall CommonWndProc(Messages::TMessage &Message, TsCommonData* SkinData);
extern PACKAGE void __fastcall CopyWinControlCache(const Controls::TWinControl* Control, const TsCommonData* SkinData, const Types::TRect &SrcRect, const Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;
extern PACKAGE void __fastcall CopyHwndCache(const unsigned hwnd, const TsCommonData* SkinData, const Types::TRect &SrcRect, const Types::TRect &DstRect, const HDC DstDC, const bool UpdateCorners, const int OffsetX = 0x0, const int OffsetY = 0x0)/* overload */;

}	/* namespace Scommondata */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Scommondata;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// ScommondataHPP
