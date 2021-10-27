#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaSession2;
}
namespace android::media
{
	class MediaSession2_ControllerInfo;
}
namespace android::media
{
	class Session2Command;
}
namespace android::media
{
	class Session2Command_Result;
}
namespace android::media
{
	class Session2CommandGroup;
}
namespace android::os
{
	class Bundle;
}

namespace android::media
{
	class MediaSession2_SessionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaSession2_SessionCallback(QAndroidJniObject obj);
		// Constructors
		MediaSession2_SessionCallback();
		
		// Methods
		void onCommandResult(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, jobject arg2, android::media::Session2Command arg3, android::media::Session2Command_Result arg4);
		QAndroidJniObject onConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1);
		void onDisconnected(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1);
		void onPostConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1);
		QAndroidJniObject onSessionCommand(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, android::media::Session2Command arg2, android::os::Bundle arg3);
	};
} // namespace android::media

