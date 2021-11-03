#include "../../../JString.hpp"
#include "./AppSearchManager_SearchContext.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchManager_SearchContext::AppSearchManager_SearchContext(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AppSearchManager_SearchContext::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

