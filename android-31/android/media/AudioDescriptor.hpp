#pragma once

#include "../../JByteArray.hpp"
#include "./AudioDescriptor.def.hpp"

namespace android::media
{
	// Fields
	inline jint AudioDescriptor::STANDARD_EDID()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_EDID"
		);
	}
	inline jint AudioDescriptor::STANDARD_NONE()
	{
		return getStaticField<jint>(
			"android.media.AudioDescriptor",
			"STANDARD_NONE"
		);
	}
	
	// Constructors
	
	// Methods
	inline JByteArray AudioDescriptor::getDescriptor() const
	{
		return callObjectMethod(
			"getDescriptor",
			"()[B"
		);
	}
	inline jint AudioDescriptor::getEncapsulationType() const
	{
		return callMethod<jint>(
			"getEncapsulationType",
			"()I"
		);
	}
	inline jint AudioDescriptor::getStandard() const
	{
		return callMethod<jint>(
			"getStandard",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
