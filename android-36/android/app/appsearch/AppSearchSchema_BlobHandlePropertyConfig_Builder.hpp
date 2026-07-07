#pragma once

#include "./AppSearchSchema_BlobHandlePropertyConfig.def.hpp"
#include "../../../JString.hpp"
#include "./AppSearchSchema_BlobHandlePropertyConfig_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline AppSearchSchema_BlobHandlePropertyConfig_Builder::AppSearchSchema_BlobHandlePropertyConfig_Builder(JString arg0)
		: JObject(
			"android.app.appsearch.AppSearchSchema$BlobHandlePropertyConfig$Builder",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline android::app::appsearch::AppSearchSchema_BlobHandlePropertyConfig AppSearchSchema_BlobHandlePropertyConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/AppSearchSchema$BlobHandlePropertyConfig;"
		);
	}
	inline android::app::appsearch::AppSearchSchema_BlobHandlePropertyConfig_Builder AppSearchSchema_BlobHandlePropertyConfig_Builder::setCardinality(jint arg0) const
	{
		return callObjectMethod(
			"setCardinality",
			"(I)Landroid/app/appsearch/AppSearchSchema$BlobHandlePropertyConfig$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
