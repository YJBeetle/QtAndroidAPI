#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::provider
{
	class VoicemailContract_Status : public __JniBaseClass
	{
	public:
		// Fields
		static jstring CONFIGURATION_STATE();
		static jint CONFIGURATION_STATE_CAN_BE_CONFIGURED();
		static jint CONFIGURATION_STATE_CONFIGURING();
		static jint CONFIGURATION_STATE_DISABLED();
		static jint CONFIGURATION_STATE_FAILED();
		static jint CONFIGURATION_STATE_NOT_CONFIGURED();
		static jint CONFIGURATION_STATE_OK();
		static QAndroidJniObject CONTENT_URI();
		static jstring DATA_CHANNEL_STATE();
		static jint DATA_CHANNEL_STATE_BAD_CONFIGURATION();
		static jint DATA_CHANNEL_STATE_COMMUNICATION_ERROR();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED();
		static jint DATA_CHANNEL_STATE_OK();
		static jint DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR();
		static jint DATA_CHANNEL_STATE_SERVER_ERROR();
		static jstring DIR_TYPE();
		static jstring ITEM_TYPE();
		static jstring NOTIFICATION_CHANNEL_STATE();
		static jint NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING();
		static jint NOTIFICATION_CHANNEL_STATE_NO_CONNECTION();
		static jint NOTIFICATION_CHANNEL_STATE_OK();
		static jstring PHONE_ACCOUNT_COMPONENT_NAME();
		static jstring PHONE_ACCOUNT_ID();
		static jstring QUOTA_OCCUPIED();
		static jstring QUOTA_TOTAL();
		static jint QUOTA_UNAVAILABLE();
		static jstring SETTINGS_URI();
		static jstring SOURCE_PACKAGE();
		static jstring SOURCE_TYPE();
		static jstring VOICEMAIL_ACCESS_URI();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoicemailContract_Status(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VoicemailContract_Status(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject buildSourceUri(jstring arg0);
	};
} // namespace android::provider

