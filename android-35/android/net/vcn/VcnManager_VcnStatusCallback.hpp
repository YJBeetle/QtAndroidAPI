#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./VcnManager_VcnStatusCallback.def.hpp"

namespace android::net::vcn
{
	// Fields
	
	// Constructors
	inline VcnManager_VcnStatusCallback::VcnManager_VcnStatusCallback()
		: JObject(
			"android.net.vcn.VcnManager$VcnStatusCallback",
			"()V"
		) {}
	
	// Methods
	inline void VcnManager_VcnStatusCallback::onGatewayConnectionError(JString arg0, jint arg1, JThrowable arg2) const
	{
		callMethod<void>(
			"onGatewayConnectionError",
			"(Ljava/lang/String;ILjava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jthrowable>()
		);
	}
	inline void VcnManager_VcnStatusCallback::onStatusChanged(jint arg0) const
	{
		callMethod<void>(
			"onStatusChanged",
			"(I)V",
			arg0
		);
	}
} // namespace android::net::vcn

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::vcn;
#endif
