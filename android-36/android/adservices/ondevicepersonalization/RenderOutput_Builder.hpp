#pragma once

#include "./RenderOutput.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "./RenderOutput_Builder.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline RenderOutput_Builder::RenderOutput_Builder()
		: JObject(
			"android.adservices.ondevicepersonalization.RenderOutput$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::ondevicepersonalization::RenderOutput RenderOutput_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/ondevicepersonalization/RenderOutput;"
		);
	}
	inline android::adservices::ondevicepersonalization::RenderOutput_Builder RenderOutput_Builder::setContent(JString arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/RenderOutput$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::ondevicepersonalization::RenderOutput_Builder RenderOutput_Builder::setTemplateId(JString arg0) const
	{
		return callObjectMethod(
			"setTemplateId",
			"(Ljava/lang/String;)Landroid/adservices/ondevicepersonalization/RenderOutput$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::ondevicepersonalization::RenderOutput_Builder RenderOutput_Builder::setTemplateParams(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setTemplateParams",
			"(Landroid/os/PersistableBundle;)Landroid/adservices/ondevicepersonalization/RenderOutput$Builder;",
			arg0.object()
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
