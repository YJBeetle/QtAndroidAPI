#pragma once

#include "../../../../JString.hpp"
#include "./StatelessTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	inline StatelessTemplate::StatelessTemplate(JString arg0)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.StatelessTemplate",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint StatelessTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls::templates;
#endif
