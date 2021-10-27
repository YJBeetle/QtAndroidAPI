#include "./Build_Partition.hpp"

namespace android::os
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
	
	Build_Partition::Build_Partition(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
} // namespace android::os

