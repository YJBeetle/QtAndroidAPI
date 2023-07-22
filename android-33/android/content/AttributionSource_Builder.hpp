#pragma once

#include "./AttributionSource.def.hpp"
#include "../../JString.hpp"
#include "./AttributionSource_Builder.def.hpp"

namespace android::content
{
	// Fields
	
	// Constructors
	inline AttributionSource_Builder::AttributionSource_Builder(android::content::AttributionSource arg0)
		: JObject(
			"android.content.AttributionSource$Builder",
			"(Landroid/content/AttributionSource;)V",
			arg0.object()
		) {}
	inline AttributionSource_Builder::AttributionSource_Builder(jint arg0)
		: JObject(
			"android.content.AttributionSource$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::content::AttributionSource AttributionSource_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/content/AttributionSource;"
		);
	}
	inline android::content::AttributionSource_Builder AttributionSource_Builder::setAttributionTag(JString arg0) const
	{
		return callObjectMethod(
			"setAttributionTag",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::content::AttributionSource_Builder AttributionSource_Builder::setNext(android::content::AttributionSource arg0) const
	{
		return callObjectMethod(
			"setNext",
			"(Landroid/content/AttributionSource;)Landroid/content/AttributionSource$Builder;",
			arg0.object()
		);
	}
	inline android::content::AttributionSource_Builder AttributionSource_Builder::setPackageName(JString arg0) const
	{
		return callObjectMethod(
			"setPackageName",
			"(Ljava/lang/String;)Landroid/content/AttributionSource$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::content

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content;
#endif
