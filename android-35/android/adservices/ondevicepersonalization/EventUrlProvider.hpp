#pragma once

#include "../../../JByteArray.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./EventUrlProvider.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::Uri EventUrlProvider::createEventTrackingUrlWithRedirect(android::os::PersistableBundle arg0, android::net::Uri arg1) const
	{
		return callObjectMethod(
			"createEventTrackingUrlWithRedirect",
			"(Landroid/os/PersistableBundle;Landroid/net/Uri;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::net::Uri EventUrlProvider::createEventTrackingUrlWithResponse(android::os::PersistableBundle arg0, JByteArray arg1, JString arg2) const
	{
		return callObjectMethod(
			"createEventTrackingUrlWithResponse",
			"(Landroid/os/PersistableBundle;[BLjava/lang/String;)Landroid/net/Uri;",
			arg0.object(),
			arg1.object<jbyteArray>(),
			arg2.object<jstring>()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
