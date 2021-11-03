#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	// QJniObject forward
	MediaPlayer_DrmInfo::MediaPlayer_DrmInfo(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject MediaPlayer_DrmInfo::getPssh()
	{
		return callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	jarray MediaPlayer_DrmInfo::getSupportedSchemes()
	{
		return callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		).object<jarray>();
	}
} // namespace android::media

