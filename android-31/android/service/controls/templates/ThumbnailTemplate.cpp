#include "../../../graphics/drawable/Icon.hpp"
#include "./ThumbnailTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QJniObject forward
	ThumbnailTemplate::ThumbnailTemplate(QJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	ThumbnailTemplate::ThumbnailTemplate(jstring arg0, jboolean arg1, android::graphics::drawable::Icon arg2, jstring arg3)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ThumbnailTemplate",
			"(Ljava/lang/String;ZLandroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0,
			arg1,
			arg2.object(),
			arg3
		) {}
	
	// Methods
	jstring ThumbnailTemplate::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jint ThumbnailTemplate::getTemplateType()
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	android::graphics::drawable::Icon ThumbnailTemplate::getThumbnail()
	{
		return callObjectMethod(
			"getThumbnail",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jboolean ThumbnailTemplate::isActive()
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

