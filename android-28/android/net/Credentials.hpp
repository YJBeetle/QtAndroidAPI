#pragma once

#include "./Credentials.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	inline Credentials::Credentials(jint arg0, jint arg1, jint arg2)
		: JObject(
			"android.net.Credentials",
			"(III)V",
			arg0,
			arg1,
			arg2
		) {}
	
	// Methods
	inline jint Credentials::getGid() const
	{
		return callMethod<jint>(
			"getGid",
			"()I"
		);
	}
	inline jint Credentials::getPid() const
	{
		return callMethod<jint>(
			"getPid",
			"()I"
		);
	}
	inline jint Credentials::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
