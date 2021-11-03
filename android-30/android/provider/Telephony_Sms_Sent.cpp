#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Sent.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms_Sent::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Sent",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Sms_Sent::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Sent",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_Sms_Sent::Telephony_Sms_Sent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

