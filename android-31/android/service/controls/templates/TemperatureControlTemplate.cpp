#include "./ControlTemplate.hpp"
#include "../../../../JString.hpp"
#include "./TemperatureControlTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	jint TemperatureControlTemplate::FLAG_MODE_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_COOL"
		);
	}
	jint TemperatureControlTemplate::FLAG_MODE_ECO()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_ECO"
		);
	}
	jint TemperatureControlTemplate::FLAG_MODE_HEAT()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_HEAT"
		);
	}
	jint TemperatureControlTemplate::FLAG_MODE_HEAT_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_HEAT_COOL"
		);
	}
	jint TemperatureControlTemplate::FLAG_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_OFF"
		);
	}
	jint TemperatureControlTemplate::MODE_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_COOL"
		);
	}
	jint TemperatureControlTemplate::MODE_ECO()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_ECO"
		);
	}
	jint TemperatureControlTemplate::MODE_HEAT()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_HEAT"
		);
	}
	jint TemperatureControlTemplate::MODE_HEAT_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_HEAT_COOL"
		);
	}
	jint TemperatureControlTemplate::MODE_OFF()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_OFF"
		);
	}
	jint TemperatureControlTemplate::MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_UNKNOWN"
		);
	}
	
	// QAndroidJniObject forward
	TemperatureControlTemplate::TemperatureControlTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	TemperatureControlTemplate::TemperatureControlTemplate(JString arg0, android::service::controls::templates::ControlTemplate arg1, jint arg2, jint arg3, jint arg4)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.TemperatureControlTemplate",
			"(Ljava/lang/String;Landroid/service/controls/templates/ControlTemplate;III)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint TemperatureControlTemplate::getCurrentActiveMode()
	{
		return callMethod<jint>(
			"getCurrentActiveMode",
			"()I"
		);
	}
	jint TemperatureControlTemplate::getCurrentMode()
	{
		return callMethod<jint>(
			"getCurrentMode",
			"()I"
		);
	}
	jint TemperatureControlTemplate::getModes()
	{
		return callMethod<jint>(
			"getModes",
			"()I"
		);
	}
	android::service::controls::templates::ControlTemplate TemperatureControlTemplate::getTemplate()
	{
		return callObjectMethod(
			"getTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	jint TemperatureControlTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

