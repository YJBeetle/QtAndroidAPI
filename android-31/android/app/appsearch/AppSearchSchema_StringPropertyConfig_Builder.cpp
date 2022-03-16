#include "./AppSearchSchema_StringPropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_StringPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	AppSearchSchema_StringPropertyConfig_Builder::AppSearchSchema_StringPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$StringPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_StringPropertyConfig AppSearchSchema_StringPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setIndexingType(jint arg0) const
	{
		return callObjectMethod(
			"setIndexingType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_StringPropertyConfig_Builder AppSearchSchema_StringPropertyConfig_Builder::setTokenizerType(jint arg0) const
	{
		return callObjectMethod(
			"setTokenizerType",
			"(I)Landroid/app/appsearch/AppSearchSchema$StringPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

