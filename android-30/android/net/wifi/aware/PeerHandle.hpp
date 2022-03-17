#pragma once

#include "../../../../JObject.hpp"
#include "./PeerHandle.def.hpp"

namespace android::net::wifi::aware
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean PeerHandle::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint PeerHandle::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::net::wifi::aware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::aware;
#endif
