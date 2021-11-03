#include "./GetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	GetSchemaResponse::GetSchemaResponse(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject GetSchemaResponse::getSchemas()
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	jint GetSchemaResponse::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace android::app::appsearch

