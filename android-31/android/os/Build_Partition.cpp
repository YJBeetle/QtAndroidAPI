#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Build_Partition.hpp"

namespace android::os
{
	// Fields
	JString Build_Partition::PARTITION_NAME_SYSTEM()
	{
		return getStaticObjectField(
			"android.os.Build$Partition",
			"PARTITION_NAME_SYSTEM",
			"Ljava/lang/String;"
		);
	}
	
	// QJniObject forward
	Build_Partition::Build_Partition(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean Build_Partition::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jlong Build_Partition::getBuildTimeMillis()
	{
		return callMethod<jlong>(
			"getBuildTimeMillis",
			"()J"
		);
	}
	JString Build_Partition::getFingerprint()
	{
		return callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;"
		);
	}
	JString Build_Partition::getName()
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	jint Build_Partition::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::os

