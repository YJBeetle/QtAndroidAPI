#include "../../app/PendingIntent.hpp"
#include "./TranslationContext.hpp"
#include "./TranslationManager.hpp"

namespace android::view::translation
{
	// Fields
	
	// QAndroidJniObject forward
	TranslationManager::TranslationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void TranslationManager::addOnDeviceTranslationCapabilityUpdateListener(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"addOnDeviceTranslationCapabilityUpdateListener",
			"(Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void TranslationManager::createOnDeviceTranslator(android::view::translation::TranslationContext arg0, __JniBaseClass arg1, __JniBaseClass arg2)
	{
		callMethod<void>(
			"createOnDeviceTranslator",
			"(Landroid/view/translation/TranslationContext;Ljava/util/concurrent/Executor;Ljava/util/function/Consumer;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	__JniBaseClass TranslationManager::getOnDeviceTranslationCapabilities(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getOnDeviceTranslationCapabilities",
			"(II)Ljava/util/Set;",
			arg0,
			arg1
		);
	}
	android::app::PendingIntent TranslationManager::getOnDeviceTranslationSettingsActivityIntent()
	{
		return callObjectMethod(
			"getOnDeviceTranslationSettingsActivityIntent",
			"()Landroid/app/PendingIntent;"
		);
	}
	void TranslationManager::removeOnDeviceTranslationCapabilityUpdateListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removeOnDeviceTranslationCapabilityUpdateListener",
			"(Ljava/util/function/Consumer;)V",
			arg0.object()
		);
	}
} // namespace android::view::translation

