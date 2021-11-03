#include "../../../graphics/drawable/Icon.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ThumbnailTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// QAndroidJniObject forward
	ThumbnailTemplate::ThumbnailTemplate(QAndroidJniObject obj) : android::service::controls::templates::ControlTemplate(obj) {}
	
	// Constructors
	ThumbnailTemplate::ThumbnailTemplate(JString arg0, jboolean arg1, android::graphics::drawable::Icon arg2, JString arg3)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ThumbnailTemplate",
			"(Ljava/lang/String;ZLandroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	JString ThumbnailTemplate::getContentDescription()
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
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

