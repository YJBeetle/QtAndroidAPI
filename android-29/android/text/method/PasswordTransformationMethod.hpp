#pragma once

#ifndef ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD
#define ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::text::method
{
	class PasswordTransformationMethod : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
		void onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onFocusChanged(__jni_impl::android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, __jni_impl::android::graphics::Rect arg4);
		QAndroidJniObject getTransformation(jstring arg0, __jni_impl::android::view::View arg1);
		void beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3);
		void afterTextChanged(__jni_impl::__JniBaseClass arg0);
	};
} // namespace __jni_impl::android::text::method

#include "../../view/View.hpp"
#include "../../graphics/Rect.hpp"

namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void PasswordTransformationMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.PasswordTransformationMethod",
			"()V");
	}
	
	// Methods
	QAndroidJniObject PasswordTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.PasswordTransformationMethod",
			"getInstance",
			"()Landroid/text/method/PasswordTransformationMethod;");
	}
	void PasswordTransformationMethod::onTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PasswordTransformationMethod::onFocusChanged(__jni_impl::android::view::View arg0, jstring arg1, jboolean arg2, jint arg3, __jni_impl::android::graphics::Rect arg4)
	{
		__thiz.callMethod<void>(
			"onFocusChanged",
			"(Landroid/view/View;Ljava/lang/CharSequence;ZILandroid/graphics/Rect;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject PasswordTransformationMethod::getTransformation(jstring arg0, __jni_impl::android::view::View arg1)
	{
		return __thiz.callObjectMethod(
			"getTransformation",
			"(Ljava/lang/CharSequence;Landroid/view/View;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object());
	}
	void PasswordTransformationMethod::beforeTextChanged(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"beforeTextChanged",
			"(Ljava/lang/CharSequence;III)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PasswordTransformationMethod::afterTextChanged(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"afterTextChanged",
			"(Landroid/text/Editable;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class PasswordTransformationMethod : public __jni_impl::android::text::method::PasswordTransformationMethod
	{
	public:
		PasswordTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
		PasswordTransformationMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_PASSWORDTRANSFORMATIONMETHOD

