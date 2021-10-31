#include "./ControlButton.hpp"
#include "./ToggleTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QAndroidJniObject forward
	ToggleTemplate::ToggleTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	ToggleTemplate::ToggleTemplate(jstring arg0, android::service::controls::templates::ControlButton arg1)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ToggleTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlButton;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
	jstring ToggleTemplate::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ToggleTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	jboolean ToggleTemplate::isChecked()
	{
		return callMethod<jboolean>(
			"isChecked",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

