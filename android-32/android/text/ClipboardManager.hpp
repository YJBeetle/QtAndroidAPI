#pragma once

#include "../../JString.hpp"
#include "./ClipboardManager.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline ClipboardManager::ClipboardManager()
		: JObject(
			"android.text.ClipboardManager",
			"()V"
		) {}
	
	// Methods
	inline JString ClipboardManager::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jboolean ClipboardManager::hasText() const
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	inline void ClipboardManager::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
