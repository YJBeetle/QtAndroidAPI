#include "../net/Uri.hpp"
#include "./Telephony_CarrierId.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_CarrierId::CARRIER_ID()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_ID",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_CarrierId::CARRIER_NAME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CARRIER_NAME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	android::net::Uri Telephony_CarrierId::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$CarrierId",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// QJniObject forward
	Telephony_CarrierId::Telephony_CarrierId(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	android::net::Uri Telephony_CarrierId::getUriForSubscriptionId(jint arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$CarrierId",
			"getUriForSubscriptionId",
			"(I)Landroid/net/Uri;",
			arg0
		);
	}
} // namespace android::provider

