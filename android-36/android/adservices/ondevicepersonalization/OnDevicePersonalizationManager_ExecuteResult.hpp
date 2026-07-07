#pragma once

#include "../../../JByteArray.hpp"
#include "./SurfacePackageToken.def.hpp"
#include "./OnDevicePersonalizationManager_ExecuteResult.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JByteArray OnDevicePersonalizationManager_ExecuteResult::getOutputData() const
	{
		return callObjectMethod(
			"getOutputData",
			"()[B"
		);
	}
	inline android::adservices::ondevicepersonalization::SurfacePackageToken OnDevicePersonalizationManager_ExecuteResult::getSurfacePackageToken() const
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
