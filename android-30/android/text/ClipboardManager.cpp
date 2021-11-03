#include "../../JString.hpp"
#include "./ClipboardManager.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ClipboardManager::ClipboardManager()
		: JObject(
			"android.text.ClipboardManager",
			"()V"
		) {}
	
	// Methods
	JString ClipboardManager::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ClipboardManager::hasText()
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::setText(JString arg0)
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

