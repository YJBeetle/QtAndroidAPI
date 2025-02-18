#pragma once

#include "./SetAppInstallAdvertisersRequest.def.hpp"
#include "./SetAppInstallAdvertisersRequest_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline SetAppInstallAdvertisersRequest_Builder::SetAppInstallAdvertisersRequest_Builder()
		: JObject(
			"android.adservices.adselection.SetAppInstallAdvertisersRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::SetAppInstallAdvertisersRequest SetAppInstallAdvertisersRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/SetAppInstallAdvertisersRequest;"
		);
	}
	inline android::adservices::adselection::SetAppInstallAdvertisersRequest_Builder SetAppInstallAdvertisersRequest_Builder::setAdvertisers(JObject arg0) const
	{
		return callObjectMethod(
			"setAdvertisers",
			"(Ljava/util/Set;)Landroid/adservices/adselection/SetAppInstallAdvertisersRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
