#pragma once

#include "./GetAdSelectionDataRequest.def.hpp"
#include "./SellerConfiguration.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./GetAdSelectionDataRequest_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline GetAdSelectionDataRequest_Builder::GetAdSelectionDataRequest_Builder()
		: JObject(
			"android.adservices.adselection.GetAdSelectionDataRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::GetAdSelectionDataRequest GetAdSelectionDataRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/GetAdSelectionDataRequest;"
		);
	}
	inline android::adservices::adselection::GetAdSelectionDataRequest_Builder GetAdSelectionDataRequest_Builder::setCoordinatorOriginUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setCoordinatorOriginUri",
			"(Landroid/net/Uri;)Landroid/adservices/adselection/GetAdSelectionDataRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::GetAdSelectionDataRequest_Builder GetAdSelectionDataRequest_Builder::setSeller(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setSeller",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/GetAdSelectionDataRequest$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::GetAdSelectionDataRequest_Builder GetAdSelectionDataRequest_Builder::setSellerConfiguration(android::adservices::adselection::SellerConfiguration arg0) const
	{
		return callObjectMethod(
			"setSellerConfiguration",
			"(Landroid/adservices/adselection/SellerConfiguration;)Landroid/adservices/adselection/GetAdSelectionDataRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
