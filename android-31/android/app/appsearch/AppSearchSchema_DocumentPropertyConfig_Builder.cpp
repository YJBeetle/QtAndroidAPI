#include "./AppSearchSchema_DocumentPropertyConfig.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_DocumentPropertyConfig_Builder::AppSearchSchema_DocumentPropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_DocumentPropertyConfig_Builder::AppSearchSchema_DocumentPropertyConfig_Builder(jstring arg0, jstring arg1)
		: JObject(
			"android.app.appsearch.AppSearchSchema$DocumentPropertyConfig$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig AppSearchSchema_DocumentPropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setShouldIndexNestedProperties(jboolean arg0)
	{
		return callObjectMethod(
			"setShouldIndexNestedProperties",
			"(Z)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

