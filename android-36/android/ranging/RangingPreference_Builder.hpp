#pragma once

#include "./RangingConfig.def.hpp"
#include "./RangingPreference.def.hpp"
#include "./SessionConfig.def.hpp"
#include "./RangingPreference_Builder.def.hpp"

namespace android::ranging
{
	// Fields
	
	// Constructors
	inline RangingPreference_Builder::RangingPreference_Builder(jint arg0, android::ranging::RangingConfig arg1)
		: JObject(
			"android.ranging.RangingPreference$Builder",
			"(ILandroid/ranging/RangingConfig;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline android::ranging::RangingPreference RangingPreference_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/ranging/RangingPreference;"
		);
	}
	inline android::ranging::RangingPreference_Builder RangingPreference_Builder::setSessionConfig(android::ranging::SessionConfig arg0) const
	{
		return callObjectMethod(
			"setSessionConfig",
			"(Landroid/ranging/SessionConfig;)Landroid/ranging/RangingPreference$Builder;",
			arg0.object()
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
