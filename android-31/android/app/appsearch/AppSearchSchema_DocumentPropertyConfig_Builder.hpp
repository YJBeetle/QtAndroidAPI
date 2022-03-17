#pragma once

#include "./AppSearchSchema_DocumentPropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_DocumentPropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_DocumentPropertyConfig_Builder::AppSearchSchema_DocumentPropertyConfig_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appsearch.AppSearchSchema$DocumentPropertyConfig$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_DocumentPropertyConfig AppSearchSchema_DocumentPropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::AppSearchSchema_DocumentPropertyConfig_Builder AppSearchSchema_DocumentPropertyConfig_Builder::setShouldIndexNestedProperties(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldIndexNestedProperties",
			"(Z)Landroid/app/appsearch/AppSearchSchema$DocumentPropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
