#pragma once

#include "../../JString.hpp"
#include "./LoginFilter.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString LoginFilter::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline jboolean LoginFilter::isAllowed(jchar arg0) const
	{
		return callMethod<jboolean>(
			"isAllowed",
			"(C)Z",
			arg0
		);
	}
	inline void LoginFilter::onInvalidCharacter(jchar arg0) const
	{
		callMethod<void>(
			"onInvalidCharacter",
			"(C)V",
			arg0
		);
	}
	inline void LoginFilter::onStart() const
	{
		callMethod<void>(
			"onStart",
			"()V"
		);
	}
	inline void LoginFilter::onStop() const
	{
		callMethod<void>(
			"onStop",
			"()V"
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
