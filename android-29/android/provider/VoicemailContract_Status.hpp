#pragma once

#ifndef ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS
#define ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class VoicemailContract_Status : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CONFIGURATION_STATE();
		static jint CONFIGURATION_STATE_CAN_BE_CONFIGURED();
		static jint CONFIGURATION_STATE_CONFIGURING();
		static jint CONFIGURATION_STATE_DISABLED();
		static jint CONFIGURATION_STATE_FAILED();
		static jint CONFIGURATION_STATE_NOT_CONFIGURED();
		static jint CONFIGURATION_STATE_OK();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject DATA_CHANNEL_STATE();
		static jint DATA_CHANNEL_STATE_BAD_CONFIGURATION();
		static jint DATA_CHANNEL_STATE_COMMUNICATION_ERROR();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION();
		static jint DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED();
		static jint DATA_CHANNEL_STATE_OK();
		static jint DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR();
		static jint DATA_CHANNEL_STATE_SERVER_ERROR();
		static QAndroidJniObject DIR_TYPE();
		static QAndroidJniObject ITEM_TYPE();
		static QAndroidJniObject NOTIFICATION_CHANNEL_STATE();
		static jint NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING();
		static jint NOTIFICATION_CHANNEL_STATE_NO_CONNECTION();
		static jint NOTIFICATION_CHANNEL_STATE_OK();
		static QAndroidJniObject PHONE_ACCOUNT_COMPONENT_NAME();
		static QAndroidJniObject PHONE_ACCOUNT_ID();
		static QAndroidJniObject QUOTA_OCCUPIED();
		static QAndroidJniObject QUOTA_TOTAL();
		static jint QUOTA_UNAVAILABLE();
		static QAndroidJniObject SETTINGS_URI();
		static QAndroidJniObject SOURCE_PACKAGE();
		static QAndroidJniObject SOURCE_TYPE();
		static QAndroidJniObject VOICEMAIL_ACCESS_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildSourceUri(jstring arg0);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject VoicemailContract_Status::CONFIGURATION_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE",
			"Ljava/lang/String;");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CAN_BE_CONFIGURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CAN_BE_CONFIGURED");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CONFIGURING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CONFIGURING");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_DISABLED");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_FAILED");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_NOT_CONFIGURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_NOT_CONFIGURED");
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_OK");
	}
	QAndroidJniObject VoicemailContract_Status::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONTENT_URI",
			"Landroid/net/Uri;");
	}
	QAndroidJniObject VoicemailContract_Status::DATA_CHANNEL_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE",
			"Ljava/lang/String;");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_BAD_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_BAD_CONFIGURATION");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_COMMUNICATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_COMMUNICATION_ERROR");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_OK");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR");
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_ERROR");
	}
	QAndroidJniObject VoicemailContract_Status::DIR_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DIR_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"ITEM_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE",
			"Ljava/lang/String;");
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING");
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_NO_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_NO_CONNECTION");
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_OK");
	}
	QAndroidJniObject VoicemailContract_Status::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::PHONE_ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::QUOTA_OCCUPIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_OCCUPIED",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::QUOTA_TOTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_TOTAL",
			"Ljava/lang/String;");
	}
	jint VoicemailContract_Status::QUOTA_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"QUOTA_UNAVAILABLE");
	}
	QAndroidJniObject VoicemailContract_Status::SETTINGS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SETTINGS_URI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::SOURCE_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::SOURCE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_TYPE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject VoicemailContract_Status::VOICEMAIL_ACCESS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"VOICEMAIL_ACCESS_URI",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void VoicemailContract_Status::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.VoicemailContract$Status",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject VoicemailContract_Status::buildSourceUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.VoicemailContract$Status",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class VoicemailContract_Status : public __jni_impl::android::provider::VoicemailContract_Status
	{
	public:
		VoicemailContract_Status(QAndroidJniObject obj) { __thiz = obj; }
		VoicemailContract_Status()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_VOICEMAILCONTRACT_STATUS

