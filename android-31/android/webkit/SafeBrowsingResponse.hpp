#pragma once

#include "./SafeBrowsingResponse.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline SafeBrowsingResponse::SafeBrowsingResponse()
		: JObject(
			"android.webkit.SafeBrowsingResponse",
			"()V"
		) {}
	
	// Methods
	inline void SafeBrowsingResponse::backToSafety(jboolean arg0) const
	{
		callMethod<void>(
			"backToSafety",
			"(Z)V",
			arg0
		);
	}
	inline void SafeBrowsingResponse::proceed(jboolean arg0) const
	{
		callMethod<void>(
			"proceed",
			"(Z)V",
			arg0
		);
	}
	inline void SafeBrowsingResponse::showInterstitial(jboolean arg0) const
	{
		callMethod<void>(
			"showInterstitial",
			"(Z)V",
			arg0
		);
	}
} // namespace android::webkit

// Base class headers

