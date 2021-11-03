#include "../../../JString.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_DocumentPropertyConfig::AppSearchSchema_DocumentPropertyConfig(QAndroidJniObject obj) : android::app::appsearch::AppSearchSchema_PropertyConfig(obj) {}
	
	// Constructors
	
	// Methods
	JString AppSearchSchema_DocumentPropertyConfig::getSchemaType()
	{
		return callObjectMethod(
			"getSchemaType",
			"()Ljava/lang/String;"
		);
	}
	jboolean AppSearchSchema_DocumentPropertyConfig::shouldIndexNestedProperties()
	{
		return callMethod<jboolean>(
			"shouldIndexNestedProperties",
			"()Z"
		);
	}
} // namespace android::app::appsearch

