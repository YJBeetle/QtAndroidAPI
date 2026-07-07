#pragma once

#include "./SensorFusionParams.def.hpp"
#include "./SensorFusionParams_Builder.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	inline SensorFusionParams_Builder::SensorFusionParams_Builder()
		: JObject(
			"android.ranging.SensorFusionParams$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::ranging::SensorFusionParams SensorFusionParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/SensorFusionParams;"
		);
	}
	inline android::ranging::SensorFusionParams_Builder SensorFusionParams_Builder::setSensorFusionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setSensorFusionEnabled",
			"(Z)Landroid/ranging/SensorFusionParams$Builder;",
			arg0
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
