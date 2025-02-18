#pragma once

#include "./WebTriggerParams.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./WebTriggerParams_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline WebTriggerParams_Builder::WebTriggerParams_Builder(android::net::Uri arg0)
		: JObject(
			"android.adservices.measurement.WebTriggerParams$Builder",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::measurement::WebTriggerParams WebTriggerParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/WebTriggerParams;"
		);
	}
	inline android::adservices::measurement::WebTriggerParams_Builder WebTriggerParams_Builder::setDebugKeyAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setDebugKeyAllowed",
			"(Z)Landroid/adservices/measurement/WebTriggerParams$Builder;",
			arg0
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
