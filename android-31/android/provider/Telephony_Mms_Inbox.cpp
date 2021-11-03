#include "../net/Uri.hpp"
#include "./Telephony_Mms_Inbox.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Mms_Inbox::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Inbox",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Mms_Inbox::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Inbox",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Telephony_Mms_Inbox::Telephony_Mms_Inbox(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

