#include "./AppSearchManager_SearchContext.hpp"
#include "./AppSearchManager_SearchContext_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchManager_SearchContext_Builder::AppSearchManager_SearchContext_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchManager_SearchContext_Builder::AppSearchManager_SearchContext_Builder(jstring arg0)
		: JObject(
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

