#pragma once

#include "../../JString.hpp"
#include "./IpSecTransform.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void IpSecTransform::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline JString IpSecTransform::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
