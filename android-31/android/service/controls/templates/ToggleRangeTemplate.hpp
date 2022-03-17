#pragma once

#include "./ControlButton.def.hpp"
#include "./RangeTemplate.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ToggleRangeTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	inline ToggleRangeTemplate::ToggleRangeTemplate(JString arg0, android::service::controls::templates::ControlButton arg1, android::service::controls::templates::RangeTemplate arg2)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleRangeTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlButton;Landroid/service/controls/templates/RangeTemplate;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline ToggleRangeTemplate::ToggleRangeTemplate(JString arg0, jboolean arg1, JString arg2, android::service::controls::templates::RangeTemplate arg3)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleRangeTemplate",
			"(Ljava/lang/String;ZLjava/lang/CharSequence;Landroid/service/controls/templates/RangeTemplate;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>(),
			arg3.object()
		) {}
	
	// Methods
	inline JString ToggleRangeTemplate::getActionDescription() const
	{
		return callObjectMethod(
			"getActionDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline android::service::controls::templates::RangeTemplate ToggleRangeTemplate::getRange() const
	{
		return callObjectMethod(
			"getRange",
			"()Landroid/service/controls/templates/RangeTemplate;"
		);
	}
	inline jint ToggleRangeTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	inline jboolean ToggleRangeTemplate::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

