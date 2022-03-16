#include "../../../graphics/drawable/Icon.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ThumbnailTemplate.hpp"

namespace android::service::controls::templates
{
	// Fields
	
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
	JString ThumbnailTemplate::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	jint ThumbnailTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	android::graphics::drawable::Icon ThumbnailTemplate::getThumbnail() const
	{
		return callObjectMethod(
			"getThumbnail",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jboolean ThumbnailTemplate::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

