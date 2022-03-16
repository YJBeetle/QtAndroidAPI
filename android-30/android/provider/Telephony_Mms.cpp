#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	android::net::Uri Telephony_Mms::REPORT_REQUEST_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_REQUEST_URI",
			"Landroid/net/Uri;"
		);
	}
	android::net::Uri Telephony_Mms::REPORT_STATUS_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms",
			"REPORT_STATUS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

