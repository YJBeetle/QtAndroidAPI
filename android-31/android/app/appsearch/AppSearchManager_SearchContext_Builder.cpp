#include "./AppSearchManager_SearchContext.hpp"
#include "./AppSearchManager_SearchContext_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchManager_SearchContext_Builder::AppSearchManager_SearchContext_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppSearchManager_SearchContext_Builder::AppSearchManager_SearchContext_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.AppSearchManager$SearchContext$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchManager_SearchContext AppSearchManager_SearchContext_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchManager$SearchContext;"
		);
	}
} // namespace android::app::appsearch

