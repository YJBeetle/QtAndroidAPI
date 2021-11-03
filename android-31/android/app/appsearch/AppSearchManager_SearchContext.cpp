#include "../../../JString.hpp"
#include "./AppSearchManager_SearchContext.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchManager_SearchContext::AppSearchManager_SearchContext(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString AppSearchManager_SearchContext::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

