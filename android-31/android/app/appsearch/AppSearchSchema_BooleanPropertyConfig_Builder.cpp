#include "./AppSearchSchema_BooleanPropertyConfig.hpp"
#include "./AppSearchSchema_BooleanPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_BooleanPropertyConfig_Builder::AppSearchSchema_BooleanPropertyConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_BooleanPropertyConfig_Builder::AppSearchSchema_BooleanPropertyConfig_Builder(jstring arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BooleanPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_BooleanPropertyConfig AppSearchSchema_BooleanPropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_BooleanPropertyConfig_Builder AppSearchSchema_BooleanPropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

