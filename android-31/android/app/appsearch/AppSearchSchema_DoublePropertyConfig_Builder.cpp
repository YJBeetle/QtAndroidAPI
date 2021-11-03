#include "./AppSearchSchema_DoublePropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_DoublePropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_DoublePropertyConfig_Builder::AppSearchSchema_DoublePropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_DoublePropertyConfig_Builder::AppSearchSchema_DoublePropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$DoublePropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_DoublePropertyConfig AppSearchSchema_DoublePropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$DoublePropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_DoublePropertyConfig_Builder AppSearchSchema_DoublePropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$DoublePropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

