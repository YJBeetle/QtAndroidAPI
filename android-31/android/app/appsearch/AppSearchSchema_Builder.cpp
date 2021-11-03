#include "./AppSearchSchema.hpp"
#include "./AppSearchSchema_PropertyConfig.hpp"
#include "./AppSearchSchema_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_Builder::AppSearchSchema_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_Builder::AppSearchSchema_Builder(jstring arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_Builder AppSearchSchema_Builder::addProperty(android::app::appsearch::AppSearchSchema_PropertyConfig arg0)
	{
		return callObjectMethod(
			"addProperty",
			"(Landroid/app/appsearch/AppSearchSchema$PropertyConfig;)Landroid/app/appsearch/AppSearchSchema$Builder;",
			arg0.object()
		);
	}
	android::app::appsearch::AppSearchSchema AppSearchSchema_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema;"
		);
	}
} // namespace android::app::appsearch

