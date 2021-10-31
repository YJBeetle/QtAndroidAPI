#include "./GetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	GetSchemaResponse::GetSchemaResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass GetSchemaResponse::getSchemas()
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

