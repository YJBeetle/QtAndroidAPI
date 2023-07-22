#pragma once

#include "../../../app/Service.def.hpp"

namespace android::content
{
	class Intent;
}
namespace android::media::tv::interactive
{
	class AppLinkInfo;
}
namespace android::media::tv::interactive
{
	class TvInteractiveAppService_Session;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppService : public android::app::Service
	{
	public:
		// Fields
		static JString COMMAND_PARAMETER_KEY_CHANGE_CHANNEL_QUIETLY();
		static JString COMMAND_PARAMETER_KEY_CHANNEL_URI();
		static JString COMMAND_PARAMETER_KEY_INPUT_ID();
		static JString COMMAND_PARAMETER_KEY_TRACK_ID();
		static JString COMMAND_PARAMETER_KEY_TRACK_TYPE();
		static JString COMMAND_PARAMETER_KEY_VOLUME();
		static JString PLAYBACK_COMMAND_TYPE_SELECT_TRACK();
		static JString PLAYBACK_COMMAND_TYPE_SET_STREAM_VOLUME();
		static JString PLAYBACK_COMMAND_TYPE_STOP();
		static JString PLAYBACK_COMMAND_TYPE_TUNE();
		static JString PLAYBACK_COMMAND_TYPE_TUNE_NEXT();
		static JString PLAYBACK_COMMAND_TYPE_TUNE_PREV();
		static JString SERVICE_INTERFACE();
		static JString SERVICE_META_DATA();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppService(const char *className, const char *sig, Ts...agv) : android::app::Service(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppService(QAndroidJniObject obj) : android::app::Service(obj) {}
		
		// Constructors
		TvInteractiveAppService();
		
		// Methods
		void notifyStateChanged(jint arg0, jint arg1, jint arg2) const;
		void onAppLinkCommand(android::os::Bundle arg0) const;
		JObject onBind(android::content::Intent arg0) const;
		android::media::tv::interactive::TvInteractiveAppService_Session onCreateSession(JString arg0, jint arg1) const;
		void onRegisterAppLinkInfo(android::media::tv::interactive::AppLinkInfo arg0) const;
		void onUnregisterAppLinkInfo(android::media::tv::interactive::AppLinkInfo arg0) const;
	};
} // namespace android::media::tv::interactive

