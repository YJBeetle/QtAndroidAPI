#include "./Telephony_Mms_Intents.hpp"

namespace android::provider
{
	// Fields
	jstring Telephony_Mms_Intents::CONTENT_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"CONTENT_CHANGED_ACTION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Telephony_Mms_Intents::DELETED_CONTENTS()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"DELETED_CONTENTS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Telephony_Mms_Intents::Telephony_Mms_Intents(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
} // namespace android::provider

