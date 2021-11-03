#include "./ClipData.hpp"
#include "./ClipDescription.hpp"
#include "../../JString.hpp"
#include "./ClipboardManager.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) : android::text::ClipboardManager(obj) {}
	
	// Constructors
	
	// Methods
	void ClipboardManager::addPrimaryClipChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"addPrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	void ClipboardManager::clearPrimaryClip() const
	{
		callMethod<void>(
			"clearPrimaryClip",
			"()V"
		);
	}
	android::content::ClipData ClipboardManager::getPrimaryClip() const
	{
		return callObjectMethod(
			"getPrimaryClip",
			"()Landroid/content/ClipData;"
		);
	}
	android::content::ClipDescription ClipboardManager::getPrimaryClipDescription() const
	{
		return callObjectMethod(
			"getPrimaryClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	JString ClipboardManager::getText() const
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		);
	}
	jboolean ClipboardManager::hasPrimaryClip() const
	{
		return callMethod<jboolean>(
			"hasPrimaryClip",
			"()Z"
		);
	}
	jboolean ClipboardManager::hasText() const
	{
		return callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::removePrimaryClipChangedListener(JObject arg0) const
	{
		callMethod<void>(
			"removePrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.object()
		);
	}
	void ClipboardManager::setPrimaryClip(android::content::ClipData arg0) const
	{
		callMethod<void>(
			"setPrimaryClip",
			"(Landroid/content/ClipData;)V",
			arg0.object()
		);
	}
	void ClipboardManager::setText(JString arg0) const
	{
		callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		);
	}
} // namespace android::content

