#pragma once

#include "./LoginFilter_PasswordFilterGMail.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail()
		: android::text::LoginFilter(
			"android.text.LoginFilter$PasswordFilterGMail",
			"()V"
		) {}
	inline LoginFilter_PasswordFilterGMail::LoginFilter_PasswordFilterGMail(jboolean arg0)
		: android::text::LoginFilter(
			"android.text.LoginFilter$PasswordFilterGMail",
			"(Z)V",
			arg0
		) {}
	
	// Methods
	inline jboolean LoginFilter_PasswordFilterGMail::isAllowed(jchar arg0) const
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

