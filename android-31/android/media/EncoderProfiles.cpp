#include "./EncoderProfiles.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	EncoderProfiles::EncoderProfiles(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject EncoderProfiles::getAudioProfiles() const
	{
		return callObjectMethod(
			"getAudioProfiles",
			"()Ljava/util/List;"
		);
	}
	jint EncoderProfiles::getDefaultDurationSeconds() const
	{
		return callMethod<jint>(
			"getDefaultDurationSeconds",
			"()I"
		);
	}
	jint EncoderProfiles::getRecommendedFileFormat() const
	{
		return callMethod<jint>(
			"getRecommendedFileFormat",
			"()I"
		);
	}
	JObject EncoderProfiles::getVideoProfiles() const
	{
		return callObjectMethod(
			"getVideoProfiles",
			"()Ljava/util/List;"
		);
	}
} // namespace android::media

