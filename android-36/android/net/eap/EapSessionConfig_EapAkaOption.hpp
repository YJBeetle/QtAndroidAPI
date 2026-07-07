#pragma once

#include "../../../JByteArray.hpp"
#include "../../../JObject.hpp"
#include "./EapSessionConfig_EapAkaOption.def.hpp"

namespace android::net::eap
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean EapSessionConfig_EapAkaOption::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JByteArray EapSessionConfig_EapAkaOption::getReauthId() const
	{
		return callObjectMethod(
			"getReauthId",
			"()[B"
		);
	}
	inline jint EapSessionConfig_EapAkaOption::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::eap

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::eap;
#endif
