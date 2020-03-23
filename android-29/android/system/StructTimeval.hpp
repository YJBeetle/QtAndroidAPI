#pragma once

#ifndef ANDROID_SYSTEM_STRUCTTIMEVAL
#define ANDROID_SYSTEM_STRUCTTIMEVAL

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::system
{
	class StructTimeval : public __JniBaseClass
	{
	public:
		// Fields
		jlong tv_sec();
		jlong tv_usec();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jlong toMillis();
		static QAndroidJniObject fromMillis(jlong arg0);
	};
} // namespace __jni_impl::android::system


namespace __jni_impl::android::system
{
	// Fields
	jlong StructTimeval::tv_sec()
	{
		return __thiz.getField<jlong>(
			"tv_sec");
	}
	jlong StructTimeval::tv_usec()
	{
		return __thiz.getField<jlong>(
			"tv_usec");
	}
	
	// Constructors
	void StructTimeval::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.system.StructTimeval",
			"(V)V");
	}
	
	// Methods
	jboolean StructTimeval::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject StructTimeval::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint StructTimeval::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jlong StructTimeval::toMillis()
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"()J");
	}
	QAndroidJniObject StructTimeval::fromMillis(jlong arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.system.StructTimeval",
			"fromMillis",
			"(J)Landroid/system/StructTimeval;",
			arg0);
	}
} // namespace __jni_impl::android::system

namespace android::system
{
	class StructTimeval : public __jni_impl::android::system::StructTimeval
	{
	public:
		StructTimeval(QAndroidJniObject obj) { __thiz = obj; }
		StructTimeval()
		{
			__constructor();
		}
	};
} // namespace android::system

#endif // ANDROID_SYSTEM_STRUCTTIMEVAL

