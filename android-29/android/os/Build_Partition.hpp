#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./Build_Partition.def.hpp"

namespace android::os
{
	// Fields
	inline JString Build_Partition::PARTITION_NAME_SYSTEM()
	{
		return getStaticObjectField(
			"android.os.Build$Partition",
			"PARTITION_NAME_SYSTEM",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean Build_Partition::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong Build_Partition::getBuildTimeMillis() const
	{
		return callMethod<jlong>(
			"getBuildTimeMillis",
			"()J"
		);
	}
	inline JString Build_Partition::getFingerprint() const
	{
		return callObjectMethod(
			"getFingerprint",
			"()Ljava/lang/String;"
		);
	}
	inline JString Build_Partition::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint Build_Partition::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::os

// Base class headers

