#pragma once

#include "../../JObject.hpp"

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
class JObject;

namespace android::media
{
	class MediaController2_ControllerCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController2_ControllerCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController2_ControllerCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MediaController2_ControllerCallback();
		
		// Methods
		void onCommandResult(android::media::MediaController2 arg0, JObject arg1, android::media::Session2Command arg2, android::media::Session2Command_Result arg3) const;
		void onConnected(android::media::MediaController2 arg0, android::media::Session2CommandGroup arg1) const;
		void onDisconnected(android::media::MediaController2 arg0) const;
		void onPlaybackActiveChanged(android::media::MediaController2 arg0, jboolean arg1) const;
		android::media::Session2Command_Result onSessionCommand(android::media::MediaController2 arg0, android::media::Session2Command arg1, android::os::Bundle arg2) const;
	};
} // namespace android::media

