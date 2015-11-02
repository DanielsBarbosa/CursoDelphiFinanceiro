// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sButton.pas' rev: 22.00

#ifndef SbuttonHPP
#define SbuttonHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <ImgList.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sDefaults.hpp>	// Pascal unit
#include <sFade.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sbutton
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TButtonStyle { bsPushButton, bsCommandLink, bsSplitButton };
#pragma option pop

class DELPHICLASS TsButton;
class PASCALIMPLEMENTATION TsButton : public Stdctrls::TButton
{
	typedef Stdctrls::TButton inherited;
	
private:
	Classes::TNotifyEvent FOnMouseEnter;
	Classes::TNotifyEvent FOnMouseLeave;
	bool FDown;
	bool FShowFocus;
	bool FMouseClicked;
	bool RegionChanged;
	bool FReflected;
	int FFocusMargin;
	int FContentMargin;
	Types::TRect LastRect;
	TButtonStyle FStyle;
	Sconst::TsDisabledKind FDisabledKind;
	Sconst::TacAnimatEvents FAnimatEvents;
	Scommondata::TsCtrlSkinData* FCommonData;
	void __fastcall SetDown(const bool Value);
	HIDESBASE void __fastcall SetStyle(const TButtonStyle Value);
	void __fastcall SetShowFocus(const bool Value);
	void __fastcall SetReflected(const bool Value);
	void __fastcall SetFocusMargin(const int Value);
	void __fastcall SetDisabledKind(const Sconst::TsDisabledKind Value);
	void __fastcall SetContentMargin(const int Value);
	HIDESBASE MESSAGE void __fastcall WMKeyUp(Messages::TWMKey &Message);
	MESSAGE void __fastcall CNDrawItem(Messages::TWMDrawItem &Message);
	MESSAGE void __fastcall CNMeasureItem(Messages::TWMMeasureItem &Message);
	bool __fastcall GetDown(void);
	
protected:
	bool IsFocused;
	bool DroppedDown;
	HRGN FRegion;
	virtual void __fastcall UpdateImages(void);
	virtual void __fastcall UpdateImageList(void);
	void __fastcall StdDrawItem(const tagDRAWITEMSTRUCT &DrawItemStruct);
	virtual void __fastcall SetButtonStyle(bool ADefault);
	DYNAMIC void __fastcall ActionChange(System::TObject* Sender, bool CheckDefaults);
	DYNAMIC void __fastcall MouseDown(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	DYNAMIC void __fastcall MouseUp(Controls::TMouseButton Button, Classes::TShiftState Shift, int X, int Y);
	void __fastcall OurPaintHandler(HDC aDC);
	void __fastcall DrawCaption(Graphics::TCanvas* Canvas = (Graphics::TCanvas*)(0x0));
	void __fastcall DrawGlyph(Graphics::TCanvas* Canvas = (Graphics::TCanvas*)(0x0));
	Types::TRect __fastcall CaptionRect(void);
	bool __fastcall GlyphExist(void);
	bool __fastcall PrepareCache(void);
	
public:
	__fastcall virtual TsButton(Classes::TComponent* AOwner);
	virtual void __fastcall CreateParams(Controls::TCreateParams &Params);
	int __fastcall CurrentState(void);
	int __fastcall GlyphIndex(void);
	Types::TRect __fastcall GlyphRect(void);
	__fastcall virtual ~TsButton(void);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Sconst::TacAnimatEvents AnimatEvents = {read=FAnimatEvents, write=FAnimatEvents, default=16};
	__property Scommondata::TsCtrlSkinData* SkinData = {read=FCommonData, write=FCommonData};
	__property bool ShowFocus = {read=FShowFocus, write=SetShowFocus, default=1};
	__property Sconst::TsDisabledKind DisabledKind = {read=FDisabledKind, write=SetDisabledKind, default=1};
	__property bool Down = {read=GetDown, write=SetDown, default=0};
	__property int FocusMargin = {read=FFocusMargin, write=SetFocusMargin, default=1};
	__property TButtonStyle Style = {read=FStyle, write=SetStyle, default=0};
	__property int ContentMargin = {read=FContentMargin, write=SetContentMargin, default=6};
	__property bool Reflected = {read=FReflected, write=SetReflected, default=0};
	__property WordWrap = {default=1};
public:
	/* TWinControl.CreateParented */ inline __fastcall TsButton(HWND ParentWindow) : Stdctrls::TButton(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Sbutton */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sbutton;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SbuttonHPP
