#pragma once

#include "../../JString.hpp"
#include "./CloseGuard.def.hpp"

namespace android::util
{
	// Fields
	
	// Constructors
	inline CloseGuard::CloseGuard()
		: JObject(
			"android.util.CloseGuard",
			"()V"
		) {}
	
	// Methods
	inline void CloseGuard::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void CloseGuard::open(JString arg0) const
	{
		callMethod<void>(
			"open",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void CloseGuard::warnIfOpen() const
	{
		callMethod<void>(
			"warnIfOpen",
			"()V"
		);
	}
} // namespace android::util

// Base class headers

