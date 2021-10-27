#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media::session
{
	class MediaSessionManager_RemoteUserInfo;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaSession2_ControllerInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSession2_ControllerInfo(QAndroidJniObject obj);
		// Constructors
		MediaSession2_ControllerInfo() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject getConnectionHints();
		jstring getPackageName();
		QAndroidJniObject getRemoteUserInfo();
		jint getUid();
		jint hashCode();
		jstring toString();
	};
} // namespace android::media

