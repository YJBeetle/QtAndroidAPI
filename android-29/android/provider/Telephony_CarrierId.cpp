#include "../net/Uri.hpp"
#include "./Telephony_CarrierId.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_CarrierId::CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_CarrierId::CARRIER_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject Telephony_CarrierId::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_CarrierId::SPECIFIC_CARRIER_ID()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_CarrierId::SPECIFIC_CARRIER_ID_NAME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"SPECIFIC_CARRIER_ID_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	Telephony_CarrierId::Telephony_CarrierId(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Telephony_CarrierId::getSpecificCarrierIdUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getSpecificCarrierIdUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
	QAndroidJniObject Telephony_CarrierId::getUriForSubscriptionId(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace android::provider

