#pragma once

#include "../../../../JObject.hpp"

namespace android::media::tv::ad
{
	class TvAdManager_TvAdServiceCallback;
}
namespace android::os
{
	class Bundle;
}
class JString;

namespace android::media::tv::ad
{
	class TvAdManager : public JObject
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
		static JString INTENT_KEY_AD_SERVICE_ID();
		static JString INTENT_KEY_CHANNEL_URI();
		static JString INTENT_KEY_COMMAND_TYPE();
		static JString INTENT_KEY_TV_INPUT_ID();
		static JString SESSION_DATA_KEY_AD_BUFFER();
		static JString SESSION_DATA_KEY_AD_REQUEST();
		static JString SESSION_DATA_KEY_BROADCAST_INFO_REQUEST();
		static JString SESSION_DATA_KEY_REQUEST_ID();
		static JString SESSION_DATA_TYPE_AD_BUFFER_READY();
		static JString SESSION_DATA_TYPE_AD_REQUEST();
		static JString SESSION_DATA_TYPE_BROADCAST_INFO_REQUEST();
		static JString SESSION_DATA_TYPE_REMOVE_BROADCAST_INFO_REQUEST();
		static jint SESSION_STATE_ERROR();
		static jint SESSION_STATE_RUNNING();
		static jint SESSION_STATE_STOPPED();
		
		// QJniObject forward
		template<typename ...Ts> explicit TvAdManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvAdManager(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getTvAdServiceList() const;
		void registerCallback(JObject arg0, android::media::tv::ad::TvAdManager_TvAdServiceCallback arg1) const;
		void sendAppLinkCommand(JString arg0, android::os::Bundle arg1) const;
		void unregisterCallback(android::media::tv::ad::TvAdManager_TvAdServiceCallback arg0) const;
	};
} // namespace android::media::tv::ad

