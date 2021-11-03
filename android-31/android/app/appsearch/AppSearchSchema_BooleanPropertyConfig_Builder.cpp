#include "./AppSearchSchema_BooleanPropertyConfig.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_BooleanPropertyConfig_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	AppSearchSchema_BooleanPropertyConfig_Builder::AppSearchSchema_BooleanPropertyConfig_Builder(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	AppSearchSchema_BooleanPropertyConfig_Builder::AppSearchSchema_BooleanPropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BooleanPropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::AppSearchSchema_BooleanPropertyConfig AppSearchSchema_BooleanPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig;"
		);
	}
	android::app::appsearch::AppSearchSchema_BooleanPropertyConfig_Builder AppSearchSchema_BooleanPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BooleanPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

