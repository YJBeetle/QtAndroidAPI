#include "./EncoderProfiles.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	EncoderProfiles::EncoderProfiles(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject EncoderProfiles::getAudioProfiles()
	{
		return callObjectMethod(
			"getAudioProfiles",
			"()Ljava/util/List;"
		);
	}
	jint EncoderProfiles::getDefaultDurationSeconds()
	{
		return callMethod<jint>(
			"getDefaultDurationSeconds",
			"()I"
		);
	}
	jint EncoderProfiles::getRecommendedFileFormat()
	{
		return callMethod<jint>(
			"getRecommendedFileFormat",
			"()I"
		);
	}
	JObject EncoderProfiles::getVideoProfiles()
	{
		return callObjectMethod(
			"getVideoProfiles",
			"()Ljava/util/List;"
		);
	}
} // namespace android::media

