#include "./AppSearchSchema_BytesPropertyConfig.hpp"
#include "./AppSearchSchema_BytesPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_BytesPropertyConfig_Builder::AppSearchSchema_BytesPropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_BytesPropertyConfig_Builder::AppSearchSchema_BytesPropertyConfig_Builder(jstring arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BytesPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_BytesPropertyConfig AppSearchSchema_BytesPropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BytesPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_BytesPropertyConfig_Builder AppSearchSchema_BytesPropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BytesPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

