#pragma once

#include "./DeviceId.def.hpp"
#include "../net/MacAddress.def.hpp"
#include "../../JString.hpp"
#include "./DeviceId_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline DeviceId_Builder::DeviceId_Builder()
		: JObject(
			"android.companion.DeviceId$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::DeviceId DeviceId_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/DeviceId;"
		);
	}
	inline android::companion::DeviceId_Builder DeviceId_Builder::setCustomId(JString arg0) const
	{
		return callObjectMethod(
			"setCustomId",
			"(Ljava/lang/String;)Landroid/companion/DeviceId$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::companion::DeviceId_Builder DeviceId_Builder::setMacAddress(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setMacAddress",
			"(Landroid/net/MacAddress;)Landroid/companion/DeviceId$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
