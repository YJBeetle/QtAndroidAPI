#include "../net/Uri.hpp"
#include "../../JString.hpp"
#include "./Telephony_Mms_Draft.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms_Draft::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Draft",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	JString Telephony_Mms_Draft::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Draft",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	Telephony_Mms_Draft::Telephony_Mms_Draft(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

