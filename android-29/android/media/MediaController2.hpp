#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaController2_ControllerCallback;
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
	class MediaController2 : public __JniBaseClass
	{
	public:
		// Fields
		
		MediaController2(QAndroidJniObject obj);
		// Constructors
		MediaController2() = default;
		
		// Methods
		void cancelSessionCommand(jobject arg0);
		void close();
		QAndroidJniObject getConnectedToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1);
	};
} // namespace android::media

