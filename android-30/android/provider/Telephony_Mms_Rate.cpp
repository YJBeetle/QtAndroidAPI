#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Rate.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms_Rate::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms_Rate::SENT_TIME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"SENT_TIME",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Telephony_Mms_Rate::Telephony_Mms_Rate(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

