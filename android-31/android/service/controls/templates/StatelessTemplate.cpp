#include "../../../../JString.hpp"
#include "./StatelessTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	StatelessTemplate::StatelessTemplate(JString arg0)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.StatelessTemplate",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	jint StatelessTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

