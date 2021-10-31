#include "./AppSearchSchema.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema::AppSearchSchema(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AppSearchSchema::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	__JniBaseClass AppSearchSchema::getProperties()
	{
		return callObjectMethod(
			"getProperties",
			"()Ljava/util/List;"
		);
	}
	jstring AppSearchSchema::getSchemaType()
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint AppSearchSchema::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring AppSearchSchema::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

