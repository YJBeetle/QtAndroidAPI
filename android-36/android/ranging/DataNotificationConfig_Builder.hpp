#pragma once

#include "./DataNotificationConfig.def.hpp"
#include "./DataNotificationConfig_Builder.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	inline DataNotificationConfig_Builder::DataNotificationConfig_Builder()
		: JObject(
			"android.ranging.DataNotificationConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::DataNotificationConfig DataNotificationConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/DataNotificationConfig;"
		);
	}
	inline android::ranging::DataNotificationConfig_Builder DataNotificationConfig_Builder::setNotificationConfigType(jint arg0) const
	{
		return callObjectMethod(
			"setNotificationConfigType",
			"(I)Landroid/ranging/DataNotificationConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::DataNotificationConfig_Builder DataNotificationConfig_Builder::setProximityFarCm(jint arg0) const
	{
		return callObjectMethod(
			"setProximityFarCm",
			"(I)Landroid/ranging/DataNotificationConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::DataNotificationConfig_Builder DataNotificationConfig_Builder::setProximityNearCm(jint arg0) const
	{
		return callObjectMethod(
			"setProximityNearCm",
			"(I)Landroid/ranging/DataNotificationConfig$Builder;",
			arg0
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
