#include "./ControlButton.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ToggleTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	ToggleTemplate::ToggleTemplate(JString arg0, android::service::controls::templates::ControlButton arg1)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlButton;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
	JString ToggleTemplate::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint ToggleTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	jboolean ToggleTemplate::isChecked() const
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

