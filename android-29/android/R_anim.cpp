#include "./R_anim.hpp"

namespace android
{
	// Fields
	jint R_anim::accelerate_decelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"accelerate_decelerate_interpolator"
		);
	}
	jint R_anim::accelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"accelerate_interpolator"
		);
	}
	jint R_anim::anticipate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"anticipate_interpolator"
		);
	}
	jint R_anim::anticipate_overshoot_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"anticipate_overshoot_interpolator"
		);
	}
	jint R_anim::bounce_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"bounce_interpolator"
		);
	}
	jint R_anim::cycle_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"cycle_interpolator"
		);
	}
	jint R_anim::decelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"decelerate_interpolator"
		);
	}
	jint R_anim::fade_in()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"fade_in"
		);
	}
	jint R_anim::fade_out()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"fade_out"
		);
	}
	jint R_anim::linear_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"linear_interpolator"
		);
	}
	jint R_anim::overshoot_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"overshoot_interpolator"
		);
	}
	jint R_anim::slide_in_left()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"slide_in_left"
		);
	}
	jint R_anim::slide_out_right()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"slide_out_right"
		);
	}
	
	// QAndroidJniObject forward
	R_anim::R_anim(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_anim::R_anim()
		: __JniBaseClass(
			"android.R$anim",
			"()V"
		) {}
	
	// Methods
} // namespace android

