/* How to Hook with Logos
Hooks are written with syntax similar to that of an Objective-C @implementation.
You don't need to #include <substrate.h>, it will be done automatically, as will
the generation of a class list and an automatic constructor.
*/

///要hook的类
%hook XMAdAnimationViewThree

- (id)initWithFrame:(struct CGRect)arg1{
	return nil;
}
// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end

%hook XMSoundPatchImageView

- (id)initWithFrame:(struct CGRect)arg1{
	return nil;
}
// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end

%hook GDTSplashSkipView

- (id)initWithSplashView:(id)arg1 skipView:(id)arg2 bottomView:(id)arg3{
	return nil;
}
// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end

%hook XMSoundPatchPosterViewTwo

- (id)initWithFrame:(struct CGRect)arg1{
	return nil;
}
// Always make sure you clean up after yourself; Not doing so could have grave consequences!
%end
