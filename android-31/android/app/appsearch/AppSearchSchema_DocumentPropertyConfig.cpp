#include "../../../JString.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JString AppSearchSchema_DocumentPropertyConfig::getSchemaType() const
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	jboolean AppSearchSchema_DocumentPropertyConfig::shouldIndexNestedProperties() const
	{
		return callMethod<jboolean>(
			"shouldIndexNestedProperties",
			"()Z"
		);
	}
} // namespace android::app::appsearch

