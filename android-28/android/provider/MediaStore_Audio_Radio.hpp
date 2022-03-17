#pragma once

#include "../../JString.hpp"
#include "./MediaStore_Audio_Radio.def.hpp"

namespace android::provider
{
	// Fields
	inline JString MediaStore_Audio_Radio::ENTRY_CONTENT_TYPE()
	{
		return getStaticObjectField(
			"android.provider.MediaStore$Audio$Radio",
			"ENTRY_CONTENT_TYPE",
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
