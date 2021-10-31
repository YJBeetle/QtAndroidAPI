#include "../net/Uri.hpp"
#include "./Telephony_MmsSms.hpp"

namespace android::provider
{
	// Fields
	QAndroidJniObject Telephony_MmsSms::CONTENT_CONVERSATIONS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_CONVERSATIONS_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_DRAFT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_DRAFT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_FILTER_BYPHONE_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_FILTER_BYPHONE_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_LOCKED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_LOCKED_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_UNDELIVERED_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_UNDELIVERED_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_MmsSms::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_GENERIC_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_GENERIC_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_MMS_PROTO_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_MMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_PERMANENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_PERMANENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_SMS_PROTO_TRANSIENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_SMS_PROTO_TRANSIENT"
		);
	}
	jint Telephony_MmsSms::ERR_TYPE_TRANSPORT_FAILURE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"ERR_TYPE_TRANSPORT_FAILURE"
		);
	}
	jint Telephony_MmsSms::MMS_PROTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"MMS_PROTO"
		);
	}
	jint Telephony_MmsSms::NO_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"NO_ERROR"
		);
	}
	QAndroidJniObject Telephony_MmsSms::SEARCH_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"SEARCH_URI",
			"Landroid/net/Uri;"
		);
	}
	jint Telephony_MmsSms::SMS_PROTO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$MmsSms",
			"SMS_PROTO"
		);
	}
	jstring Telephony_MmsSms::TYPE_DISCRIMINATOR_COLUMN()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$MmsSms",
			"TYPE_DISCRIMINATOR_COLUMN",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Telephony_MmsSms::Telephony_MmsSms(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

