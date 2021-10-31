#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaController2;
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
	class MediaController2_ControllerCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaController2_ControllerCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaController2_ControllerCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaController2_ControllerCallback();
		
		// Methods
		void onCommandResult(android::media::MediaController2 arg0, jobject arg1, android::media::Session2Command arg2, android::media::Session2Command_Result arg3);
		void onConnected(android::media::MediaController2 arg0, android::media::Session2CommandGroup arg1);
		void onDisconnected(android::media::MediaController2 arg0);
		void onPlaybackActiveChanged(android::media::MediaController2 arg0, jboolean arg1);
		android::media::Session2Command_Result onSessionCommand(android::media::MediaController2 arg0, android::media::Session2Command arg1, android::os::Bundle arg2);
	};
} // namespace android::media
