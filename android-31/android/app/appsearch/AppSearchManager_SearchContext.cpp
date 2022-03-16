#include "../../../JString.hpp"
#include "./AppSearchManager_SearchContext.hpp"

namespace android::app::appsearch
{
	// Fields
	
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

