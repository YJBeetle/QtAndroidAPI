#include "./SetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaResponse::SetSchemaResponse(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JObject SetSchemaResponse::getDeletedTypes()
	{
		return callObjectMethod(
			"getDeletedTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getIncompatibleTypes()
	{
		return callObjectMethod(
			"getIncompatibleTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getMigratedTypes()
	{
		return callObjectMethod(
			"getMigratedTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getMigrationFailures()
	{
		return callObjectMethod(
			"getMigrationFailures",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

