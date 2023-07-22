#pragma once

#include "../../../graphics/drawable/Icon.def.hpp"
#include "../../../../JString.hpp"
#include "../../../../JString.hpp"
#include "./ThumbnailTemplate.def.hpp"

namespace android::service::controls::templates
{
	// Fields
	
	// Constructors
	inline ThumbnailTemplate::ThumbnailTemplate(JString arg0, jboolean arg1, android::graphics::drawable::Icon arg2, JString arg3)
		: android::service::controls::templates::ControlTemplate(
			"android.service.controls.templates.ThumbnailTemplate",
			"(Ljava/lang/String;ZLandroid/graphics/drawable/Icon;Ljava/lang/CharSequence;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object(),
			arg3.object<jstring>()
		) {}
	
	// Methods
	inline JString ThumbnailTemplate::getContentDescription() const
	{
		return callObjectMethod(
			"getContentDescription",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint ThumbnailTemplate::getTemplateType() const
	{
		return callMethod<jint>(
			"getTemplateType",
			"()I"
		);
	}
	inline android::graphics::drawable::Icon ThumbnailTemplate::getThumbnail() const
	{
		return callObjectMethod(
			"getThumbnail",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	inline jboolean ThumbnailTemplate::isActive() const
	{
		return callMethod<jboolean>(
			"isActive",
			"()Z"
		);
	}
} // namespace android::service::controls::templates

// Base class headers
#include "./ControlTemplate.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::controls::templates;
#endif
