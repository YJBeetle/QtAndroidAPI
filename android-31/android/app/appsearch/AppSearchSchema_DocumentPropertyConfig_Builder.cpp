#include "./AppSearchSchema_DocumentPropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_DocumentPropertyConfig_Builder::AppSearchSchema_DocumentPropertyConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_DocumentPropertyConfig_Builder::AppSearchSchema_DocumentPropertyConfig_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appsearch.AppSearchSchema$DocumentPropertyConfig$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig AppSearchSchema_DocumentPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
	android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setShouldIndexNestedProperties(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldIndexNestedProperties",
			"(Z)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

