// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sLabel.pas' rev: 22.00

#ifndef SlabelHPP
#define SlabelHPP

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
#include <StdCtrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sMessages.hpp>	// Pascal unit
#include <sSkinManager.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Slabel
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsShadowMode { smNone, smCustom, smSkin1 };
#pragma option pop

#pragma option push -b-
enum TsKindType { ktStandard, ktCustom, ktSkin };
#pragma option pop

class DELPHICLASS TsCustomLabel;
class PASCALIMPLEMENTATION TsCustomLabel : public Stdctrls::TCustomLabel
{
	typedef Stdctrls::TCustomLabel inherited;
	
private:
	Classes::TNotifyEvent FOnMouseLeave;
	Classes::TNotifyEvent FOnMouseEnter;
	System::UnicodeString FSkinSection;
	Sskinmanager::TsSkinManager* FSkinManager;
	void __fastcall SetSkinSection(const System::UnicodeString Value);
	void __fastcall SetSkinManager(const Sskinmanager::TsSkinManager* Value);
	Sskinmanager::TsSkinManager* __fastcall GetSkinManager(void);
	
protected:
	virtual Graphics::TFont* __fastcall GetCurrentFont(void);
	virtual Graphics::TColor __fastcall TextColor(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	bool __fastcall ManagerStored(void);
	
public:
	int FSkinIndex;
	__fastcall virtual TsCustomLabel(Classes::TComponent* AOwner);
	virtual void __fastcall Paint(void);
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	__property Font;
	
__published:
	__property Align = {default=0};
	__property Alignment = {default=0};
	__property Anchors = {default=3};
	__property AutoSize = {default=1};
	__property BiDiMode;
	__property Sskinmanager::TsSkinManager* SkinManager = {read=GetSkinManager, write=SetSkinManager, stored=ManagerStored};
	__property System::UnicodeString SkinSection = {read=FSkinSection, write=SetSkinSection};
	__property Caption;
	__property EllipsisPosition = {default=0};
	__property Color = {default=-16777211};
	__property Constraints;
	__property DragCursor = {default=-12};
	__property DragKind = {default=0};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property FocusControl;
	__property ParentBiDiMode = {default=1};
	__property ParentColor = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowAccelChar = {default=1};
	__property ShowHint;
	__property Transparent = {default=1};
	__property Touch;
	__property Layout = {default=0};
	__property Visible = {default=1};
	__property WordWrap = {default=0};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDock;
	__property OnEndDrag;
	__property OnMouseDown;
	__property OnMouseMove;
	__property Classes::TNotifyEvent OnMouseEnter = {read=FOnMouseEnter, write=FOnMouseEnter};
	__property Classes::TNotifyEvent OnMouseLeave = {read=FOnMouseLeave, write=FOnMouseLeave};
	__property OnMouseUp;
	__property OnStartDock;
	__property OnStartDrag;
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsCustomLabel(void) { }
	
};


struct DECLSPEC_DRECORD TsClassSkinData
{
	
public:
	bool CustomColor;
	bool CustomFont;
};


class DELPHICLASS TsLabel;
class PASCALIMPLEMENTATION TsLabel : public TsCustomLabel
{
	typedef TsCustomLabel inherited;
	
private:
	bool FUseSkinColor;
	
protected:
	virtual Graphics::TColor __fastcall TextColor(void);
	
public:
	__fastcall virtual TsLabel(Classes::TComponent* AOwner);
	
__published:
	__property Font;
	__property bool UseSkinColor = {read=FUseSkinColor, write=FUseSkinColor, default=1};
public:
	/* TGraphicControl.Destroy */ inline __fastcall virtual ~TsLabel(void) { }
	
};


class DELPHICLASS TsEditLabel;
class PASCALIMPLEMENTATION TsEditLabel : public TsLabel
{
	typedef TsLabel inherited;
	
public:
	System::TObject* BoundLabel;
	__fastcall TsEditLabel(Classes::TComponent* AOwner, System::TObject* BoundStruct);
	__fastcall virtual ~TsEditLabel(void);
public:
	/* TsLabel.Create */ inline __fastcall virtual TsEditLabel(Classes::TComponent* AOwner) : TsLabel(AOwner) { }
	
};


class DELPHICLASS TsWebLabel;
class PASCALIMPLEMENTATION TsWebLabel : public TsLabel
{
	typedef TsLabel inherited;
	
private:
	Graphics::TFont* FNormalFont;
	void __fastcall SetHoverFont(const Graphics::TFont* Value);
	void __fastcall SetNormalFont(const Graphics::TFont* Value);
	
protected:
	Graphics::TFont* FHoverFont;
	System::UnicodeString FURL;
	Sconst::TsWindowShowMode FShowMode;
	virtual Graphics::TColor __fastcall TextColor(void);
	virtual Graphics::TFont* __fastcall GetCurrentFont(void);
	HIDESBASE MESSAGE void __fastcall CMParentFontChanged(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Messages::TMessage &Message);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Messages::TMessage &Message);
	MESSAGE void __fastcall WMEraseBkGnd(Messages::TWMMouse &Message);
	HIDESBASE MESSAGE void __fastcall WMLButtonDown(Messages::TWMMouse &Message);
	
public:
	bool MouseAbove;
	__fastcall virtual TsWebLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsWebLabel(void);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
__published:
	__property Graphics::TFont* Font = {read=FNormalFont, write=SetNormalFont};
	__property Cursor = {default=-21};
	__property Graphics::TFont* HoverFont = {read=FHoverFont, write=SetHoverFont};
	__property Sconst::TsWindowShowMode ShowMode = {read=FShowMode, write=FShowMode, default=10};
	__property System::UnicodeString URL = {read=FURL, write=FURL};
};


