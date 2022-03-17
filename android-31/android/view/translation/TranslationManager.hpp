#pragma once

#include "../../app/PendingIntent.def.hpp"
#include "./TranslationContext.def.hpp"
#include "./TranslationManager.def.hpp"

namespace android::view::translation
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void TranslationManager::addOnDeviceTranslationCapabilityUpdateListener(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"addOnDeviceTranslationCapabilityUpdateListener",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	inline void TranslationManager::createOnDeviceTranslator(android::view::translation::TranslationContext arg0, JObject arg1, JObject arg2) const
	{
		callMethod<void>(
			"createOnDeviceTranslator",
			"(Landroid/view/translation/TranslationContext;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject TranslationManager::getOnDeviceTranslationCapabilities(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getOnDeviceTranslationCapabilities",
			"(II)Ljava/util/Set;",
			arg0,
			arg1
		);
	}
	inline android::app::PendingIntent TranslationManager::getOnDeviceTranslationSettingsActivityIntent() const
	{
		return callObjectMethod(
			"getOnDeviceTranslationSettingsActivityIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	inline void TranslationManager::removeOnDeviceTranslationCapabilityUpdateListener(JObject arg0) const
	{
		callMethod<void>(
			"removeOnDeviceTranslationCapabilityUpdateListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
} // namespace android::view::translation

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::translation;
#endif
