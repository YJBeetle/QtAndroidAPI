#include "../../JString.hpp"
#include "./EncoderProfiles_VideoProfile.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	EncoderProfiles_VideoProfile::EncoderProfiles_VideoProfile(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EncoderProfiles_VideoProfile::getBitrate()
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getCodec()
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getFrameRate()
	{
		return callMethod<jint>(
			"getFrameRate",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString EncoderProfiles_VideoProfile::getMediaType()
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	jint EncoderProfiles_VideoProfile::getProfile()
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getWidth()
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::media

