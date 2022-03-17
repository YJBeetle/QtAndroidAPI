#pragma once

#include "./R_transition.def.hpp"

namespace android
{
	// Fields
	inline jint R_transition::explode()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"explode"
		);
	}
	inline jint R_transition::fade()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"fade"
		);
	}
	inline jint R_transition::move()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"move"
		);
	}
	inline jint R_transition::no_transition()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"no_transition"
		);
	}
	inline jint R_transition::slide_bottom()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_bottom"
		);
	}
	inline jint R_transition::slide_left()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_left"
		);
	}
	inline jint R_transition::slide_right()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_right"
		);
	}
	inline jint R_transition::slide_top()
	{
		return getStaticField<jint>(
			"android.R$transition",
			"slide_top"
		);
	}
	
	// Constructors
	inline R_transition::R_transition()
		: JObject(
			"android.R$transition",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

