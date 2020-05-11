#line 1 "Tweak.x"








#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class GDTSplashSkipView; @class XMAdAnimationViewThree; @class XMSoundPatchImageView; @class XMSoundPatchPosterViewTwo; 
static XMAdAnimationViewThree* (*_logos_orig$_ungrouped$XMAdAnimationViewThree$initWithFrame$)(_LOGOS_SELF_TYPE_INIT XMAdAnimationViewThree*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; static XMAdAnimationViewThree* _logos_method$_ungrouped$XMAdAnimationViewThree$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMAdAnimationViewThree*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; static XMSoundPatchImageView* (*_logos_orig$_ungrouped$XMSoundPatchImageView$initWithFrame$)(_LOGOS_SELF_TYPE_INIT XMSoundPatchImageView*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; static XMSoundPatchImageView* _logos_method$_ungrouped$XMSoundPatchImageView$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMSoundPatchImageView*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; static GDTSplashSkipView* (*_logos_orig$_ungrouped$GDTSplashSkipView$initWithSplashView$skipView$bottomView$)(_LOGOS_SELF_TYPE_INIT GDTSplashSkipView*, SEL, id, id, id) _LOGOS_RETURN_RETAINED; static GDTSplashSkipView* _logos_method$_ungrouped$GDTSplashSkipView$initWithSplashView$skipView$bottomView$(_LOGOS_SELF_TYPE_INIT GDTSplashSkipView*, SEL, id, id, id) _LOGOS_RETURN_RETAINED; static XMSoundPatchPosterViewTwo* (*_logos_orig$_ungrouped$XMSoundPatchPosterViewTwo$initWithFrame$)(_LOGOS_SELF_TYPE_INIT XMSoundPatchPosterViewTwo*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; static XMSoundPatchPosterViewTwo* _logos_method$_ungrouped$XMSoundPatchPosterViewTwo$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMSoundPatchPosterViewTwo*, SEL, struct CGRect) _LOGOS_RETURN_RETAINED; 

#line 8 "Tweak.x"


static XMAdAnimationViewThree* _logos_method$_ungrouped$XMAdAnimationViewThree$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMAdAnimationViewThree* __unused self, SEL __unused _cmd, struct CGRect arg1) _LOGOS_RETURN_RETAINED{
	return nil;
}





static XMSoundPatchImageView* _logos_method$_ungrouped$XMSoundPatchImageView$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMSoundPatchImageView* __unused self, SEL __unused _cmd, struct CGRect arg1) _LOGOS_RETURN_RETAINED{
	return nil;
}





static GDTSplashSkipView* _logos_method$_ungrouped$GDTSplashSkipView$initWithSplashView$skipView$bottomView$(_LOGOS_SELF_TYPE_INIT GDTSplashSkipView* __unused self, SEL __unused _cmd, id arg1, id arg2, id arg3) _LOGOS_RETURN_RETAINED{
	return nil;
}





static XMSoundPatchPosterViewTwo* _logos_method$_ungrouped$XMSoundPatchPosterViewTwo$initWithFrame$(_LOGOS_SELF_TYPE_INIT XMSoundPatchPosterViewTwo* __unused self, SEL __unused _cmd, struct CGRect arg1) _LOGOS_RETURN_RETAINED{
	return nil;
}


static __attribute__((constructor)) void _logosLocalInit() {
{Class _logos_class$_ungrouped$XMAdAnimationViewThree = objc_getClass("XMAdAnimationViewThree"); MSHookMessageEx(_logos_class$_ungrouped$XMAdAnimationViewThree, @selector(initWithFrame:), (IMP)&_logos_method$_ungrouped$XMAdAnimationViewThree$initWithFrame$, (IMP*)&_logos_orig$_ungrouped$XMAdAnimationViewThree$initWithFrame$);Class _logos_class$_ungrouped$XMSoundPatchImageView = objc_getClass("XMSoundPatchImageView"); MSHookMessageEx(_logos_class$_ungrouped$XMSoundPatchImageView, @selector(initWithFrame:), (IMP)&_logos_method$_ungrouped$XMSoundPatchImageView$initWithFrame$, (IMP*)&_logos_orig$_ungrouped$XMSoundPatchImageView$initWithFrame$);Class _logos_class$_ungrouped$GDTSplashSkipView = objc_getClass("GDTSplashSkipView"); MSHookMessageEx(_logos_class$_ungrouped$GDTSplashSkipView, @selector(initWithSplashView:skipView:bottomView:), (IMP)&_logos_method$_ungrouped$GDTSplashSkipView$initWithSplashView$skipView$bottomView$, (IMP*)&_logos_orig$_ungrouped$GDTSplashSkipView$initWithSplashView$skipView$bottomView$);Class _logos_class$_ungrouped$XMSoundPatchPosterViewTwo = objc_getClass("XMSoundPatchPosterViewTwo"); MSHookMessageEx(_logos_class$_ungrouped$XMSoundPatchPosterViewTwo, @selector(initWithFrame:), (IMP)&_logos_method$_ungrouped$XMSoundPatchPosterViewTwo$initWithFrame$, (IMP*)&_logos_orig$_ungrouped$XMSoundPatchPosterViewTwo$initWithFrame$);} }
#line 39 "Tweak.x"
