#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./TracingConfig.def.hpp"
#include "./TracingConfig_Builder.def.hpp"

namespace android::webkit
{
	// Fields
	
	// Constructors
	inline TracingConfig_Builder::TracingConfig_Builder()
		: JObject(
			"android.webkit.TracingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JIntArray arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"([I)Landroid/webkit/TracingConfig$Builder;",
			arg0.object<jintArray>()
		);
	}
	inline android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JArray arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"([Ljava/lang/String;)Landroid/webkit/TracingConfig$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::webkit::TracingConfig_Builder TracingConfig_Builder::addCategories(JObject arg0) const
	{
		return callObjectMethod(
			"addCategories",
			"(Ljava/util/Collection;)Landroid/webkit/TracingConfig$Builder;",
			arg0.object()
		);
	}
	inline android::webkit::TracingConfig TracingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/webkit/TracingConfig;"
		);
	}
	inline android::webkit::TracingConfig_Builder TracingConfig_Builder::setTracingMode(jint arg0) const
	{
		return callObjectMethod(
			"setTracingMode",
			"(I)Landroid/webkit/TracingConfig$Builder;",
			arg0
		);
	}
} // namespace android::webkit

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::webkit;
#endif
