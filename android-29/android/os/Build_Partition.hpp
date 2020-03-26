#pragma once

#ifndef ANDROID_OS_BUILD_PARTITION
#define ANDROID_OS_BUILD_PARTITION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::os
{
	class Build_Partition : public __JniBaseClass
	{
	public:
		// Fields
		static jstring PARTITION_NAME_SYSTEM();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring getName();
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring getFingerprint();
		jlong getBuildTimeMillis();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	jstring Build_Partition::PARTITION_NAME_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$Partition",
			"PARTITION_NAME_SYSTEM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void Build_Partition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build$Partition",
			"(V)V");
	}
	
	// Methods
	jstring Build_Partition::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean Build_Partition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint Build_Partition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring Build_Partition::getFingerprint()
	{
		return __thiz.callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong Build_Partition::getBuildTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getBuildTimeMillis",
			"()J"
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class Build_Partition : public __jni_impl::android::os::Build_Partition
	{
	public:
		Build_Partition(QAndroidJniObject obj) { __thiz = obj; }
		Build_Partition()
		{
			__constructor();
		}
	};
} // namespace android::os

#endif // ANDROID_OS_BUILD_PARTITION

