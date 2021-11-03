#include "./ControlTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	jint ControlTemplate::TYPE_ERROR()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_ERROR"
		);
	}
	jint ControlTemplate::TYPE_NO_TEMPLATE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_NO_TEMPLATE"
		);
	}
	jint ControlTemplate::TYPE_RANGE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_RANGE"
		);
	}
	jint ControlTemplate::TYPE_STATELESS()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_STATELESS"
		);
	}
	jint ControlTemplate::TYPE_TEMPERATURE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TEMPERATURE"
		);
	}
	jint ControlTemplate::TYPE_THUMBNAIL()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_THUMBNAIL"
		);
	}
	jint ControlTemplate::TYPE_TOGGLE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TOGGLE"
		);
	}
	jint ControlTemplate::TYPE_TOGGLE_RANGE()
	{
		return getStaticField<jint>(
			"android.service.controls.templates.ControlTemplate",
			"TYPE_TOGGLE_RANGE"
		);
	}
	
	// QAndroidJniObject forward
	ControlTemplate::ControlTemplate(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::service::controls::templates::ControlTemplate ControlTemplate::getErrorTemplate()
	{
		return callStaticObjectMethod(
			"android.service.controls.templates.ControlTemplate",
			"getErrorTemplate",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	android::service::controls::templates::ControlTemplate ControlTemplate::getNoTemplateObject()
	{
		return callStaticObjectMethod(
			"android.service.controls.templates.ControlTemplate",
			"getNoTemplateObject",
			"()Landroid/service/controls/templates/ControlTemplate;"
		);
	}
	jstring ControlTemplate::getTemplateId()
	{
		return callObjectMethod(
			"getTemplateId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint ControlTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
} // namespace android::service::controls::templates

