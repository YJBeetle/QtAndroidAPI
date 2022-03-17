#pragma once

#include "../../JString.hpp"
#include "./Telephony_Mms_Intents.def.hpp"

namespace android::provider
{
	// Fields
	inline JString Telephony_Mms_Intents::CONTENT_CHANGED_ACTION()
	{
		return getStaticObjectField(
			"android.provider.Telephony$Mms$Intents",
			"CONTENT_CHANGED_ACTION",
			"Ljava/lang/String;"
		);
	}
	inline JString Telephony_Mms_Intents::DELETED_CONTENTS()
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::provider;
#endif
