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
	
	// QAndroidJniObject forward
	Build_Partition::Build_Partition(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Build_Partition::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jlong Build_Partition::getBuildTimeMillis()
	{
		return callMethod<jlong>(
			"getBuildTimeMillis",
			"()J"
		);
	}
	jstring Build_Partition::getFingerprint()
	{
		return callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Build_Partition::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Build_Partition::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::os

