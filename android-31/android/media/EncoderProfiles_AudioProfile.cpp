#include "./EncoderProfiles_AudioProfile.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	EncoderProfiles_AudioProfile::EncoderProfiles_AudioProfile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EncoderProfiles_AudioProfile::getBitrate()
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getChannels()
	{
		return callMethod<jint>(
			"getChannels",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getCodec()
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	jstring EncoderProfiles_AudioProfile::getMediaType()
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint EncoderProfiles_AudioProfile::getProfile()
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	jint EncoderProfiles_AudioProfile::getSampleRate()
	{
		return callMethod<jint>(
			"getSampleRate",
			"()I"
		);
	}
} // namespace android::media

