#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"

namespace __jni_impl::android::text::method
{
	class TextKeyListener_Capitalize;
}
namespace __jni_impl::android::view
{
	class KeyEvent;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::text::method
{
	class MultiTapKeyListener : public __jni_impl::android::text::method::BaseKeyListener
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1);
		
		// Methods
		static QAndroidJniObject getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1);
		jint getInputType();
		jboolean onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3);
		void onSpanAdded(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
		void onSpanChanged(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void onSpanRemoved(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3);
	};
} // namespace __jni_impl::android::text::method

#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void MultiTapKeyListener::__constructor(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.MultiTapKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject MultiTapKeyListener::getInstance(jboolean arg0, __jni_impl::android::text::method::TextKeyListener_Capitalize arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.MultiTapKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/MultiTapKeyListener;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	jint MultiTapKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean MultiTapKeyListener::onKeyDown(__jni_impl::android::view::View arg0, __jni_impl::__JniBaseClass arg1, jint arg2, __jni_impl::android::view::KeyEvent arg3)
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
	void MultiTapKeyListener::onSpanAdded(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
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
	void MultiTapKeyListener::onSpanChanged(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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
	void MultiTapKeyListener::onSpanRemoved(__jni_impl::__JniBaseClass arg0, jobject arg1, jint arg2, jint arg3)
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
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class MultiTapKeyListener : public __jni_impl::android::text::method::MultiTapKeyListener
	{
	public:
		MultiTapKeyListener(QAndroidJniObject obj) { __thiz = obj; }
		MultiTapKeyListener(__jni_impl::android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::text::method

