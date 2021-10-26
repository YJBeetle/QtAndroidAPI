#pragma once

#ifndef ANDROID_CONTENT_CLIPBOARDMANAGER
#define ANDROID_CONTENT_CLIPBOARDMANAGER

#include "../../__JniBaseClass.hpp"
#include "../text/ClipboardManager.hpp"

namespace __jni_impl::android::content
{
	class ClipData;
}
namespace __jni_impl::android::content
{
	class ClipDescription;
}

namespace __jni_impl::android::content
{
	class ClipboardManager : public __jni_impl::android::text::ClipboardManager
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setText(jstring arg0);
		void setText(const QString &arg0);
		jstring getText();
		void setPrimaryClip(__jni_impl::android::content::ClipData arg0);
		void clearPrimaryClip();
		QAndroidJniObject getPrimaryClip();
		QAndroidJniObject getPrimaryClipDescription();
		jboolean hasPrimaryClip();
		void addPrimaryClipChangedListener(__jni_impl::__JniBaseClass arg0);
		void removePrimaryClipChangedListener(__jni_impl::__JniBaseClass arg0);
		jboolean hasText();
	};
} // namespace __jni_impl::android::content

#include "ClipData.hpp"
#include "ClipDescription.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ClipboardManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ClipboardManager",
			"(V)V");
	}
	
	// Methods
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
	jstring ClipboardManager::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ClipboardManager::setPrimaryClip(__jni_impl::android::content::ClipData arg0)
	{
		__thiz.callMethod<void>(
			"setPrimaryClip",
			"(Landroid/content/ClipData;)V",
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
	jboolean ClipboardManager::hasPrimaryClip()
	{
		return __thiz.callMethod<jboolean>(
			"hasPrimaryClip",
			"()Z"
		);
	}
	void ClipboardManager::addPrimaryClipChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"addPrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	void ClipboardManager::removePrimaryClipChangedListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"removePrimaryClipChangedListener",
			"(Landroid/content/ClipboardManager$OnPrimaryClipChangedListener;)V",
			arg0.__jniObject().object()
		);
	}
	jboolean ClipboardManager::hasText()
	{
		return __thiz.callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class ClipboardManager : public __jni_impl::android::content::ClipboardManager
	{
	public:
		ClipboardManager(QAndroidJniObject obj) { __thiz = obj; }
		ClipboardManager()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_CLIPBOARDMANAGER

