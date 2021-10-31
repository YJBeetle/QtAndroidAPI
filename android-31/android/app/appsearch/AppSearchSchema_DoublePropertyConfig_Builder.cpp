#include "./AppSearchSchema_DoublePropertyConfig.hpp"
#include "./AppSearchSchema_DoublePropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_DoublePropertyConfig_Builder::AppSearchSchema_DoublePropertyConfig_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppSearchSchema_DoublePropertyConfig_Builder::AppSearchSchema_DoublePropertyConfig_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.AppSearchSchema$DoublePropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0
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

