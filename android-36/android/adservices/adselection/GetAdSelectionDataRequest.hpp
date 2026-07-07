#pragma once

#include "./SellerConfiguration.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "../../net/Uri.def.hpp"
#include "./GetAdSelectionDataRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::net::Uri GetAdSelectionDataRequest::getCoordinatorOriginUri() const
	{
		return callObjectMethod(
			"getCoordinatorOriginUri",
			"()Landroid/net/Uri;"
		);
	}
	inline android::adservices::common::AdTechIdentifier GetAdSelectionDataRequest::getSeller() const
	{
		return callObjectMethod(
			"getSeller",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline android::adservices::adselection::SellerConfiguration GetAdSelectionDataRequest::getSellerConfiguration() const
	{
		return callObjectMethod(
			"getSellerConfiguration",
			"()Landroid/adservices/adselection/SellerConfiguration;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
