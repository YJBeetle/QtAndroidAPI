#pragma once

#include "./OnDevicePersonalizationException.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	inline jint OnDevicePersonalizationException::ERROR_INFERENCE_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_INFERENCE_FAILED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_INFERENCE_MODEL_NOT_FOUND()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_INFERENCE_MODEL_NOT_FOUND"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_INVALID_TRAINING_MANIFEST()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_INVALID_TRAINING_MANIFEST"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_ISOLATED_SERVICE_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_ISOLATED_SERVICE_FAILED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_ISOLATED_SERVICE_LOADING_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_ISOLATED_SERVICE_LOADING_FAILED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_ISOLATED_SERVICE_MANIFEST_PARSING_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_ISOLATED_SERVICE_MANIFEST_PARSING_FAILED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_ISOLATED_SERVICE_TIMEOUT()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_ISOLATED_SERVICE_TIMEOUT"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_PERSONALIZATION_DISABLED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_PERSONALIZATION_DISABLED"
		);
	}
	inline jint OnDevicePersonalizationException::ERROR_SCHEDULE_TRAINING_FAILED()
	{
		return getStaticField<jint>(
			"android.adservices.ondevicepersonalization.OnDevicePersonalizationException",
			"ERROR_SCHEDULE_TRAINING_FAILED"
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
