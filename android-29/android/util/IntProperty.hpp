#pragma once

#ifndef ANDROID_UTIL_INTPROPERTY
#define ANDROID_UTIL_INTPROPERTY

#include "../../__JniBaseClass.hpp"
#include "Property.hpp"

namespace __jni_impl::java::lang
{
	class Integer;
}

namespace __jni_impl::android::util
{
	class IntProperty : public __jni_impl::android::util::Property
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		void set(jobject arg0, __jni_impl::java::lang::Integer arg1);
		void set(jobject arg0, jobject arg1);
		void setValue(jobject arg0, jint arg1);
	};
} // namespace __jni_impl::android::util

#include "../../java/lang/Integer.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void IntProperty::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void IntProperty::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.IntProperty",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void IntProperty::set(jobject arg0, __jni_impl::java::lang::Integer arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Integer;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void IntProperty::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void IntProperty::setValue(jobject arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;I)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class IntProperty : public __jni_impl::android::util::IntProperty
	{
	public:
		IntProperty(QAndroidJniObject obj) { __thiz = obj; }
		IntProperty(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_INTPROPERTY

