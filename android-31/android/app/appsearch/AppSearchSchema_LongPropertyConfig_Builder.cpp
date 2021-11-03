#include "./AppSearchSchema_LongPropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_LongPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	AppSearchSchema_LongPropertyConfig_Builder::AppSearchSchema_LongPropertyConfig_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_LongPropertyConfig_Builder::AppSearchSchema_LongPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$LongPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_LongPropertyConfig AppSearchSchema_LongPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_LongPropertyConfig_Builder AppSearchSchema_LongPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$LongPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

