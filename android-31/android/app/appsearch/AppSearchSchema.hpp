#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean AppSearchSchema::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject AppSearchSchema::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Ljava/util/List;"
		);
	}
	inline JString AppSearchSchema::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	inline jint AppSearchSchema::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AppSearchSchema::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

