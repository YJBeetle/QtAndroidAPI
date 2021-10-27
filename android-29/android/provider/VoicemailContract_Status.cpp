#include "../net/Uri.hpp"
#include "./VoicemailContract_Status.hpp"

namespace android::provider
{
	// Fields
	jstring VoicemailContract_Status::CONFIGURATION_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CAN_BE_CONFIGURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CAN_BE_CONFIGURED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_CONFIGURING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_CONFIGURING"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_DISABLED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_DISABLED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_FAILED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_FAILED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_NOT_CONFIGURED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_NOT_CONFIGURED"
		);
	}
	jint VoicemailContract_Status::CONFIGURATION_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"CONFIGURATION_STATE_OK"
		);
	}
	QAndroidJniObject VoicemailContract_Status::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring VoicemailContract_Status::DATA_CHANNEL_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_BAD_CONFIGURATION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_BAD_CONFIGURATION"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_COMMUNICATION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_COMMUNICATION_ERROR"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_NO_CONNECTION_CELLULAR_REQUIRED"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_OK"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_CONNECTION_ERROR"
		);
	}
	jint VoicemailContract_Status::DATA_CHANNEL_STATE_SERVER_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"DATA_CHANNEL_STATE_SERVER_ERROR"
		);
	}
	jstring VoicemailContract_Status::DIR_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"DIR_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::ITEM_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"ITEM_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_MESSAGE_WAITING"
		);
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_NO_CONNECTION()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_NO_CONNECTION"
		);
	}
	jint VoicemailContract_Status::NOTIFICATION_CHANNEL_STATE_OK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"NOTIFICATION_CHANNEL_STATE_OK"
		);
	}
	jstring VoicemailContract_Status::PHONE_ACCOUNT_COMPONENT_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_COMPONENT_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::PHONE_ACCOUNT_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"PHONE_ACCOUNT_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::QUOTA_OCCUPIED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_OCCUPIED",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::QUOTA_TOTAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"QUOTA_TOTAL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoicemailContract_Status::QUOTA_UNAVAILABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.VoicemailContract$Status",
			"QUOTA_UNAVAILABLE"
		);
	}
	jstring VoicemailContract_Status::SETTINGS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SETTINGS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::SOURCE_PACKAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_PACKAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::SOURCE_TYPE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"SOURCE_TYPE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring VoicemailContract_Status::VOICEMAIL_ACCESS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.VoicemailContract$Status",
			"VOICEMAIL_ACCESS_URI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	VoicemailContract_Status::VoicemailContract_Status(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject VoicemailContract_Status::buildSourceUri(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.VoicemailContract$Status",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject VoicemailContract_Status::buildSourceUri(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.VoicemailContract$Status",
			"buildSourceUri",
			"(Ljava/lang/String;)Landroid/net/Uri;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::provider

