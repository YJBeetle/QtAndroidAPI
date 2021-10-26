#pragma once

#ifndef ANDROID_UTIL_FLOATPROPERTY
#define ANDROID_UTIL_FLOATPROPERTY

#include "../../__JniBaseClass.hpp"
#include "Property.hpp"

namespace __jni_impl::java::lang
{
	class Float;
}

namespace __jni_impl::android::util
{
	class FloatProperty : public __jni_impl::android::util::Property
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		void set(jobject arg0, jobject arg1);
		void set(jobject arg0, __jni_impl::java::lang::Float arg1);
		void setValue(jobject arg0, jfloat arg1);
	};
} // namespace __jni_impl::android::util

#include "../../java/lang/Float.hpp"

namespace __jni_impl::android::util
{
	// Fields
	
	// Constructors
	void FloatProperty::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.FloatProperty",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void FloatProperty::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.util.FloatProperty",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	void FloatProperty::set(jobject arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void FloatProperty::set(jobject arg0, __jni_impl::java::lang::Float arg1)
	{
		__thiz.callMethod<void>(
			"set",
			"(Ljava/lang/Object;Ljava/lang/Float;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void FloatProperty::setValue(jobject arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setValue",
			"(Ljava/lang/Object;F)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::util

namespace android::util
{
	class FloatProperty : public __jni_impl::android::util::FloatProperty
	{
	public:
		FloatProperty(QAndroidJniObject obj) { __thiz = obj; }
		FloatProperty(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::util

#endif // ANDROID_UTIL_FLOATPROPERTY

