#pragma once

#include "./LoginFilter_UsernameFilterGMail.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail()
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGMail",
			"()V"
		) {}
	inline LoginFilter_UsernameFilterGMail::LoginFilter_UsernameFilterGMail(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$UsernameFilterGMail",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jboolean LoginFilter_UsernameFilterGMail::isAllowed(jchar arg0) const
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

