#include "../../JArray.hpp"
#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaPlayer_DrmInfo::MediaPlayer_DrmInfo(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject MediaPlayer_DrmInfo::getPssh() const
	{
		return callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	JArray MediaPlayer_DrmInfo::getSupportedSchemes() const
	{
		return callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		);
	}
} // namespace android::media

