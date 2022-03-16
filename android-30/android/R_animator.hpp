#pragma once

#include "./R_animator.def.hpp"

namespace android
{
	// Fields
	inline jint R_animator::fade_in()
	{
		return getStaticField<jint>(
			"android.R$animator",
			"fade_in"
		);
	}
	inline jint R_animator::fade_out()
	{
		return getStaticField<jint>(
			"android.R$animator",
			"fade_out"
		);
	}
	
	// Constructors
	inline R_animator::R_animator()
		: JObject(
			"android.R$animator",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers

