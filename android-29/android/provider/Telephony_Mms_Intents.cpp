#include "../../JString.hpp"
#include "./Telephony_Mms_Intents.hpp"

namespace android::provider
{
	// Fields
	JString Telephony_Mms_Intents::CONTENT_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"CONTENT_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	JString Telephony_Mms_Intents::DELETED_CONTENTS()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"DELETED_CONTENTS",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::provider

