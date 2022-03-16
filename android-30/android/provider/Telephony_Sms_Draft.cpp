#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Draft.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms_Draft::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Sms_Draft::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Draft",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

