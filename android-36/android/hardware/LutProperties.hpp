#pragma once

#include "../../JIntArray.hpp"
#include "./LutProperties.def.hpp"

namespace android::hardware
{
	// Fields
	inline jint LutProperties::ONE_DIMENSION()
	{
		return getStaticField<jint>(
			"android.hardware.LutProperties",
			"ONE_DIMENSION"
		);
	}
	inline jint LutProperties::SAMPLING_KEY_CIE_Y()
	{
		return getStaticField<jint>(
			"android.hardware.LutProperties",
			"SAMPLING_KEY_CIE_Y"
		);
	}
	inline jint LutProperties::SAMPLING_KEY_MAX_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.LutProperties",
			"SAMPLING_KEY_MAX_RGB"
		);
	}
	inline jint LutProperties::SAMPLING_KEY_RGB()
	{
		return getStaticField<jint>(
			"android.hardware.LutProperties",
			"SAMPLING_KEY_RGB"
		);
	}
	inline jint LutProperties::THREE_DIMENSION()
	{
		return getStaticField<jint>(
			"android.hardware.LutProperties",
			"THREE_DIMENSION"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint LutProperties::getDimension() const
	{
		return callMethod<jint>(
			"getDimension",
			"()I"
		);
	}
	inline JIntArray LutProperties::getSamplingKeys() const
	{
		return callObjectMethod(
			"getSamplingKeys",
			"()[I"
		);
	}
	inline jint LutProperties::getSize() const
	{
		return callMethod<jint>(
			"getSize",
			"()I"
		);
	}
} // namespace android::hardware

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::hardware;
#endif
