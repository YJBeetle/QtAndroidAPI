#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Sent.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms_Sent::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms_Sent::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Sent",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_Mms_Sent::Telephony_Mms_Sent(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

