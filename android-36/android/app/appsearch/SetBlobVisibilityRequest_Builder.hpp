#pragma once

#include "./SchemaVisibilityConfig.def.hpp"
#include "./SetBlobVisibilityRequest.def.hpp"
#include "../../../JString.hpp"
#include "./SetBlobVisibilityRequest_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SetBlobVisibilityRequest_Builder::SetBlobVisibilityRequest_Builder()
		: JObject(
			"android.app.appsearch.SetBlobVisibilityRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::appsearch::SetBlobVisibilityRequest_Builder SetBlobVisibilityRequest_Builder::addNamespaceVisibleToConfig(JString arg0, android::app::appsearch::SchemaVisibilityConfig arg1) const
	{
		return callObjectMethod(
			"addNamespaceVisibleToConfig",
			"(Ljava/lang/String;Landroid/app/appsearch/SchemaVisibilityConfig;)Landroid/app/appsearch/SetBlobVisibilityRequest$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SetBlobVisibilityRequest SetBlobVisibilityRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SetBlobVisibilityRequest;"
		);
	}
	inline android::app::appsearch::SetBlobVisibilityRequest_Builder SetBlobVisibilityRequest_Builder::clearNamespaceVisibleToConfigs(JString arg0) const
	{
		return callObjectMethod(
			"clearNamespaceVisibleToConfigs",
			"(Ljava/lang/String;)Landroid/app/appsearch/SetBlobVisibilityRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::appsearch::SetBlobVisibilityRequest_Builder SetBlobVisibilityRequest_Builder::setNamespaceDisplayedBySystem(JString arg0, jboolean arg1) const
	{
		return callObjectMethod(
			"setNamespaceDisplayedBySystem",
			"(Ljava/lang/String;Z)Landroid/app/appsearch/SetBlobVisibilityRequest$Builder;",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
