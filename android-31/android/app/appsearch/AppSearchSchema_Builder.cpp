#include "./AppSearchSchema.hpp"
#include "./AppSearchSchema_PropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_Builder::AppSearchSchema_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_Builder::AppSearchSchema_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
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

