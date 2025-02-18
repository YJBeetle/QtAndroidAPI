#pragma once

#include "./RenderingConfig.def.hpp"
#include "../../../JString.hpp"
#include "./RenderingConfig_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline RenderingConfig_Builder::RenderingConfig_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.RenderingConfig$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::RenderingConfig_Builder RenderingConfig_Builder::addKey(JString arg0) const
	{
		return callObjectMethod(
			"addKey",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/RenderingConfig$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::ondevicepersonalization::RenderingConfig RenderingConfig_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/RenderingConfig;"
		);
	}
	inline android::adservices::ondevicepersonalization::RenderingConfig_Builder RenderingConfig_Builder::setKeys(JObject arg0) const
	{
		return callObjectMethod(
			"setKeys",
			"(Ljava/util/List;)Landroid/adservices/ondevicepersonalization/RenderingConfig$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
