#pragma once

#ifndef ANDROID_VIEW_INSPECTOR_PROPERTYMAPPER_PROPERTYCONFLICTEXCEPTION
#define ANDROID_VIEW_INSPECTOR_PROPERTYMAPPER_PROPERTYCONFLICTEXCEPTION

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"


namespace __jni_impl::android::view::inspector
{
	class PropertyMapper_PropertyConflictException : public __jni_impl::java::lang::RuntimeException
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::view::inspector


namespace __jni_impl::android::view::inspector
{
	// Fields
	
	// Constructors
	void PropertyMapper_PropertyConflictException::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.view.inspector.PropertyMapper$PropertyConflictException",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::view::inspector

namespace android::view::inspector
{
	class PropertyMapper_PropertyConflictException : public __jni_impl::android::view::inspector::PropertyMapper_PropertyConflictException
	{
	public:
		PropertyMapper_PropertyConflictException(QAndroidJniObject obj) { __thiz = obj; }
		PropertyMapper_PropertyConflictException(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::view::inspector

#endif // ANDROID_VIEW_INSPECTOR_PROPERTYMAPPER_PROPERTYCONFLICTEXCEPTION

