#pragma once

#include "../../JObject.hpp"
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
	inline jboolean IpSecTransform::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
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

