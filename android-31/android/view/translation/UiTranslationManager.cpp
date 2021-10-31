#include "./UiTranslationManager.hpp"

namespace android::view::translation
{
	// Fields
	
	// QAndroidJniObject forward
	UiTranslationManager::UiTranslationManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void UiTranslationManager::registerUiTranslationStateCallback(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		callMethod<void>(
			"registerUiTranslationStateCallback",
			"(Ljava/util/concurrent/Executor;Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void UiTranslationManager::unregisterUiTranslationStateCallback(__JniBaseClass arg0)
	{
		callMethod<void>(
			"unregisterUiTranslationStateCallback",
			"(Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view::translation

