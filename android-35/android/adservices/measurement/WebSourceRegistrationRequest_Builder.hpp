#pragma once

#include "./WebSourceRegistrationRequest.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../view/InputEvent.def.hpp"
#include "./WebSourceRegistrationRequest_Builder.def.hpp"

namespace android::adservices::measurement
{
	// Fields
	
	// Constructors
	inline WebSourceRegistrationRequest_Builder::WebSourceRegistrationRequest_Builder(JObject arg0, android::net::Uri arg1)
		: JObject(
			"android.adservices.measurement.WebSourceRegistrationRequest$Builder",
			"(Ljava/util/List;Landroid/net/Uri;)V",
			arg0.object(),
			arg1.object()
		) {}
	
	// Methods
	inline android::adservices::measurement::WebSourceRegistrationRequest WebSourceRegistrationRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/measurement/WebSourceRegistrationRequest;"
		);
	}
	inline android::adservices::measurement::WebSourceRegistrationRequest_Builder WebSourceRegistrationRequest_Builder::setAppDestination(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setAppDestination",
			"(Landroid/net/Uri;)Landroid/adservices/measurement/WebSourceRegistrationRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::WebSourceRegistrationRequest_Builder WebSourceRegistrationRequest_Builder::setInputEvent(android::view::InputEvent arg0) const
	{
		return callObjectMethod(
			"setInputEvent",
			"(Landroid/view/InputEvent;)Landroid/adservices/measurement/WebSourceRegistrationRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::WebSourceRegistrationRequest_Builder WebSourceRegistrationRequest_Builder::setVerifiedDestination(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setVerifiedDestination",
			"(Landroid/net/Uri;)Landroid/adservices/measurement/WebSourceRegistrationRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::measurement::WebSourceRegistrationRequest_Builder WebSourceRegistrationRequest_Builder::setWebDestination(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setWebDestination",
			"(Landroid/net/Uri;)Landroid/adservices/measurement/WebSourceRegistrationRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::measurement

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::measurement;
#endif
