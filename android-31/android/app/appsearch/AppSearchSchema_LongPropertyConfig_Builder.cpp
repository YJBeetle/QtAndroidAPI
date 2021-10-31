#include "./AppSearchSchema_LongPropertyConfig.hpp"
#include "./AppSearchSchema_LongPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_LongPropertyConfig_Builder::AppSearchSchema_LongPropertyConfig_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AppSearchSchema_LongPropertyConfig_Builder::AppSearchSchema_LongPropertyConfig_Builder(jstring arg0)
		: __JniBaseClass(
			"android.app.appsearch.AppSearchSchema$LongPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_LongPropertyConfig AppSearchSchema_LongPropertyConfig_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_LongPropertyConfig_Builder AppSearchSchema_LongPropertyConfig_Builder::setCardinality(jint arg0)
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

