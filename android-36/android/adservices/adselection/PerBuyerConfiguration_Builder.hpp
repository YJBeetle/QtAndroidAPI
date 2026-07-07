#pragma once

#include "./PerBuyerConfiguration.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./PerBuyerConfiguration_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline PerBuyerConfiguration_Builder::PerBuyerConfiguration_Builder()
		: JObject(
			"android.adservices.adselection.PerBuyerConfiguration$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::adselection::PerBuyerConfiguration PerBuyerConfiguration_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/PerBuyerConfiguration;"
		);
	}
	inline android::adservices::adselection::PerBuyerConfiguration_Builder PerBuyerConfiguration_Builder::setBuyer(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setBuyer",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/PerBuyerConfiguration$Builder;",
			arg0.object()
		);
	}
	inline android::adservices::adselection::PerBuyerConfiguration_Builder PerBuyerConfiguration_Builder::setTargetInputSizeBytes(jint arg0) const
	{
		return callObjectMethod(
			"setTargetInputSizeBytes",
			"(I)Landroid/adservices/adselection/PerBuyerConfiguration$Builder;",
			arg0
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
