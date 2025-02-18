#pragma once

#include "./UpdateAdCounterHistogramRequest.def.hpp"
#include "../common/AdTechIdentifier.def.hpp"
#include "./UpdateAdCounterHistogramRequest_Builder.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	inline UpdateAdCounterHistogramRequest_Builder::UpdateAdCounterHistogramRequest_Builder(jlong arg0, jint arg1, android::adservices::common::AdTechIdentifier arg2)
		: JObject(
			"android.adservices.adselection.UpdateAdCounterHistogramRequest$Builder",
			"(JILandroid/adservices/common/AdTechIdentifier;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline android::adservices::adselection::UpdateAdCounterHistogramRequest UpdateAdCounterHistogramRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/adselection/UpdateAdCounterHistogramRequest;"
		);
	}
	inline android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder UpdateAdCounterHistogramRequest_Builder::setAdEventType(jint arg0) const
	{
		return callObjectMethod(
			"setAdEventType",
			"(I)Landroid/adservices/adselection/UpdateAdCounterHistogramRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder UpdateAdCounterHistogramRequest_Builder::setAdSelectionId(jlong arg0) const
	{
		return callObjectMethod(
			"setAdSelectionId",
			"(J)Landroid/adservices/adselection/UpdateAdCounterHistogramRequest$Builder;",
			arg0
		);
	}
	inline android::adservices::adselection::UpdateAdCounterHistogramRequest_Builder UpdateAdCounterHistogramRequest_Builder::setCallerAdTech(android::adservices::common::AdTechIdentifier arg0) const
	{
		return callObjectMethod(
			"setCallerAdTech",
			"(Landroid/adservices/common/AdTechIdentifier;)Landroid/adservices/adselection/UpdateAdCounterHistogramRequest$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
