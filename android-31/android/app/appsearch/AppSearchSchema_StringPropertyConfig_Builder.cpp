#include "./AppSearchSchema_StringPropertyConfig.hpp"
#include "./AppSearchSchema_StringPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_StringPropertyConfig_Builder::AppSearchSchema_StringPropertyConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_StringPropertyConfig_Builder::AppSearchSchema_StringPropertyConfig_Builder(jstring arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_StringPropertyConfig AppSearchSchema_StringPropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setIndexingType(jint arg0)
	{
		return callObjectMethod(
			"setIndexingType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setTokenizerType(jint arg0)
	{
		return callObjectMethod(
			"setTokenizerType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

