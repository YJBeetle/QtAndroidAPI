#include "../net/Uri.hpp"
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
	jstring Telephony_Sms_Conversations::DEFAULT_SORT_ORDER()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"DEFAULT_SORT_ORDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Conversations::MESSAGE_COUNT()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"MESSAGE_COUNT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Sms_Conversations::SNIPPET()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Sms$Conversations",
			"SNIPPET",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Telephony_Sms_Conversations::Telephony_Sms_Conversations(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

