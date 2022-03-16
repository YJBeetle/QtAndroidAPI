#pragma once

#include "../../../JArray.hpp"
#include "../../content/Intent.def.hpp"
#include "./WallpaperService_Engine.def.hpp"
#include "../../../java/io/FileDescriptor.def.hpp"
#include "../../../java/io/PrintWriter.def.hpp"
#include "../../../JString.hpp"
#include "./WallpaperService.def.hpp"

namespace android::service::wallpaper
{
	// Fields
	inline JString WallpaperService::SERVICE_INTERFACE()
	{
		return getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_INTERFACE",
			"Ljava/lang/String;"
		);
	}
	inline JString WallpaperService::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.service.wallpaper.WallpaperService",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline WallpaperService::WallpaperService()
		: android::app::Service(
			"android.service.wallpaper.WallpaperService",
			"()V"
		) {}
	
	// Methods
	inline JObject WallpaperService::onBind(android::content::Intent arg0) const
	{
		return callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.object()
		);
	}
	inline void WallpaperService::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline android::service::wallpaper::WallpaperService_Engine WallpaperService::onCreateEngine() const
	{
		return callObjectMethod(
			"onCreateEngine",
			"()Landroid/service/wallpaper/WallpaperService$Engine;"
		);
	}
	inline void WallpaperService::onDestroy() const
	{
		callMethod<void>(
			"onDestroy",
			"()V"
		);
	}
} // namespace android::service::wallpaper

// Base class headers
#include "../../content/Context.hpp"
#include "../../content/ContextWrapper.hpp"
#include "../../app/Service.hpp"

