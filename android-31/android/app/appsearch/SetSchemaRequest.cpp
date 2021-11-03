#include "./SetSchemaRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	SetSchemaRequest::SetSchemaRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SetSchemaRequest::getMigrators() const
	{
		return callObjectMethod(
			"getMigrators",
			"()Ljava/util/Map;"
		);
	}
	JObject SetSchemaRequest::getSchemas() const
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaRequest::getSchemasNotDisplayedBySystem() const
	{
		return callObjectMethod(
			"getSchemasNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaRequest::getSchemasVisibleToPackages() const
	{
		return callObjectMethod(
			"getSchemasVisibleToPackages",
			"()Ljava/util/Map;"
		);
	}
	jint SetSchemaRequest::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
	jboolean SetSchemaRequest::isForceOverride() const
	{
		return callMethod<jboolean>(
			"isForceOverride",
			"()Z"
		);
	}
} // namespace android::app::appsearch

