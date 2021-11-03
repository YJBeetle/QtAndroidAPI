#include "./SetSchemaRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SetSchemaRequest::SetSchemaRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SetSchemaRequest::getMigrators()
	{
		return callObjectMethod(
			"getMigrators",
			"()Ljava/util/Map;"
		);
	}
	JObject SetSchemaRequest::getSchemas()
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaRequest::getSchemasNotDisplayedBySystem()
	{
		return callObjectMethod(
			"getSchemasNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaRequest::getSchemasVisibleToPackages()
	{
		return callObjectMethod(
			"getSchemasVisibleToPackages",
			"()Ljava/util/Map;"
		);
	}
	jint SetSchemaRequest::getVersion()
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean SetSchemaRequest::isForceOverride()
	{
		return callMethod<jboolean>(
			"isForceOverride",
			"()Z"
		);
	}
} // namespace android::app::appsearch

