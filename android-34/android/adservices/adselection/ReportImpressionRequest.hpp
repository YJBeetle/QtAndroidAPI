#pragma once

#include "./AdSelectionConfig.def.hpp"
#include "./ReportImpressionRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline ReportImpressionRequest::ReportImpressionRequest(jlong arg0, android::adservices::adselection::AdSelectionConfig arg1)
		: JObject(
			"android.adservices.adselection.ReportImpressionRequest",
			"(JLandroid/adservices/adselection/AdSelectionConfig;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::AdSelectionConfig ReportImpressionRequest::getAdSelectionConfig() const
	{
		return callObjectMethod(
			"getAdSelectionConfig",
			"()Landroid/adservices/adselection/AdSelectionConfig;"
		);
	}
	inline jlong ReportImpressionRequest::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
