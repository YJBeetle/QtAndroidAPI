#include "./StatelessTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QAndroidJniObject forward
	StatelessTemplate::StatelessTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	StatelessTemplate::StatelessTemplate(jstring arg0)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.StatelessTemplate",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
	jint StatelessTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

