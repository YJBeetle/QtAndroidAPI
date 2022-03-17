#pragma once

#include "./ControlTemplate.def.hpp"
#include "../../../../JString.hpp"
#include "./TemperatureControlTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	inline jint TemperatureControlTemplate::FLAG_MODE_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_COOL"
		);
	}
	inline jint TemperatureControlTemplate::FLAG_MODE_ECO()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_ECO"
		);
	}
	inline jint TemperatureControlTemplate::FLAG_MODE_HEAT()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_HEAT"
		);
	}
	inline jint TemperatureControlTemplate::FLAG_MODE_HEAT_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_HEAT_COOL"
		);
	}
	inline jint TemperatureControlTemplate::FLAG_MODE_OFF()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"FLAG_MODE_OFF"
		);
	}
	inline jint TemperatureControlTemplate::MODE_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_COOL"
		);
	}
	inline jint TemperatureControlTemplate::MODE_ECO()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_ECO"
		);
	}
	inline jint TemperatureControlTemplate::MODE_HEAT()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_HEAT"
		);
	}
	inline jint TemperatureControlTemplate::MODE_HEAT_COOL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_HEAT_COOL"
		);
	}
	inline jint TemperatureControlTemplate::MODE_OFF()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_OFF"
		);
	}
	inline jint TemperatureControlTemplate::MODE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.TemperatureControlTemplate",
			"MODE_UNKNOWN"
		);
	}
	
	// Constructors
	inline TemperatureControlTemplate::TemperatureControlTemplate(JString arg0, android::service::controls::templates::ControlTemplate arg1, jint arg2, jint arg3, jint arg4)
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
	inline jint TemperatureControlTemplate::getCurrentActiveMode() const
	{
		return callMethod<jint>(
			"getCurrentActiveMode",
			"()I"
		);
	}
	inline jint TemperatureControlTemplate::getCurrentMode() const
	{
		return callMethod<jint>(
			"getCurrentMode",
			"()I"
		);
	}
	inline jint TemperatureControlTemplate::getModes() const
	{
		return callMethod<jint>(
			"getModes",
			"()I"
		);
	}
	inline android::service::controls::templates::ControlTemplate TemperatureControlTemplate::getTemplate() const
	{
		return callObjectMethod(
			"getTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	inline jint TemperatureControlTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

