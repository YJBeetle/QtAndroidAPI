#pragma once

#include "./OnDevicePersonalizationException.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline jint OnDevicePersonalizationException::ERROR_ISOLATED_SERVICE_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_ISOLATED_SERVICE_FAILED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_PERSONALIZATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_PERSONALIZATION_DISABLED"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint OnDevicePersonalizationException::getErrorCode() const
	{
		return callMethod<jint>(
			"getErrorCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
