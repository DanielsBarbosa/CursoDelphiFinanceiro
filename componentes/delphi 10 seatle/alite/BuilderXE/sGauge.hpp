// CodeGear C++Builder
// Copyright (c) 1995, 2010 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'sGauge.pas' rev: 22.00

#ifndef SgaugeHPP
#define SgaugeHPP

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
#include <ExtCtrls.hpp>	// Pascal unit
#include <Types.hpp>	// Pascal unit
#include <sConst.hpp>	// Pascal unit
#include <sGraphUtils.hpp>	// Pascal unit
#include <sVclUtils.hpp>	// Pascal unit
#include <acntUtils.hpp>	// Pascal unit
#include <sCommonData.hpp>	// Pascal unit
#include <acPNG.hpp>	// Pascal unit
#include <Menus.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sgauge
{
//-- type declarations -------------------------------------------------------
#pragma option push -b-
enum TsGaugeKind { gkText, gkHorizontalBar, gkVerticalBar, gkPie, gkNeedle };
#pragma option pop

typedef void __fastcall (__closure *TPrintTextEvent)(System::TObject* Sender, System::UnicodeString &TextToPrint);

typedef __int64 acInt64;

class DELPHICLASS TsGauge;
class PASCALIMPLEMENTATION TsGauge : public Controls::TGraphicControl
{
	typedef Controls::TGraphicControl inherited;
	
private:
	__int64 FMinValue;
	__int64 FMaxValue;
	__int64 FCurValue;
	TsGaugeKind FKind;
	bool FShowText;
	Classes::TNotifyEvent FOnChange;
	System::UnicodeString FSuffix;
	Scommondata::TsCommonData* FCommonData;
	Graphics::TColor FForeColor;
	Graphics::TColor FBackColor;
	Forms::TFormBorderStyle FBorderStyle;
	System::UnicodeString FProgressSkin;
	bool FCalcPercents;
	bool FAnimated;
	int FLongTime;
	int FAnimPos;
	Graphics::TBitmap* Light;
	TPrintTextEvent FOnPaintText;
	void __fastcall PaintBackground(Graphics::TBitmap* AnImage);
	void __fastcall PaintAsText(Graphics::TBitmap* AnImage, const Types::TRect &PaintRect);
	void __fastcall PaintAsNothing(Graphics::TBitmap* AnImage, const Types::TRect &PaintRect);
	void __fastcall PaintAsBar(Graphics::TBitmap* AnImage, const Types::TRect &PaintRect);
	void __fastcall PaintAsPie(Graphics::TBitmap* AnImage, const Types::TRect &PaintRect);
	void __fastcall PaintAsNeedle(Graphics::TBitmap* AnImage, const Types::TRect &PaintRect);
	void __fastcall SkinPaintAsText(const Types::TRect &aRect);
	void __fastcall SkinPaintAsBar(const Types::TRect &aRect);
	void __fastcall SkinPaintAsPie(const Types::TRect &aRect);
	void __fastcall SkinPaintAsNeedle(const Types::TRect &aRect);
	void __fastcall SkinPaintBody(const Types::TRect &aRect);
	void __fastcall SetGaugeKind(TsGaugeKind Value);
	void __fastcall SetShowText(bool Value);
	void __fastcall SetMinValue(__int64 Value);
	void __fastcall SetMaxValue(__int64 Value);
	void __fastcall SetProgress(__int64 Value);
	__int64 __fastcall GetPercentDone(void);
	MESSAGE void __fastcall WMEraseBkGND(Messages::TWMPaint &Message);
	void __fastcall SetSuffix(const System::UnicodeString Value);
	void __fastcall SetForeColor(const Graphics::TColor Value);
	void __fastcall SetBackColor(const Graphics::TColor Value);
	void __fastcall SetBorderStyle(const Forms::TBorderStyle Value);
	void __fastcall SetProgressSkin(const System::UnicodeString Value);
	void __fastcall SetCalcPercents(const bool Value);
	void __fastcall SetAnimated(const bool Value);
	
protected:
	Extctrls::TTimer* Timer;
	Graphics::TBitmap* FTmpProgressBmp;
	Acpng::TPNGGraphic* LightingBmp;
	virtual void __fastcall WndProc(Messages::TMessage &Message);
	void __fastcall TimerAction(System::TObject* Sender);
	int __fastcall AnimSize(void);
	int __fastcall AnimStep(void);
	void __fastcall UpdateLighting(void);
	
public:
	virtual void __fastcall Paint(void);
	void __fastcall PrepareCache(void);
	__fastcall virtual TsGauge(Classes::TComponent* AOwner);
	__fastcall virtual ~TsGauge(void);
	void __fastcall AddProgress(__int64 Value);
	virtual void __fastcall AfterConstruction(void);
	virtual void __fastcall Loaded(void);
	__property __int64 PercentDone = {read=GetPercentDone};
	__property Color = {default=-16777211};
	
__published:
	__property Align = {default=0};
	__property Anchors = {default=3};
	__property Constraints;
	__property Enabled = {default=1};
	__property Font;
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property Visible = {default=1};
	__property OnClick;
	__property OnContextPopup;
	__property OnDblClick;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnResize;
	__property TsGaugeKind Kind = {read=FKind, write=SetGaugeKind, default=1};
	__property Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property bool CalcPercents = {read=FCalcPercents, write=SetCalcPercents, default=1};
	__property Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool Animated = {read=FAnimated, write=SetAnimated, default=1};
	__property Scommondata::TsCommonData* SkinData = {read=FCommonData, write=FCommonData};
	__property Graphics::TColor BackColor = {read=FBackColor, write=SetBackColor, default=16777215};
	__property Graphics::TColor ForeColor = {read=FForeColor, write=SetForeColor, nodefault};
	__property __int64 MinValue = {read=FMinValue, write=SetMinValue, default=0};
	__property __int64 MaxValue = {read=FMaxValue, write=SetMaxValue, default=100};
	__property __int64 Progress = {read=FCurValue, write=SetProgress, default=47};
	__property System::UnicodeString ProgressSkin = {read=FProgressSkin, write=SetProgressSkin};
	__property bool ShowText = {read=FShowText, write=SetShowText, default=1};
	__property System::UnicodeString Suffix = {read=FSuffix, write=SetSuffix};
	__property TPrintTextEvent OnPaintText = {read=FOnPaintText, write=FOnPaintText};
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE int AnimLongDelay;

}	/* namespace Sgauge */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE)
using namespace Sgauge;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SgaugeHPP
