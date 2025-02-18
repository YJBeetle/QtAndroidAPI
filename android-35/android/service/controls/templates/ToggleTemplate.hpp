#pragma once

#include "./ControlButton.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ToggleTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	inline ToggleTemplate::ToggleTemplate(JString arg0, android::service::controls::templates::ControlButton arg1)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlButton;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	inline JString ToggleTemplate::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ToggleTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	inline jboolean ToggleTemplate::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls::templates;
#endif
