#include "./SetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JObject SetSchemaResponse::getDeletedTypes() const
	{
		return callObjectMethod(
			"getDeletedTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getIncompatibleTypes() const
	{
		return callObjectMethod(
			"getIncompatibleTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getMigratedTypes() const
	{
		return callObjectMethod(
			"getMigratedTypes",
			"()Ljava/util/Set;"
		);
	}
	JObject SetSchemaResponse::getMigrationFailures() const
	{
		return callObjectMethod(
			"getMigrationFailures",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

