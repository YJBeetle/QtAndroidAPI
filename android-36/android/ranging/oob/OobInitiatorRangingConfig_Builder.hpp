#pragma once

#include "./DeviceHandle.def.hpp"
#include "./OobInitiatorRangingConfig.def.hpp"
#include "../../../java/time/Duration.def.hpp"
#include "./OobInitiatorRangingConfig_Builder.def.hpp"

namespace android::ranging::oob
{
	// Fields
	
	// Constructors
	inline OobInitiatorRangingConfig_Builder::OobInitiatorRangingConfig_Builder()
		: JObject(
			"android.ranging.oob.OobInitiatorRangingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::addDeviceHandle(android::ranging::oob::DeviceHandle arg0) const
	{
		return callObjectMethod(
			"addDeviceHandle",
			"(Landroid/ranging/oob/DeviceHandle;)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::addDeviceHandles(JObject arg0) const
	{
		return callObjectMethod(
			"addDeviceHandles",
			"(Ljava/util/List;)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig OobInitiatorRangingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/oob/OobInitiatorRangingConfig;"
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::setFastestRangingInterval(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setFastestRangingInterval",
			"(Ljava/time/Duration;)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::setRangingMode(jint arg0) const
	{
		return callObjectMethod(
			"setRangingMode",
			"(I)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::setSecurityLevel(jint arg0) const
	{
		return callObjectMethod(
			"setSecurityLevel",
			"(I)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::oob::OobInitiatorRangingConfig_Builder OobInitiatorRangingConfig_Builder::setSlowestRangingInterval(java::time::Duration arg0) const
	{
		return callObjectMethod(
			"setSlowestRangingInterval",
			"(Ljava/time/Duration;)Landroid/ranging/oob/OobInitiatorRangingConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging::oob

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging::oob;
#endif
