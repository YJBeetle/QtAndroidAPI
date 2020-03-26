#pragma once

#ifndef ANDROID_TEXT_METHOD_TEXTKEYLISTENER
#define ANDROID_TEXT_METHOD_TEXTKEYLISTENER

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
	class TextKeyListener : public __jni_impl::android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static void clear(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getInstance();
		static QAndroidJniObject getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1);
		void release();
		void onSpanChanged(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onSpanAdded(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
		void onSpanRemoved(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
		jboolean onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean onKeyUp(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		jboolean onKeyOther(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2);
		jint getInputType();
		static jboolean shouldCap(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jstring arg1, jint arg2);
	};
} // namespace __jni_impl::android::text::method

#include "TextKeyListener_Capitalize.hpp"
#include "../../view/View.hpp"
#include "../../view/KeyEvent.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void TextKeyListener::__constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TextKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.__jniObject().object(),
			arg1);
	}
	
	// Methods
	void TextKeyListener::clear(__jni_impl::__JniBaseClass arg0)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.text.method.TextKeyListener",
			"clear",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject TextKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"()Landroid/text/method/TextKeyListener;"
		);
	}
	QAndroidJniObject TextKeyListener::getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/TextKeyListener;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void TextKeyListener::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void TextKeyListener::onSpanChanged(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"onSpanChanged",
			"(Landroid/text/Spannable;Ljava/lang/Object;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void TextKeyListener::onSpanAdded(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSpanAdded",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	void TextKeyListener::onSpanRemoved(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onSpanRemoved",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3
		);
	}
	jboolean TextKeyListener::onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean TextKeyListener::onKeyUp(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3.__jniObject().object()
		);
	}
	jboolean TextKeyListener::onKeyOther(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::view::KeyEvent arg2)
	{
		return __thiz.callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jint TextKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean TextKeyListener::shouldCap(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jstring arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.method.TextKeyListener",
			"shouldCap",
			"(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class TextKeyListener : public __jni_impl::android::text::method::TextKeyListener
	{
	public:
		TextKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		TextKeyListener(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_TEXTKEYLISTENER

