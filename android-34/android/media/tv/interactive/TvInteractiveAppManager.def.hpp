#pragma once

#include "../../../../JObject.hpp"

namespace android::media::tv::interactive
{
	class AppLinkInfo;
}
namespace android::media::tv::interactive
{
	class TvInteractiveAppManager_TvInteractiveAppCallback;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv::interactive
{
	class TvInteractiveAppManager : public JObject
	{
	public:
		// Fields
		static JString ACTION_APP_LINK_COMMAND();
		static JString APP_LINK_KEY_BACK_URI();
		static JString APP_LINK_KEY_CLASS_NAME();
		static JString APP_LINK_KEY_COMMAND_TYPE();
		static JString APP_LINK_KEY_PACKAGE_NAME();
		static JString APP_LINK_KEY_SERVICE_ID();
		static jint ERROR_BLOCKED();
		static jint ERROR_ENCRYPTED();
		static jint ERROR_NONE();
		static jint ERROR_NOT_SUPPORTED();
		static jint ERROR_RESOURCE_UNAVAILABLE();
		static jint ERROR_UNKNOWN();
		static jint ERROR_UNKNOWN_CHANNEL();
		static jint ERROR_WEAK_SIGNAL();
		static JString INTENT_KEY_BI_INTERACTIVE_APP_TYPE();
		static JString INTENT_KEY_BI_INTERACTIVE_APP_URI();
		static JString INTENT_KEY_CHANNEL_URI();
		static JString INTENT_KEY_COMMAND_TYPE();
		static JString INTENT_KEY_INTERACTIVE_APP_SERVICE_ID();
		static JString INTENT_KEY_TV_INPUT_ID();
		static jint INTERACTIVE_APP_STATE_ERROR();
		static jint INTERACTIVE_APP_STATE_RUNNING();
		static jint INTERACTIVE_APP_STATE_STOPPED();
		static jint SERVICE_STATE_ERROR();
		static jint SERVICE_STATE_PREPARING();
		static jint SERVICE_STATE_READY();
		static jint SERVICE_STATE_UNREALIZED();
		static jint TELETEXT_APP_STATE_ERROR();
		static jint TELETEXT_APP_STATE_HIDE();
		static jint TELETEXT_APP_STATE_SHOW();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvInteractiveAppManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvInteractiveAppManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getAppLinkInfoList() const;
		JObject getTvInteractiveAppServiceList() const;
		void registerAppLinkInfo(JString arg0, android::media::tv::interactive::AppLinkInfo arg1) const;
		void registerCallback(JObject arg0, android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback arg1) const;
		void sendAppLinkCommand(JString arg0, android::os::Bundle arg1) const;
		void unregisterAppLinkInfo(JString arg0, android::media::tv::interactive::AppLinkInfo arg1) const;
		void unregisterCallback(android::media::tv::interactive::TvInteractiveAppManager_TvInteractiveAppCallback arg0) const;
	};
} // namespace android::media::tv::interactive

