#include "../os/Parcel.hpp"
#include "./MediaPlayer_DrmInfo.hpp"

namespace android::media
{
	// Fields
	
	MediaPlayer_DrmInfo::MediaPlayer_DrmInfo(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MediaPlayer_DrmInfo::getPssh()
	{
		return __thiz.callObjectMethod(
			"getPssh",
			"()Ljava/util/Map;"
		);
	}
	jarray MediaPlayer_DrmInfo::getSupportedSchemes()
	{
		return __thiz.callObjectMethod(
			"getSupportedSchemes",
			"()[Ljava/util/UUID;"
		).object<jarray>();
	}
} // namespace android::media

