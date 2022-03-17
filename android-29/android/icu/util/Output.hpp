#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./Output.def.hpp"

namespace android::icu::util
{
	// Fields
	inline JObject Output::value()
	{
		return getObjectField(
			"value",
			"Ljava/lang/Object;"
		);
	}
	
	// Constructors
	inline Output::Output()
		: JObject(
			"android.icu.util.Output",
			"()V"
		) {}
	inline Output::Output(JObject arg0)
		: JObject(
			"android.icu.util.Output",
			"(Ljava/lang/Object;)V",
			arg0.object<jobject>()
		) {}
	
	// Methods
	inline JString Output::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::util;
#endif
