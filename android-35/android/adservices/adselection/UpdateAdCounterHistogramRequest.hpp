#pragma once

#include "../common/AdTechIdentifier.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UpdateAdCounterHistogramRequest.def.hpp"

namespace android::adservices::adselection
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean UpdateAdCounterHistogramRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint UpdateAdCounterHistogramRequest::getAdEventType() const
	{
		return callMethod<jint>(
			"getAdEventType",
			"()I"
		);
	}
	inline jlong UpdateAdCounterHistogramRequest::getAdSelectionId() const
	{
		return callMethod<jlong>(
			"getAdSelectionId",
			"()J"
		);
	}
	inline android::adservices::common::AdTechIdentifier UpdateAdCounterHistogramRequest::getCallerAdTech() const
	{
		return callObjectMethod(
			"getCallerAdTech",
			"()Landroid/adservices/common/AdTechIdentifier;"
		);
	}
	inline jint UpdateAdCounterHistogramRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UpdateAdCounterHistogramRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::adselection

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adselection;
#endif
