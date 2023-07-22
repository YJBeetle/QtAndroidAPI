#pragma once

#include "./LauncherActivity.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "./LauncherActivity_IconResizer.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	inline LauncherActivity_IconResizer::LauncherActivity_IconResizer(android::app::LauncherActivity arg0)
		: JObject(
			"android.app.LauncherActivity$IconResizer",
			"(Landroid/app/LauncherActivity;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::graphics::drawable::Drawable LauncherActivity_IconResizer::createIconThumbnail(android::graphics::drawable::Drawable arg0) const
	{
		return callObjectMethod(
			"createIconThumbnail",
			"(Landroid/graphics/drawable/Drawable;)Landroid/graphics/drawable/Drawable;",
			arg0.object()
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
