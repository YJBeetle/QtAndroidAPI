#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Outbox.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms_Outbox::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Outbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Sms_Outbox::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Outbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_Sms_Outbox::Telephony_Sms_Outbox(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

