#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Inbox.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms_Inbox::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Inbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Sms_Inbox::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Inbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

