#pragma once

#include "../../JString.hpp"
#include "./EventLogTags_Description.def.hpp"

namespace android::util
{
	// Fields
	inline JString EventLogTags_Description::mName()
	{
		return getObjectField(
			"mName",
			"Ljava/lang/String;"
		);
	}
	inline jint EventLogTags_Description::mTag()
	{
		return getField<jint>(
			"mTag"
		);
	}
	
	// Constructors
	
	// Methods
} // namespace android::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::util;
#endif
