#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Outbox.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms_Outbox::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms_Outbox::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Outbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

