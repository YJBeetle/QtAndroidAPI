#pragma once

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
		jint compareTo(__jni_impl::android::system::StructTimespec arg0);
		jint compareTo(jobject arg0);
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
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
	jboolean StructTimespec::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint StructTimespec::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring StructTimespec::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
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

