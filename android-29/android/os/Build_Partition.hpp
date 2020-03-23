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
		static QAndroidJniObject PARTITION_NAME_SYSTEM();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getName();
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject getFingerprint();
		jlong getBuildTimeMillis();
	};
} // namespace __jni_impl::android::os


namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject Build_Partition::PARTITION_NAME_SYSTEM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.Build$Partition",
			"PARTITION_NAME_SYSTEM",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void Build_Partition::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.Build$Partition",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Build_Partition::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;");
	}
	jboolean Build_Partition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint Build_Partition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject Build_Partition::getFingerprint()
	{
		return __thiz.callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;");
	}
	jlong Build_Partition::getBuildTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getBuildTimeMillis",
			"()J");
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

