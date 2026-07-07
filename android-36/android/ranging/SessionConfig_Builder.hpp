#pragma once

#include "./DataNotificationConfig.def.hpp"
#include "./SensorFusionParams.def.hpp"
#include "./SessionConfig.def.hpp"
#include "./SessionConfig_Builder.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	inline SessionConfig_Builder::SessionConfig_Builder()
		: JObject(
			"android.ranging.SessionConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::SessionConfig SessionConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/SessionConfig;"
		);
	}
	inline android::ranging::SessionConfig_Builder SessionConfig_Builder::setAngleOfArrivalNeeded(jboolean arg0) const
	{
		return callObjectMethod(
			"setAngleOfArrivalNeeded",
			"(Z)Landroid/ranging/SessionConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::SessionConfig_Builder SessionConfig_Builder::setDataNotificationConfig(android::ranging::DataNotificationConfig arg0) const
	{
		return callObjectMethod(
			"setDataNotificationConfig",
			"(Landroid/ranging/DataNotificationConfig;)Landroid/ranging/SessionConfig$Builder;",
			arg0.object()
		);
	}
	inline android::ranging::SessionConfig_Builder SessionConfig_Builder::setRangingMeasurementsLimit(jint arg0) const
	{
		return callObjectMethod(
			"setRangingMeasurementsLimit",
			"(I)Landroid/ranging/SessionConfig$Builder;",
			arg0
		);
	}
	inline android::ranging::SessionConfig_Builder SessionConfig_Builder::setSensorFusionParams(android::ranging::SensorFusionParams arg0) const
	{
		return callObjectMethod(
			"setSensorFusionParams",
			"(Landroid/ranging/SensorFusionParams;)Landroid/ranging/SessionConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
