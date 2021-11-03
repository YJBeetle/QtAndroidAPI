#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::media
{
	class MediaSession2_SessionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSession2_SessionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSession2_SessionCallback(QAndroidJniObject obj);
		
		// Constructors
		MediaSession2_SessionCallback();
		
		// Methods
		void onCommandResult(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, JObject arg2, android::media::Session2Command arg3, android::media::Session2Command_Result arg4) const;
		android::media::Session2CommandGroup onConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const;
		void onDisconnected(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const;
		void onPostConnect(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1) const;
		android::media::Session2Command_Result onSessionCommand(android::media::MediaSession2 arg0, android::media::MediaSession2_ControllerInfo arg1, android::media::Session2Command arg2, android::os::Bundle arg3) const;
	};
} // namespace android::media

