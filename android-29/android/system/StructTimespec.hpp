#pragma once

#ifndef ANDROID_SYSTEM_STRUCTTIMESPEC
#define ANDROID_SYSTEM_STRUCTTIMESPEC

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class StructTimespec : public __JniBaseClass
	{
	public:
		// Fields
		jlong tv_nsec();
		jlong tv_sec();
		
		// Constructors
		void __constructor(jlong arg0, jlong arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jint compareTo(__jni_impl::android::system::StructTimespec arg0);
		jint compareTo(jobject arg0);
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jlong StructTimespec::tv_nsec()
	{
		return __thiz.getField<jlong>(
			"tv_nsec"
		);
	}
	jlong StructTimespec::tv_sec()
	{
		return __thiz.getField<jlong>(
			"tv_sec"
		);
	}
	
	// Constructors
	void StructTimespec::__constructor(jlong arg0, jlong arg1)
	{
		__thiz = QAndroidJniObject(
			"android.system.StructTimespec",
			"(JJ)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jboolean StructTimespec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StructTimespec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StructTimespec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint StructTimespec::compareTo(__jni_impl::android::system::StructTimespec arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Landroid/system/StructTimespec;)I",
			arg0.__jniObject().object()
		);
	}
	jint StructTimespec::compareTo(jobject arg0)
	{
		return __thiz.callMethod<jint>(
			"compareTo",
			"(Ljava/lang/Object;)I",
			arg0
		);
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class StructTimespec : public __jni_impl::android::system::StructTimespec
	{
	public:
		StructTimespec(QAndroidJniObject obj) { __thiz = obj; }
		StructTimespec(jlong arg0, jlong arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_STRUCTTIMESPEC

