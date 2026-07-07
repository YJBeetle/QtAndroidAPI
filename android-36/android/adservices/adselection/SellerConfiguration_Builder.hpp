#pragma once

#include "./SellerConfiguration.def.hpp"
#include "./SellerConfiguration_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline SellerConfiguration_Builder::SellerConfiguration_Builder()
		: JObject(
			"android.adservices.adselection.SellerConfiguration$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::SellerConfiguration SellerConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/SellerConfiguration;"
		);
	}
	inline android::adservices::adselection::SellerConfiguration_Builder SellerConfiguration_Builder::setMaximumPayloadSizeBytes(jint arg0) const
	{
		return callObjectMethod(
			"setMaximumPayloadSizeBytes",
			"(I)Landroid/adservices/adselection/SellerConfiguration$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::SellerConfiguration_Builder SellerConfiguration_Builder::setPerBuyerConfigurations(JObject arg0) const
	{
		return callObjectMethod(
			"setPerBuyerConfigurations",
			"(Ljava/util/Set;)Landroid/adservices/adselection/SellerConfiguration$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