class DELPHICLASS TsKind;
class PASCALIMPLEMENTATION TsKind : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	Graphics::TColor FColor;
	Controls::TControl* FOwner;
	TsKindType FKindType;
	void __fastcall SetKindType(const TsKindType Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	
public:
	__fastcall TsKind(Controls::TControl* AOwner);
	__fastcall virtual ~TsKind(void);
	
__published:
	__property TsKindType KindType = {read=FKindType, write=SetKindType, default=2};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=16777215};
};


struct DECLSPEC_DRECORD TShadowData
{
	
public:
	int Blur;
	int Offset;
	int Alpha;
	Graphics::TColor Color;
};


class DELPHICLASS TacOffsetKeeper;
class PASCALIMPLEMENTATION TacOffsetKeeper : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FRightBottom;
	int FLeftTop;
	
__published:
	__property int LeftTop = {read=FLeftTop, write=FLeftTop, stored=true, nodefault};
	__property int RightBottom = {read=FRightBottom, write=FRightBottom, stored=true, nodefault};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TacOffsetKeeper(void) { }
	
public:
	/* TObject.Create */ inline __fastcall TacOffsetKeeper(void) : Classes::TPersistent() { }
	
};


class DELPHICLASS TsShadow;
class DELPHICLASS TsLabelFX;
class PASCALIMPLEMENTATION TsShadow : public Classes::TPersistent
{
	typedef Classes::TPersistent inherited;
	
private:
	int FDistance;
	int FBlurCount;
	bool FBuffered;
	Graphics::TColor FColor;
	TsLabelFX* ParentControl;
	TsShadowMode FMode;
	System::Byte FAlphaValue;
	TacOffsetKeeper* FOffsetKeeper;
	void __fastcall UpdateRGB(void);
	void __fastcall SetBlurCount(const int Value);
	void __fastcall SetDistance(const int Value);
	void __fastcall SetColor(const Graphics::TColor Value);
	void __fastcall SetMode(const TsShadowMode Value);
	void __fastcall SetAlphaValue(const System::Byte Value);
	
public:
	int sr;
	int sg;
	int sb;
	__fastcall TsShadow(Classes::TComponent* AOwner, TsLabelFX* Control);
	__fastcall virtual ~TsShadow(void);
	__property bool ShadowBuffered = {read=FBuffered, write=FBuffered, default=0};
	
__published:
	__property System::Byte AlphaValue = {read=FAlphaValue, write=SetAlphaValue, default=255};
	__property int BlurCount = {read=FBlurCount, write=SetBlurCount, default=4};
	__property Graphics::TColor Color = {read=FColor, write=SetColor, default=0};
	__property int Distance = {read=FDistance, write=SetDistance, default=1};
	__property TsShadowMode Mode = {read=FMode, write=SetMode, default=2};
	__property TacOffsetKeeper* OffsetKeeper = {read=FOffsetKeeper, write=FOffsetKeeper};
};


class PASCALIMPLEMENTATION TsLabelFX : public TsCustomLabel
{
	typedef TsCustomLabel inherited;
	
private:
	int FAngle;
	int OffsTopLeft;
	int FMaskBitsSize;
	bool IntPosChanging;
	bool FNeedInvalidate;
	Graphics::TBitmap* FMask;
	void *FMaskBits;
	TsShadow* FShadow;
	TsKind* FKind;
	void __fastcall SetAngle(const int Value);
	
public:
	DYNAMIC void __fastcall AdjustBounds(void);
	__fastcall virtual TsLabelFX(Classes::TComponent* AOwner);
	__fastcall virtual ~TsLabelFX(void);
	virtual void __fastcall Invalidate(void);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	DYNAMIC void __fastcall DoDrawText(Types::TRect &Rect, int Flags);
	TShadowData __fastcall CurrentShadowData(void);
	Graphics::TColor __fastcall CurrentFontColor(void);
	void __fastcall UpdatePosition(void);
	
__published:
	__property Font;
	__property int Angle = {read=FAngle, write=SetAngle, nodefault};
	__property TsKind* Kind = {read=FKind, write=FKind};
	__property TsShadow* Shadow = {read=FShadow, write=FShadow};
};


#pragma option push -b-
enum TAlignTo { altLeft, altTop, altBottom, altRight };
#pragma option pop

class DELPHICLASS TsStickyLabel;
class PASCALIMPLEMENTATION TsStickyLabel : public TsLabel
{
	typedef TsLabel inherited;
	
private:
	Controls::TControl* FAttachTo;
	TAlignTo FAlignTo;
	int FGap;
	Classes::TWndMethod FOldWinProc;
	bool FRealigning;
	void __fastcall SetGap(int Value);
	void __fastcall SetAttachTo(Controls::TControl* Value);
	void __fastcall SetAlignTo(TAlignTo Value);
	void __fastcall NewWinProc(Messages::TMessage &Message);
	
protected:
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	
public:
	__fastcall virtual TsStickyLabel(Classes::TComponent* AOwner);
	__fastcall virtual ~TsStickyLabel(void);
	void __fastcall Adjust(bool MoveLabel);
	
__published:
	__property Font;
	__property TAlignTo AlignTo = {read=FAlignTo, write=SetAlignTo, default=0};
	__property Controls::TControl* AttachTo = {read=FAttachTo, write=SetAttachTo};
	__property int Gap = {read=FGap, write=SetGap, default=2};
};


//-- var, const, procedure ---------------------------------------------------

}	/* namespace Slabel */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Slabel;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SlabelHPP
