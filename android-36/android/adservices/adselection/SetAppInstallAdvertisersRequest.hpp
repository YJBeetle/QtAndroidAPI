#pragma once

#include "./SetAppInstallAdvertisersRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject SetAppInstallAdvertisersRequest::getAdvertisers() const
	{
		return callObjectMethod(
			"getAdvertisers",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
