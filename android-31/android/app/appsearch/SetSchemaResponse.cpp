#include "./SetSchemaResponse.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	SetSchemaResponse::SetSchemaResponse(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	__JniBaseClass SetSchemaResponse::getDeletedTypes()
	{
		return callObjectMethod(
			"getDeletedTypes",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass SetSchemaResponse::getIncompatibleTypes()
	{
		return callObjectMethod(
			"getIncompatibleTypes",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass SetSchemaResponse::getMigratedTypes()
	{
		return callObjectMethod(
			"getMigratedTypes",
			"()Ljava/util/Set;"
		);
	}
	__JniBaseClass SetSchemaResponse::getMigrationFailures()
	{
		return callObjectMethod(
			"getMigrationFailures",
			"()Ljava/util/List;"
		);
	}
} // namespace android::app::appsearch

