#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}
class JString;

namespace android::provider
{
	class VoicemailContract_Status : public JObject
	{
	public:
		// Fields
		static JString CONFIGURATION_STATE();
		static jint CONFIGURATION_STATE_CAN_BE_CONFIGURED();
		static jint CONFIGURATION_STATE_CONFIGURING();
		static jint CONFIGURATION_STATE_DISABLED();
		static jint CONFIGURATION_STATE_FAILED();
		static jint CONFIGURATION_STATE_NOT_CONFIGURED();
		static jint CONFIGURATION_STATE_OK();
		static android::net::Uri CONTENT_URI();
		static JString DATA_CHANNEL_STATE();
		static jint DATA_CHANNEL_STATE_BAD_CONFIGURATION();
		static jint DATA_CHANNEL_STATE_COMMUNICATION_ERROR();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED();
		static jint DATA_CHANNEL_STATE_OK();
		static jint DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR();
		static jint DATA_CHANNEL_STATE_SERVER_ERROR();
		static JString DIR_TYPE();
		static JString ITEM_TYPE();
		static JString NOTIFICATION_CHANNEL_STATE();
		static jint NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING();
		static jint NOTIFICATION_CHANNEL_STATE_NO_CONNECTION();
		static jint NOTIFICATION_CHANNEL_STATE_OK();
		static JString PHONE_ACCOUNT_COMPONENT_NAME();
		static JString PHONE_ACCOUNT_ID();
		static JString QUOTA_OCCUPIED();
		static JString QUOTA_TOTAL();
		static jint QUOTA_UNAVAILABLE();
		static JString SETTINGS_URI();
		static JString SOURCE_PACKAGE();
		static JString SOURCE_TYPE();
		static JString VOICEMAIL_ACCESS_URI();
		
		// QJniObject forward
		template<typename ...Ts> explicit VoicemailContract_Status(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract_Status(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::net::Uri buildSourceUri(JString arg0);
	};
} // namespace android::provider

