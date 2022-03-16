#pragma once

#include "./LoginFilter_UsernameFilterGeneric.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric()
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"()V"
		) {}
	inline LoginFilter_UsernameFilterGeneric::LoginFilter_UsernameFilterGeneric(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGeneric",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jboolean LoginFilter_UsernameFilterGeneric::isAllowed(jchar arg0) const
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
} // namespace android::text

// Base class headers
#include "./LoginFilter.hpp"

