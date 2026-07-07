#pragma once

#include "./WebTriggerRegistrationRequest.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./WebTriggerRegistrationRequest_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline WebTriggerRegistrationRequest_Builder::WebTriggerRegistrationRequest_Builder(JObject arg0, android::net::Uri arg1)
		: JObject(
			"android.adservices.measurement.WebTriggerRegistrationRequest$Builder",
			"(Ljava/util/List;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::adservices::measurement::WebTriggerRegistrationRequest WebTriggerRegistrationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/WebTriggerRegistrationRequest;"
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
