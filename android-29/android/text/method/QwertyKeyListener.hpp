#pragma once

#ifndef ANDROID_TEXT_METHOD_QWERTYKEYLISTENER
#define ANDROID_TEXT_METHOD_QWERTYKEYLISTENER

#include "../../../__JniBaseClass.hpp"
#include "MetaKeyKeyListener.hpp"
#include "BaseKeyListener.hpp"

namespace __jni_impl::android::text::method
{
	class TextKeyListener_Capitalize;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}

namespace __jni_impl::android::text::method
{
	class QwertyKeyListener : public __jni_impl::android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static QAndroidJniObject getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1);
		jint getInputType();
		static QAndroidJniObject getInstanceForFullKeyboard();
		static void markAsReplaced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jstring arg3);
		jboolean onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
	};
} // namespace __jni_impl::android::text::method

#include "TextKeyListener_Capitalize.hpp"
#include "../../view/View.hpp"
#include "../../view/KeyEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void QwertyKeyListener::__constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.QwertyKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	QAndroidJniObject QwertyKeyListener::getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/QwertyKeyListener;",
			arg0,
			arg1.__jniObject().object());
	}
	jint QwertyKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I");
	}
	QAndroidJniObject QwertyKeyListener::getInstanceForFullKeyboard()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.QwertyKeyListener",
			"getInstanceForFullKeyboard",
			"()Landroid/text/method/QwertyKeyListener;");
	}
	void QwertyKeyListener::markAsReplaced(__jni_impl::__JniBaseClass arg0, jint arg1, jint arg2, jstring arg3)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.QwertyKeyListener",
			"markAsReplaced",
			"(Landroid/text/Spannable;IILjava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	jboolean QwertyKeyListener::onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object());
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class QwertyKeyListener : public __jni_impl::android::text::method::QwertyKeyListener
	{
	public:
		QwertyKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		QwertyKeyListener(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_QWERTYKEYLISTENER

