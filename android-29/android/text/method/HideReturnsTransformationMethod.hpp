#pragma once

#ifndef ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD
#define ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD

#include "ReplacementTransformationMethod.hpp"


namespace __jni_impl::android::text::method
{
	class HideReturnsTransformationMethod : public __jni_impl::android::text::method::ReplacementTransformationMethod
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance();
	};
} // namespace __jni_impl::android::text::method


namespace __jni_impl::android::text::method
{
	// Fields
	
	// Constructors
	void HideReturnsTransformationMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.HideReturnsTransformationMethod",
			"()V");
	}
	
	// Methods
	QAndroidJniObject HideReturnsTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.HideReturnsTransformationMethod",
			"getInstance",
			"()Landroid/text/method/HideReturnsTransformationMethod;");
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class HideReturnsTransformationMethod : public __jni_impl::android::text::method::HideReturnsTransformationMethod
	{
	public:
		HideReturnsTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
		HideReturnsTransformationMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_HIDERETURNSTRANSFORMATIONMETHOD

