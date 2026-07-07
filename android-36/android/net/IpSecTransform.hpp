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
	inline void IpSecTransform::requestIpSecTransformState(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"requestIpSecTransformState",
			"(Ljava/util/concurrent/Executor;Landroid/os/OutcomeReceiver;)V",
			arg0.object(),
			arg1.object()
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
