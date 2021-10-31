#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaPlayer_DrmInfo::MediaPlayer_DrmInfo(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass MediaPlayer_DrmInfo::getPssh()
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

