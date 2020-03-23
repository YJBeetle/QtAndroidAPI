#pragma once

#ifndef ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD
#define ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD

#include "ReplacementTransformationMethod.hpp"


namespace __jni_impl::android::text::method
{
	class SingleLineTransformationMethod : public __jni_impl::android::text::method::ReplacementTransformationMethod
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
	void SingleLineTransformationMethod::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.SingleLineTransformationMethod",
			"()V");
	}
	
	// Methods
	QAndroidJniObject SingleLineTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.SingleLineTransformationMethod",
			"getInstance",
			"()Landroid/text/method/SingleLineTransformationMethod;");
	}
} // namespace __jni_impl::android::text::method

namespace android::text::method
{
	class SingleLineTransformationMethod : public __jni_impl::android::text::method::SingleLineTransformationMethod
	{
	public:
		SingleLineTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
		SingleLineTransformationMethod()
		{
			__constructor();
		}
	};
} // namespace android::text::method

#endif // ANDROID_TEXT_METHOD_SINGLELINETRANSFORMATIONMETHOD

