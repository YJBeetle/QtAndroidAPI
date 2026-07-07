#pragma once

#include "./RenderingConfig.def.hpp"
#include "../../../JObject.hpp"
#include "./RenderInput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	inline RenderInput::RenderInput(jint arg0, jint arg1, android::adservices::ondevicepersonalization::RenderingConfig arg2)
		: JObject(
			"android.adservices.ondevicepersonalization.RenderInput",
			"(IILandroid/adservices/ondevicepersonalization/RenderingConfig;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jboolean RenderInput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint RenderInput::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline android::adservices::ondevicepersonalization::RenderingConfig RenderInput::getRenderingConfig() const
	{
		return callObjectMethod(
			"getRenderingConfig",
			"()Landroid/adservices/ondevicepersonalization/RenderingConfig;"
		);
	}
	inline jint RenderInput::getWidth() const
	{
		return callMethod<jint>(
			"getWidth",
			"()I"
		);
	}
	inline jint RenderInput::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::ondevicepersonalization

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::ondevicepersonalization;
#endif
