#pragma once

#include "../../JString.hpp"
#include "./EncoderProfiles_VideoProfile.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint EncoderProfiles_VideoProfile::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getCodec() const
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getFrameRate() const
	{
		return callMethod<jint>(
			"getFrameRate",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JString EncoderProfiles_VideoProfile::getMediaType() const
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getProfile() const
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	inline jint EncoderProfiles_VideoProfile::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
