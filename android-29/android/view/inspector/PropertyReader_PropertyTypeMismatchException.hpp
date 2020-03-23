#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_PROPERTYREADER_PROPERTYTYPEMISMATCHEXCEPTION
#define ANDROID_VIEW_INSPECTOR_PROPERTYREADER_PROPERTYTYPEMISMATCHEXCEPTION

#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3);
		void __constructor(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void PropertyReader_PropertyTypeMismatchException::__constructor(jint arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyReader$PropertyTypeMismatchException",
			"(ILjava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class PropertyReader_PropertyTypeMismatchException : public __jni_impl::android::view::inspector::PropertyReader_PropertyTypeMismatchException
	{
	public:
		PropertyReader_PropertyTypeMismatchException(QAndroidJniObject obj) { __thiz = obj; }
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		PropertyReader_PropertyTypeMismatchException(jint arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_PROPERTYREADER_PROPERTYTYPEMISMATCHEXCEPTION

