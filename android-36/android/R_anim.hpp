#pragma once

#include "./R_anim.def.hpp"

namespace android
{
	// Fields
	inline jint R_anim::accelerate_decelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"accelerate_decelerate_interpolator"
		);
	}
	inline jint R_anim::accelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"accelerate_interpolator"
		);
	}
	inline jint R_anim::anticipate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"anticipate_interpolator"
		);
	}
	inline jint R_anim::anticipate_overshoot_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"anticipate_overshoot_interpolator"
		);
	}
	inline jint R_anim::bounce_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"bounce_interpolator"
		);
	}
	inline jint R_anim::cycle_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"cycle_interpolator"
		);
	}
	inline jint R_anim::decelerate_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"decelerate_interpolator"
		);
	}
	inline jint R_anim::fade_in()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"fade_in"
		);
	}
	inline jint R_anim::fade_out()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"fade_out"
		);
	}
	inline jint R_anim::linear_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"linear_interpolator"
		);
	}
	inline jint R_anim::overshoot_interpolator()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"overshoot_interpolator"
		);
	}
	inline jint R_anim::slide_in_left()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"slide_in_left"
		);
	}
	inline jint R_anim::slide_out_right()
	{
		return getStaticField<jint>(
			"android.R$anim",
			"slide_out_right"
		);
	}
	
	// Constructors
	inline R_anim::R_anim()
		: JObject(
			"android.R$anim",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android;
#endif
