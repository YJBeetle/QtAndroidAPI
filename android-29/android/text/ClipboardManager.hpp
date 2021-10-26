#pragma once

#ifndef ANDROID_TEXT_CLIPBOARDMANAGER
#define ANDROID_TEXT_CLIPBOARDMANAGER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::text
{
	class ClipboardManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void setText(jstring arg0);
		void setText(const QString &arg0);
		jstring getText();
		jboolean hasText();
	};
} // namespace __jni_impl::android::text


namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void ClipboardManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.ClipboardManager",
			"()V"
		);
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
	jboolean ClipboardManager::hasText()
	{
		return __thiz.callMethod<jboolean>(
			"hasText",
			"()Z"
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class ClipboardManager : public __jni_impl::android::text::ClipboardManager
	{
	public:
		ClipboardManager(QAndroidJniObject obj) { __thiz = obj; }
		ClipboardManager()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_CLIPBOARDMANAGER

