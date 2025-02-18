#pragma once

#include "../../os/PersistableBundle.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./RenderOutput.def.hpp"

namespace android::adservices::ondevicepersonalization
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean RenderOutput::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString RenderOutput::getContent() const
	{
		return callObjectMethod(
			"getContent",
			"()Ljava/lang/String;"
		);
	}
	inline JString RenderOutput::getTemplateId() const
	{
		return callObjectMethod(
			"getTemplateId",
			"()Ljava/lang/String;"
		);
	}
	inline android::os::PersistableBundle RenderOutput::getTemplateParams() const
	{
		return callObjectMethod(
			"getTemplateParams",
			"()Landroid/os/PersistableBundle;"
		);
	}
	inline jint RenderOutput::hashCode() const
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
