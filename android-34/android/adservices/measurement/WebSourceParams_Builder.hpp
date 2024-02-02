#pragma once

#include "./WebSourceParams.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./WebSourceParams_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline WebSourceParams_Builder::WebSourceParams_Builder(android::net::Uri arg0)
		: JObject(
			"android.adservices.measurement.WebSourceParams$Builder",
			"(Landroid/net/Uri;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::measurement::WebSourceParams WebSourceParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/WebSourceParams;"
		);
	}
	inline android::adservices::measurement::WebSourceParams_Builder WebSourceParams_Builder::setDebugKeyAllowed(jboolean arg0) const
	{
		return callObjectMethod(
			"setDebugKeyAllowed",
			"(Z)Landroid/adservices/measurement/WebSourceParams$Builder;",
			arg0
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
