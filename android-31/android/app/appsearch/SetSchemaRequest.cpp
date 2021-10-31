#include "./SetSchemaRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaRequest::SetSchemaRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SetSchemaRequest::getMigrators()
	{
		return callObjectMethod(
			"getMigrators",
			"()Ljava/util/Map;"
		);
	}
	__JniBaseClass SetSchemaRequest::getSchemas()
	{
		return callObjectMethod(
			"getSchemas",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass SetSchemaRequest::getSchemasNotDisplayedBySystem()
	{
		return callObjectMethod(
			"getSchemasNotDisplayedBySystem",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass SetSchemaRequest::getSchemasVisibleToPackages()
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

