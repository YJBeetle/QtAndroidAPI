#include "./ClipboardManager.hpp"

namespace android::text
{
	// Fields
	
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ClipboardManager::ClipboardManager()
	{
		__thiz = QAndroidJniObject(
			"android.text.ClipboardManager",
			"()V"
		);
	}
	
	// Methods
	jstring ClipboardManager::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ClipboardManager::hasText()
	{
		return __thiz.callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::setText(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::text

