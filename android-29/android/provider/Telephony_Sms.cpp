#include "../content/Context.hpp"
#include "../net/Uri.hpp"
#include "./Telephony_Sms.hpp"

namespace android::provider
{
	// Fields
	android::net::Uri Telephony_Sms::CONTENT_URI()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	jstring Telephony_Sms::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Telephony_Sms::Telephony_Sms(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jstring Telephony_Sms::getDefaultSmsPackage(android::content::Context arg0)
	{
		return callStaticObjectMethod(
			"android.provider.Telephony$Sms",
			"getDefaultSmsPackage",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.object()
		).object<jstring>();
	}
} // namespace android::provider

