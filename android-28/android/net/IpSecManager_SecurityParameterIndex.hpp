#pragma once

#include "../../JString.hpp"
#include "./IpSecManager_SecurityParameterIndex.def.hpp"

namespace android::net
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void IpSecManager_SecurityParameterIndex::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline jint IpSecManager_SecurityParameterIndex::getSpi() const
	{
		return callMethod<jint>(
			"getSpi",
			"()I"
		);
	}
	inline JString IpSecManager_SecurityParameterIndex::toString() const
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
