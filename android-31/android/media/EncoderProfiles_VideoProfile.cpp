#include "../../JString.hpp"
#include "./EncoderProfiles_VideoProfile.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	EncoderProfiles_VideoProfile::EncoderProfiles_VideoProfile(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jint EncoderProfiles_VideoProfile::getBitrate() const
	{
		return callMethod<jint>(
			"getBitrate",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getCodec() const
	{
		return callMethod<jint>(
			"getCodec",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getFrameRate() const
	{
		return callMethod<jint>(
			"getFrameRate",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JString EncoderProfiles_VideoProfile::getMediaType() const
	{
		return callObjectMethod(
			"getMediaType",
			"()Ljava/lang/String;"
		);
	}
	jint EncoderProfiles_VideoProfile::getProfile() const
	{
		return callMethod<jint>(
			"getProfile",
			"()I"
		);
	}
	jint EncoderProfiles_VideoProfile::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
} // namespace android::media

