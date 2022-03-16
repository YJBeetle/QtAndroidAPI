#include "../../JString.hpp"
#include "./EncoderProfiles_AudioProfile.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	jint EncoderProfiles_AudioProfile::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getChannels() const
	{
		return callMethod<jint>(
			"getChannels",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getCodec() const
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	JString EncoderProfiles_AudioProfile::getMediaType() const
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	jint EncoderProfiles_AudioProfile::getProfile() const
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getSampleRate() const
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
} // namespace android::media

