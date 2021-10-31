#include "./EncoderProfiles.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	EncoderProfiles::EncoderProfiles(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass EncoderProfiles::getAudioProfiles()
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
	__JniBaseClass EncoderProfiles::getVideoProfiles()
	{
		return callObjectMethod(
			"getVideoProfiles",
			"()Ljava/util/List;"
		);
	}
} // namespace android::media

