#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::app
{
	class PendingIntent;
}
namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaSession2_ControllerInfo;
}
namespace android::media
{
	class MediaSession2_SessionCallback;
}
namespace android::media
{
	class Session2Command;
}
namespace android::media
{
	class Session2Token;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaSession2 : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSession2(QAndroidJniObject obj);
		// Constructors
		MediaSession2() = default;
		
		// Methods
		void broadcastSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1);
		void cancelSessionCommand(android::media::MediaSession2_ControllerInfo arg0, jobject arg1);
		void close();
		QAndroidJniObject getConnectedControllers();
		jstring getId();
		QAndroidJniObject getToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(android::media::MediaSession2_ControllerInfo arg0, android::media::Session2Command arg1, android::os::Bundle arg2);
		void setPlaybackActive(jboolean arg0);
	};
} // namespace android::media

