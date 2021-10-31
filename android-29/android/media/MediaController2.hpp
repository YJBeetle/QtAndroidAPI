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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController2(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaController2(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void cancelSessionCommand(jobject arg0);
		void close();
		android::media::Session2Token getConnectedToken();
		jboolean isPlaybackActive();
		jobject sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1);
	};
} // namespace android::media

