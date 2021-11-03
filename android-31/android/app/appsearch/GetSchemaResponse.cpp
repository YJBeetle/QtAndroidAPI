#include "./GetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	GetSchemaResponse::GetSchemaResponse(QJniObject obj) : JObject(obj) {}
	
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

