#include "../net/Uri.hpp"
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
	jstring Telephony_Mms_Rate::SENT_TIME()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Rate",
			"SENT_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	Telephony_Mms_Rate::Telephony_Mms_Rate(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

