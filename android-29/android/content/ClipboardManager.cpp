#include "./ClipData.hpp"
#include "./ClipDescription.hpp"
#include "./ClipboardManager.hpp"

namespace android::content
{
	// Fields
	
	ClipboardManager::ClipboardManager(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void ClipboardManager::addPrimaryClipChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipboardManager::clearPrimaryClip()
	{
		__thiz.callMethod<void>(
			"clearPrimaryClip",
			"()V"
		);
	}
	QAndroidJniObject ClipboardManager::getPrimaryClip()
	{
		return __thiz.callObjectMethod(
			"getPrimaryClip",
			"()Landroid/content/ClipData;"
		);
	}
	QAndroidJniObject ClipboardManager::getPrimaryClipDescription()
	{
		return __thiz.callObjectMethod(
			"getPrimaryClipDescription",
			"()Landroid/content/ClipDescription;"
		);
	}
	jstring ClipboardManager::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jboolean ClipboardManager::hasPrimaryClip()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrimaryClip",
			"()Z"
		);
	}
	jboolean ClipboardManager::hasText()
	{
		return __thiz.callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
	void ClipboardManager::removePrimaryClipChangedListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipboardManager::setPrimaryClip(android::content::ClipData arg0)
	{
		__thiz.callMethod<void>(
			"setPrimaryClip",
			"(Landroid/content/ClipData;)V",
			arg0.__jniObject().object()
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
	void ClipboardManager::setText(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setText",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::content

