#pragma once

#include "./EmojiConsistency.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject EmojiConsistency::getEmojiConsistencySet()
	{
		return callStaticObjectMethod(
			"android.text.EmojiConsistency",
			"getEmojiConsistencySet",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
