#include "./UiTranslationManager.hpp"

namespace android::view::translation
{
	// Fields
	
	// QAndroidJniObject forward
	UiTranslationManager::UiTranslationManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void UiTranslationManager::registerUiTranslationStateCallback(JObject arg0, JObject arg1) const
	{
		callMethod<void>(
			"registerUiTranslationStateCallback",
			"(Ljava/util/concurrent/Executor;Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object(),
			arg1.object()
		);
	}
	void UiTranslationManager::unregisterUiTranslationStateCallback(JObject arg0) const
	{
		callMethod<void>(
			"unregisterUiTranslationStateCallback",
			"(Landroid/view/translation/UiTranslationStateCallback;)V",
			arg0.object()
		);
	}
} // namespace android::view::translation

