#include "./ClipboardManager.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ClipboardManager::ClipboardManager()
		: __JniBaseClass(
			"android.text.ClipboardManager",
			"()V"
		) {}
	
	// Methods
	jstring ClipboardManager::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ClipboardManager::hasText()
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::setText(jstring arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
} // namespace android::text

