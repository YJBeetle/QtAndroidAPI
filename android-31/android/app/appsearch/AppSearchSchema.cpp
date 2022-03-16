#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	jboolean AppSearchSchema::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AppSearchSchema::getProperties() const
	{
		return callObjectMethod(
			"getProperties",
			"()Ljava/util/List;"
		);
	}
	JString AppSearchSchema::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	jint AppSearchSchema::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AppSearchSchema::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

