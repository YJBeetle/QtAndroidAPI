#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Sms_Conversations.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms_Conversations::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Sms_Conversations::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Sms_Conversations::MESSAGE_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"MESSAGE_COUNT",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Sms_Conversations::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"SNIPPET",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

