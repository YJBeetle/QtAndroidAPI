#pragma once

#include "../../JString.hpp"
#include "./EncoderProfiles_AudioProfile.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint EncoderProfiles_AudioProfile::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	inline jint EncoderProfiles_AudioProfile::getChannels() const
	{
		return callMethod<jint>(
			"getChannels",
			"()I"
		);
	}
	inline jint EncoderProfiles_AudioProfile::getCodec() const
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	inline JString EncoderProfiles_AudioProfile::getMediaType() const
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint EncoderProfiles_AudioProfile::getProfile() const
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	inline jint EncoderProfiles_AudioProfile::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
