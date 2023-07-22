#pragma once

#include "../../../../JObject.hpp"
#include "./MandatoryStreamCombination_MandatoryStreamInformation.def.hpp"

namespace android::hardware::camera2::params
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean MandatoryStreamCombination_MandatoryStreamInformation::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MandatoryStreamCombination_MandatoryStreamInformation::get10BitFormat() const
	{
		return callMethod<jint>(
			"get10BitFormat",
			"()I"
		);
	}
	inline JObject MandatoryStreamCombination_MandatoryStreamInformation::getAvailableSizes() const
	{
		return callObjectMethod(
			"getAvailableSizes",
			"()Ljava/util/List;"
		);
	}
	inline jint MandatoryStreamCombination_MandatoryStreamInformation::getFormat() const
	{
		return callMethod<jint>(
			"getFormat",
			"()I"
		);
	}
	inline jlong MandatoryStreamCombination_MandatoryStreamInformation::getStreamUseCase() const
	{
		return callMethod<jlong>(
			"getStreamUseCase",
			"()J"
		);
	}
	inline jint MandatoryStreamCombination_MandatoryStreamInformation::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MandatoryStreamCombination_MandatoryStreamInformation::is10BitCapable() const
	{
		return callMethod<jboolean>(
			"is10BitCapable",
			"()Z"
		);
	}
	inline jboolean MandatoryStreamCombination_MandatoryStreamInformation::isInput() const
	{
		return callMethod<jboolean>(
			"isInput",
			"()Z"
		);
	}
	inline jboolean MandatoryStreamCombination_MandatoryStreamInformation::isMaximumSize() const
	{
		return callMethod<jboolean>(
			"isMaximumSize",
			"()Z"
		);
	}
	inline jboolean MandatoryStreamCombination_MandatoryStreamInformation::isUltraHighResolution() const
	{
		return callMethod<jboolean>(
			"isUltraHighResolution",
			"()Z"
		);
	}
} // namespace android::hardware::camera2::params

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware::camera2::params;
#endif
