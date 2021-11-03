#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema::AppSearchSchema(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AppSearchSchema::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JObject AppSearchSchema::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Ljava/util/List;"
		);
	}
	JString AppSearchSchema::getSchemaType()
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	jint AppSearchSchema::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AppSearchSchema::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

