#include "./ClipData.hpp"
#include "./ClipDescription.hpp"
#include "./ClipboardManager.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) : android::text::ClipboardManager(obj) {}
	
	// Constructors
	
	// Methods
	void ClipboardManager::addPrimaryClipChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"addPrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	void ClipboardManager::clearPrimaryClip()
	{
		callMethod<void>(
			"clearPrimaryClip",
			"()V"
		);
	}
	QAndroidJniObject ClipboardManager::getPrimaryClip()
	{
		return callObjectMethod(
			"getPrimaryClip",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject ClipboardManager::getPrimaryClipDescription()
	{
		return callObjectMethod(
			"getPrimaryClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jstring ClipboardManager::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ClipboardManager::hasPrimaryClip()
	{
		return callMethod<jboolean>(
			"hasPrimaryClip",
			"()Z"
		);
	}
	jboolean ClipboardManager::hasText()
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::removePrimaryClipChangedListener(__JniBaseClass arg0)
	{
		callMethod<void>(
			"removePrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	void ClipboardManager::setPrimaryClip(android::content::ClipData arg0)
	{
		callMethod<void>(
			"setPrimaryClip",
			"(Landroid/content/ClipData;)V",
			arg0.object()
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
} // namespace android::content

