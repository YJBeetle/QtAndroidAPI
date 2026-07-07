#pragma once

#include "./SurfacePackageToken.def.hpp"
#include "./ExecuteInIsolatedServiceResponse.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline jint ExecuteInIsolatedServiceResponse::DEFAULT_BEST_VALUE()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceResponse",
			"DEFAULT_BEST_VALUE"
		);
	}
	
	// Constructors
	inline ExecuteInIsolatedServiceResponse::ExecuteInIsolatedServiceResponse(android::adservices::ondevicepersonalization::SurfacePackageToken arg0, jint arg1)
		: JObject(
			"android.adservices.ondevicepersonalization.ExecuteInIsolatedServiceResponse",
			"(Landroid/adservices/ondevicepersonalization/SurfacePackageToken;I)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	inline jint ExecuteInIsolatedServiceResponse::getBestValue() const
	{
		return callMethod<jint>(
			"getBestValue",
			"()I"
		);
	}
	inline android::adservices::ondevicepersonalization::SurfacePackageToken ExecuteInIsolatedServiceResponse::getSurfacePackageToken() const
	{
		return callObjectMethod(
			"getSurfacePackageToken",
			"()Landroid/adservices/ondevicepersonalization/SurfacePackageToken;"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
