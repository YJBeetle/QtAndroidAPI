#pragma once

#include "./WallpaperDescription.def.hpp"
#include "../../net/Uri.def.hpp"
#include "../../os/PersistableBundle.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./WallpaperDescription_Builder.def.hpp"

namespace android::app::wallpaper
{
	// Fields
	
	// Constructors
	inline WallpaperDescription_Builder::WallpaperDescription_Builder()
		: JObject(
			"android.app.wallpaper.WallpaperDescription$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::app::wallpaper::WallpaperDescription WallpaperDescription_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/wallpaper/WallpaperDescription;"
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setContent(android::os::PersistableBundle arg0) const
	{
		return callObjectMethod(
			"setContent",
			"(Landroid/os/PersistableBundle;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setContextDescription(JString arg0) const
	{
		return callObjectMethod(
			"setContextDescription",
			"(Ljava/lang/CharSequence;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setContextUri(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setContextUri",
			"(Landroid/net/Uri;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setDescription(JObject arg0) const
	{
		return callObjectMethod(
			"setDescription",
			"(Ljava/util/List;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setId(JString arg0) const
	{
		return callObjectMethod(
			"setId",
			"(Ljava/lang/String;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setThumbnail(android::net::Uri arg0) const
	{
		return callObjectMethod(
			"setThumbnail",
			"(Landroid/net/Uri;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object()
		);
	}
	inline android::app::wallpaper::WallpaperDescription_Builder WallpaperDescription_Builder::setTitle(JString arg0) const
	{
		return callObjectMethod(
			"setTitle",
			"(Ljava/lang/CharSequence;)Landroid/app/wallpaper/WallpaperDescription$Builder;",
			arg0.object<jstring>()
		);
	}
} // namespace android::app::wallpaper

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::wallpaper;
#endif
