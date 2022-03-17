#pragma once

#include "./UiTranslationManager.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void UiTranslationManager::registerUiTranslationStateCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerUiTranslationStateCallback",
			"(Ljava/util/concurrent/Executor;Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void UiTranslationManager::unregisterUiTranslationStateCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterUiTranslationStateCallback",
			"(Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
