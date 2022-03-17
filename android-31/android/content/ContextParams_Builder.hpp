#pragma once

#include "./AttributionSource.def.hpp"
#include "./ContextParams.def.hpp"
#include "../../JString.hpp"
#include "./ContextParams_Builder.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline ContextParams_Builder::ContextParams_Builder()
		: JObject(
			"android.content.ContextParams$Builder",
			"()V"
		) {}
	inline ContextParams_Builder::ContextParams_Builder(android::content::ContextParams arg0)
		: JObject(
			"android.content.ContextParams$Builder",
			"(Landroid/content/ContextParams;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::content::ContextParams ContextParams_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/ContextParams;"
		);
	}
	inline android::content::ContextParams_Builder ContextParams_Builder::setAttributionTag(JString arg0) const
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/ContextParams$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::ContextParams_Builder ContextParams_Builder::setNextAttributionSource(android::content::AttributionSource arg0) const
	{
		return callObjectMethod(
			"setNextAttributionSource",
			"(Landroid/content/AttributionSource;)Landroid/content/ContextParams$Builder;",
			arg0.object()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
