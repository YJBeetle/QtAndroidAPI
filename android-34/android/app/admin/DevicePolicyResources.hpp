#pragma once

#include "../../../JString.hpp"
#include "./DevicePolicyResources.def.hpp"

namespace android::app::admin
{
	// Fields
	inline JString DevicePolicyResources::UNDEFINED()
	{
		return getStaticObjectField(
			"android.app.admin.DevicePolicyResources",
			"UNDEFINED",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::app::admin

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::admin;
#endif
