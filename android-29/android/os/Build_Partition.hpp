#pragma once

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
		jboolean equals(jobject arg0);
		jlong getBuildTimeMillis();
		jstring getFingerprint();
		jstring getName();
		jint hashCode();
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
	jboolean Build_Partition::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Build_Partition::getBuildTimeMillis()
	{
		return __thiz.callMethod<jlong>(
			"getBuildTimeMillis",
			"()J"
		);
	}
	jstring Build_Partition::getFingerprint()
	{
		return __thiz.callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_Partition::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_Partition::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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

