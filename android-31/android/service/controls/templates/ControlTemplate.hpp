#pragma once

#include "../../../../JString.hpp"
#include "./ControlTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	inline jint ControlTemplate::TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_ERROR"
		);
	}
	inline jint ControlTemplate::TYPE_NO_TEMPLATE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_NO_TEMPLATE"
		);
	}
	inline jint ControlTemplate::TYPE_RANGE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_RANGE"
		);
	}
	inline jint ControlTemplate::TYPE_STATELESS()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_STATELESS"
		);
	}
	inline jint ControlTemplate::TYPE_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TEMPERATURE"
		);
	}
	inline jint ControlTemplate::TYPE_THUMBNAIL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_THUMBNAIL"
		);
	}
	inline jint ControlTemplate::TYPE_TOGGLE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TOGGLE"
		);
	}
	inline jint ControlTemplate::TYPE_TOGGLE_RANGE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TOGGLE_RANGE"
		);
	}
	
	// Constructors
	
	// Methods
	inline android::service::controls::templates::ControlTemplate ControlTemplate::getErrorTemplate()
	{
		return callStaticObjectMethod(
			"android.service.controls.templates.ControlTemplate",
			"getErrorTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	inline android::service::controls::templates::ControlTemplate ControlTemplate::getNoTemplateObject()
	{
		return callStaticObjectMethod(
			"android.service.controls.templates.ControlTemplate",
			"getNoTemplateObject",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	inline JString ControlTemplate::getTemplateId() const
	{
		return callObjectMethod(
			"getTemplateId",
			"()Ljava/lang/String;"
		);
	}
	inline jint ControlTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

// Base class headers

