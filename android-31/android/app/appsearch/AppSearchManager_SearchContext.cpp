#include "./AppSearchManager_SearchContext.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchManager_SearchContext::AppSearchManager_SearchContext(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring AppSearchManager_SearchContext::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::app::appsearch

