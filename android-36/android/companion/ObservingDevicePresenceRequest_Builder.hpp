#pragma once

#include "./ObservingDevicePresenceRequest.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "./ObservingDevicePresenceRequest_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline ObservingDevicePresenceRequest_Builder::ObservingDevicePresenceRequest_Builder()
		: JObject(
			"android.companion.ObservingDevicePresenceRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::ObservingDevicePresenceRequest ObservingDevicePresenceRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/ObservingDevicePresenceRequest;"
		);
	}
	inline android::companion::ObservingDevicePresenceRequest_Builder ObservingDevicePresenceRequest_Builder::setAssociationId(jint arg0) const
	{
		return callObjectMethod(
			"setAssociationId",
			"(I)Landroid/companion/ObservingDevicePresenceRequest$Builder;",
			arg0
		);
	}
	inline android::companion::ObservingDevicePresenceRequest_Builder ObservingDevicePresenceRequest_Builder::setUuid(android::os::ParcelUuid arg0) const
	{
		return callObjectMethod(
			"setUuid",
			"(Landroid/os/ParcelUuid;)Landroid/companion/ObservingDevicePresenceRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
