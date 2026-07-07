#pragma once

#include "./ExecuteInIsolatedServiceRequest_OutputSpec.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec ExecuteInIsolatedServiceRequest_OutputSpec::DEFAULT()
	{
		return getStaticObjectField(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceRequest$OutputSpec",
			"DEFAULT",
			"Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$OutputSpec;"
		);
	}
	inline jint ExecuteInIsolatedServiceRequest_OutputSpec::OUTPUT_TYPE_BEST_VALUE()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceRequest$OutputSpec",
			"OUTPUT_TYPE_BEST_VALUE"
		);
	}
	inline jint ExecuteInIsolatedServiceRequest_OutputSpec::OUTPUT_TYPE_NULL()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceRequest$OutputSpec",
			"OUTPUT_TYPE_NULL"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::adservices::ondevicepersonalization::ExecuteInIsolatedServiceRequest_OutputSpec ExecuteInIsolatedServiceRequest_OutputSpec::buildBestValueSpec(jint arg0)
	{
		return callStaticObjectMethod(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceRequest$OutputSpec",
			"buildBestValueSpec",
			"(I)Landroid/adservices/ondevicepersonalization/ExecuteInIsolatedServiceRequest$OutputSpec;",
			arg0
		);
	}
	inline jint ExecuteInIsolatedServiceRequest_OutputSpec::getMaxIntValue() const
	{
		return callMethod<jint>(
			"getMaxIntValue",
			"()I"
		);
	}
	inline jint ExecuteInIsolatedServiceRequest_OutputSpec::getOutputType() const
	{
		return callMethod<jint>(
			"getOutputType",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
